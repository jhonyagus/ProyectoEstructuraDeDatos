#include "tsi.h"
#include "ui_tsi.h"
#include <iostream>
#include <string>
//#include <ManejoArchivo.h>
#include <iostream>
Tsi::Tsi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tsi)
{
    ui->setupUi(this);
}

Tsi::~Tsi()
{
    delete ui;
}

void Tsi::on_pushButton_clicked()
{
/*
    Arbol *arbolE=NULL;
    Palabra palabraT;
    open_file_espanol(arbolE);
    OperacionArbol opA;
    string result;
    QString palabra=ui->txtes->text();
    string vari = palabra.toLocal8Bit().constData();
    convertirMayusculas(vari);
    palabraT.setClaveE(clave(vari));
    opA.busquedaEspanol(arbolE, palabraT.getClaveE(),vari,result);
    ui->txting->setText(QString::fromStdString(result));*/
}
