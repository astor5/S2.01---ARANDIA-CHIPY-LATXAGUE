#ifndef LECTEUR_H
#define LECTEUR_H

#include "typeDiaporama.h"

class Lecteur {
private:
    bool m_estManuel;
    bool m_estVide;
    unsigned short int m_vitesseDefilement; //Vitesse de défilement en secondes
    Diaporama m_diaporama;

public:
    Lecteur(bool=true, unsigned short int=2); //Le mode est manuel par défaut et la vitesse est de 2 secondes par défaut
    Lecteur(const Lecteur&);
    ~Lecteur();

    bool getEstManuel(const Lecteur&) const;
    bool getEstVide(const Lecteur&) const;
    Diaporama getDiaporama(const Diaporama&) const;
    unsigned short int vitesseDefilement(const Lecteur&) const;
    void lireDiaporama(const Diaporama&) const;
    void arreterLecture(const Diaporama&) const;
    void charger(const Diaporama&);




};

#endif // LECTEUR_H
