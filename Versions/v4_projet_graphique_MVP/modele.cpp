#include "modele.h"
#include "qdebug.h"
#include "QTimer"


Modele::Modele(UnEtat etat)
{
    diapo = new Diaporama();
    diapo->chargerDiapos(diapo->charger(), _Diaporamas);
    setDiaporamaCourant(3);
    setEtat(etat);
}

Diaporama * Modele::getDiaporamaCourant() const
{
    return _Diaporamas[_diaporamaCourant];
}

void Modele::setDiaporamaCourant(int pos)
{
    _diaporamaCourant = pos;
}


void Modele::avancer() {
    if (getDiaporamaCourant()->getPosImageCouranteInt() == getDiaporamaCourant()->getNombreImages() - 1)
    {
        getDiaporamaCourant()->setPosImageCouranteInt(0);

    }
    else
    {
        getDiaporamaCourant()->setPosImageCouranteInt(getDiaporamaCourant()->getPosImageCouranteInt() + 1);
    }
}

void Modele::reculer()
{
    if (getDiaporamaCourant()->getPosImageCouranteInt() == 0)
    {
        getDiaporamaCourant()->setPosImageCouranteInt(getDiaporamaCourant()->getNombreImages() - 1);
    }
    else
    {
        getDiaporamaCourant()->setPosImageCouranteInt(getDiaporamaCourant()->getPosImageCouranteInt() - 1);
    }
}

void Modele::charger()
{
    setDiaporamaCourant(0);
}

void Modele::touchePressee()
{
    if (getEtat() == Modele::automatique)
    {
        setEtat(Modele::manuel);
    }
}

void Modele::changementEtat()
{
    switch (getEtat()) {
    case Modele::manuel:
        setEtat(Modele::automatique);
        break;
    case Modele::automatique:
        setEtat(Modele::manuel);
        break;
    default:
        setEtat(Modele::manuel);
        break;
    }
}

bool Modele::defilageAutoPossible()
{
    bool result;
    result = false;
    if (getEtat() == Modele::automatique)
    {
        result = true;
    }
    return result;
}

Modele::UnEtat Modele::getEtat()
{
    return _etat;
}

void Modele::setEtat(UnEtat unEtat)
{
    _etat = unEtat;
}
