#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>
#include <correcto.h>
#include <mainwindow.h>

namespace Ui {
class Agregar;
}

class Agregar : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar(QWidget *parent = nullptr);
    ~Agregar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_inputRejected();

private:
    Ui::Agregar *ui;
};

#endif // AGREGAR_H
