#include "modele.h"
#include "qdebug.h"


Modele::Modele(UnEtat etat)
{
    diapo = new Diaporama();
    diapo->chargerDiapos(diapo->charger(), _Diaporamas);
    setDiaporamaCourant(0);
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

void Modele::changementEtat()
{

}

Modele::UnEtat Modele::getEtat()
{
    return _etat;
}

void Modele::setEtat(UnEtat unEtat)
{
    _etat = unEtat;
}
