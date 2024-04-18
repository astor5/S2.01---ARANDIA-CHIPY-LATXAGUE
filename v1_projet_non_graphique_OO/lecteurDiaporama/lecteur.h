#ifndef LECTEUR_H
#define LECTEUR_H
#include "image.h"
#include "typeDiaporama.h"
#include <vector>

typedef vector<Image*> DiaporamasT;   // Structure de données contenant les infos sur les images
typedef vector<Diaporama> DiaporamaT;

class Lecteur {

private:
    unsigned m_numDiaporamaCourant;   // numéro du diaporama courant, par défaut 0
    DiaporamasT* m_diaporama;            // pointeurs vers les images du diaporama
    unsigned int m_posImageCourante;  /* position, dans le diaporama,
                                        de l'image courante.
                                        Indéfini quand diaporama vide.
                                        Démarre à 0 quand diaporama non vide */

public:
    Lecteur();
    ~Lecteur();

    //Méthode de la V0
    void avancer(const DiaporamasT&);             // incrémente _posImageCourante, modulo nbImages()
    void reculer(const DiaporamasT&);             // décrémente _posImageCourante, modulo nbImages()
    void changerDiaporama(const DiaporamasT&, unsigned int = 0);    // permet de choisir un diaporama, 0 si aucun diaporama souhaité
    unsigned int saisieVerifChoixDiaporama(const DiaporamaT&);
    unsigned int nbImages() const;
    void charger(DiaporamaT&);
    void declencherAction(char, const DiaporamaT&, unsigned int&,
                               unsigned int&, const ImageT& pImages);


};

#endif // LECTEUR_H
