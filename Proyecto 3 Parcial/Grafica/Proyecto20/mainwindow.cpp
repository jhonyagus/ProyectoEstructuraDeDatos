#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Tsi *ventana = new Tsi;
    ventana->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    TIE *ventana = new TIE;
    ventana->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    Agregar *ventana = new Agregar;
    ventana->show();

}
