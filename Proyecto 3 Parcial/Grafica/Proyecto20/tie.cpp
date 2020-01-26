#include "tie.h"
#include "ui_tie.h"
#include <string>
#include<iostream>
#include<ManejoArchivo.h>
using namespace  std;
TIE::TIE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TIE)
{
    ui->setupUi(this);
}

TIE::~TIE()
{
    delete ui;
}

void TIE::on_pushButton_clicked()
{
    Arbol *arbol=NULL;
    OperacionArbol opA;
    Palabra palabraT;
    string result;
    QString palabra = ui->txting->text();
    open_file(arbol);
    string var=palabra.toStdString();
    convertirMayusculas(var);
    palabraT.setClave(clave(var));
    opA.busqueda(arbol, palabraT.getClave(),var,result);
    ui->txtespa->setText(QString::fromStdString(result));
}
