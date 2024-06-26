#include "vitessedefilement.h"
#include "ui_vitessedefilement.h"

vitessedefilement::vitessedefilement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vitessedefilement)
{
    ui->setupUi(this);

    QObject::connect(ui->bOk, SIGNAL(clicked()), this, SLOT(accept()));
    QObject::connect(ui->bCancel, SIGNAL(clicked()), this, SLOT(reject()));

}

vitessedefilement::~vitessedefilement()
{
    delete ui;
}

unsigned int vitessedefilement::getVitesseDefilementDialog()
{
    return ui->spinBox->value();
}

void vitessedefilement::setVitesseDefilementDialog(unsigned int vitesse)
{
    ui->spinBox->setValue(vitesse);
}
