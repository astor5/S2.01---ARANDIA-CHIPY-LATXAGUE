#include "vitessedefilement.h"
#include "ui_vitessedefilement.h"

vitessedefilement::vitessedefilement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vitessedefilement)
{
    ui->setupUi(this);

    QObject::connect(ui->bOk, SIGNAL(clicked()), this, SLOT(sl_boutonOk()));
    QObject::connect(ui->bCancel, SIGNAL(clicked()), this, SLOT(sl_boutonCancel()));

}

vitessedefilement::~vitessedefilement()
{
    delete ui;
}

unsigned int vitessedefilement::getVitesseDefilementDialog()
{
    return _vitesse;
}

void vitessedefilement::setVitesseDefilementDialog(unsigned int vitesse)
{
    _vitesse = vitesse;
}

void vitessedefilement::sl_boutonOk()
{
    setVitesseDefilementDialog(ui->spinBox->value());
    this->hide();
}

void vitessedefilement::sl_boutonCancel()
{
    setVitesseDefilementDialog(getVitesseDefilementDialog());
    this->hide();
}
