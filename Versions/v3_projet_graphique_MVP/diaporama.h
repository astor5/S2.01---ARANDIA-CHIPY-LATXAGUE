#ifndef TYPE_DIAPORAMA_H
#define TYPE_DIAPORAMA_H
#include <iostream>
using namespace std;
#include <vector>
#include "image.h"
#include "ImageDansDiaporama.h"




class Diaporama {

private:
    string m_titre;
    vector <ImageDansDiaporama> m_localisationImages; // images du diaporama
    unsigned int m_posImage;
    vector<Image> _Images;



public:
    Diaporama(string);
    Diaporama(unsigned short int =0, unsigned int =0);
    Diaporama(const Diaporama&);
    ~Diaporama();

    //Getter
    string getTitre() const;
    vector<ImageDansDiaporama> getLocalisationImages() const;
    unsigned int getPosImageCouranteInt() const;
    ImageDansDiaporama getPositionImage() const;
    unsigned int getNombreImages() const;
    vector<Image> getToutesImages() const;

    vector<Diaporama> & getToutesDiapos();
    Diaporama & getDiapoCourant();
    unsigned int getNumDiapoCourant();
    unsigned int getNombreDiapos();



    //Setter
    void setTitre(const string &);
    void setLocalisationImages(const vector<ImageDansDiaporama> &);
    void setPosImageCouranteInt(const unsigned int&);

    void setToutesDiapos(const vector<Diaporama>&);
    void setNumDiapoCourant(unsigned int);
    void setNombreDiapos(unsigned int);

    //Sous-programmes de base
    void ajouterImage(const ImageDansDiaporama&);
    //void afficherImageCouranteDansDiaporamaCourant();
    void avancer();
    void reculer();
    void triCroissantRang();
    unsigned int nbImages() const;

    vector<Image> charger();
    vector<Diaporama*> chargerDiapos(vector<Image>);

    /*** Getters ***/


    /*** Setters ***/

};




#endif // TYPE_DIAPORAMA_H

