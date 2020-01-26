#include "correcto.h"
#include "ui_correcto.h"

Correcto::Correcto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Correcto)
{
    ui->setupUi(this);
}

Correcto::~Correcto()
{
    delete ui;
}
