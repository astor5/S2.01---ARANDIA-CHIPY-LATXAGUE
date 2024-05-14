#include <iostream>
#include "diaporama.h"
using namespace std;

Diaporama::Diaporama(string titre):
    m_titre(titre){
}

Diaporama::Diaporama(unsigned short vitesseDefilement, unsigned int position):
    m_vitesseDefilement(vitesseDefilement),
    m_posImage(position){
}

Diaporama::Diaporama(const Diaporama & original):
    m_titre(original.m_titre),
    m_vitesseDefilement(original.m_vitesseDefilement),
    m_localisationImages(original.m_localisationImages),
    m_posImage(original.m_posImage){
}

Diaporama::~Diaporama()
{
}

string Diaporama::getTitre() const
{
    return m_titre;
}

vector<ImageDansDiaporama> Diaporama::getLocalisationImages() const
{
    return m_localisationImages;
}

unsigned int Diaporama::getPosImageCouranteInt() const
{
    return m_posImage;
}

ImageDansDiaporama Diaporama::getPositionImage() const
{
    return getLocalisationImages()[getPosImageCouranteInt()];
}

unsigned int Diaporama::getNombreImages() const
{
    return getLocalisationImages().size();
}

void Diaporama::setTitre(const string & titre)
{
    m_titre = titre;
}

void Diaporama::setLocalisationImages(const std::vector<ImageDansDiaporama> &images)
{
    m_localisationImages = images;
}

void Diaporama::setPosImageCouranteInt(const unsigned int& positionImgC)
{
    m_posImage = positionImgC;
}

void Diaporama::ajouterImage(const ImageDansDiaporama& image)
{
    m_localisationImages.push_back(image);
}

unsigned int Diaporama::nbImages() const
{
    return m_localisationImages.size();
}

void Diaporama::charger(Images &pImages)
{
    Image imageACharger("", "objet", "C:\\cartesDisney\\Disney_tapis.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Blanche Neige", "personnage", "C:\\cartesDisney\\Disney_4.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Alice", "personnage", "C:\\cartesDisney\\Disney_2.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Mickey", "animal", "C:\\cartesDisney\\Disney_19.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Pinnochio", "personnage", "C:\\cartesDisney\\Disney_29.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("chateau", "objet", "C:\\cartesDisney\\Disney_0.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Minnie", "personnage", "C:\\cartesDisney\\Disney_14.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("Bambi", "animal", "C:\\cartesDisney\\Disney_3.gif");
    pImages.push_back(imageACharger);
}

void Diaporama::chargerDiapos(Images &pImages)
{
    ImageDansDiaporama imageDansDiapo;

    Diaporama diaporama("Diaporama par defaut");

    imageDansDiapo = ImageDansDiaporama(pImages,0,1);
    diaporama.ajouterImage(imageDansDiapo);
    diaporama.setPosImageCouranteInt(0);
    getToutesDiapos().push_back(diaporama);

    // Diaporama de Pantxika
    Diaporama diapoPantxika("Diaporama Pantxika");

    // Les images du diaporama de Pantxika
    imageDansDiapo = ImageDansDiaporama(pImages,2,3);
    diapoPantxika.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,4,1);
    diapoPantxika.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,1,2);
    diapoPantxika.ajouterImage(imageDansDiapo);
    diapoPantxika.setPosImageCouranteInt(0);

    // ajout du diaporama dans le tableau de diaporamas
    getToutesDiapos().push_back(diapoPantxika);

    // Diaporama de Thierry
    Diaporama diapoThierry("Diaporama de Thierry");

    // Les images du diaporama de Thierry
    imageDansDiapo = ImageDansDiaporama(pImages,4,1);
    diapoThierry.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,1,2);
    diapoThierry.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,2,3);
    diapoThierry.ajouterImage(imageDansDiapo);
    diapoThierry.setPosImageCouranteInt(0);

    // ajout du diaporama dans le tableau de diaporamas
    getToutesDiapos().push_back(diapoThierry);

    // Diaporama de Yann
    Diaporama diapoYann("Diaporama Yann");

    // Les images du diaporama de Yann
    imageDansDiapo = ImageDansDiaporama(pImages,5,5);
    diapoYann.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,3,1);
    diapoYann.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,1,2);
    diapoYann.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,2,3);
    diapoYann.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,4,4);
    diapoYann.ajouterImage(imageDansDiapo);
    diapoYann.setPosImageCouranteInt(0);

    // ajout du diaporama dans le tableau de diaporamas
    getToutesDiapos().push_back(diapoYann);

    // Diaporama de Manu
    Diaporama diapoManu("Diaporama Manu");

    // Les images du diaporama de Manu
    imageDansDiapo = ImageDansDiaporama(pImages,4,4);
    diapoManu.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,1,3);
    diapoManu.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,2,2);
    diapoManu.ajouterImage(imageDansDiapo);
    imageDansDiapo = ImageDansDiaporama(pImages,3,1);
    diapoManu.ajouterImage(imageDansDiapo);
    diapoManu.setPosImageCouranteInt(0);

    // ajout du diaporama dans le tableau de diaporamas
    getToutesDiapos().push_back(diapoManu);
}


/*
void Diaporama::afficherImageCouranteDansDiaporamaCourant() {
    cout << endl << endl;
    cout << "DIAPORAMA : " << getTitre() << endl << endl;
    cout << getPositionImage().getRang() << " sur " << nbImages() << " / ";
    getPositionImage().afficher();
}*/

void Diaporama::triCroissantRang() {
    unsigned int taille = this->nbImages();
    ImageDansDiaporama imageDansDiapo;
    for (unsigned int ici = taille - 1; ici >= 1; ici--) {
        for (unsigned int i = 0; i < ici; i++) {
            if (m_localisationImages[i].getRang() > m_localisationImages[i + 1].getRang()) {
                imageDansDiapo = m_localisationImages[i];
                m_localisationImages[i] = m_localisationImages[i + 1];
                m_localisationImages[i + 1] = imageDansDiapo;
            }
        }
    }
}