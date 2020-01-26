#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>

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

private:
    Ui::Agregar *ui;
};

#endif // AGREGAR_H
