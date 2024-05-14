#include "modele.h"
#include "qdebug.h"


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
        qDebug() << "Passage en mode auto";
        break;
    case Modele::automatique:
        setEtat(Modele::manuel);
        qDebug() << "Passage en mode manuel";
        break;
    default:
        setEtat(Modele::manuel);
        break;
    }
}

void Modele::defilerAutomatiquement()
{
    if (getEtat() == Modele::automatique)
    {
        qDebug() << "Je défile automatiquement";
    }
}

Modele::UnEtat Modele::getEtat()
{
    return _etat;
}

void Modele::setEtat(UnEtat unEtat)
{
    _etat = unEtat;
}
