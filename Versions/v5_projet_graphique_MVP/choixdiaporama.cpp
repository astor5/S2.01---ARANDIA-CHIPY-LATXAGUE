#include "choixdiaporama.h"
#include "ui_choixdiaporama.h"

choixdiaporama::choixdiaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choixdiaporama)
{
    ui->setupUi(this);
}

choixdiaporama::~choixdiaporama()
{
    delete ui;
}

void choixdiaporama::ajouterItem(QString titre)
{
    ui->comboBox->addItem(titre);
}
