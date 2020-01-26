#ifndef CORRECTO_H
#define CORRECTO_H

#include <QDialog>

namespace Ui {
class Correcto;
}

class Correcto : public QDialog
{
    Q_OBJECT

public:
    explicit Correcto(QWidget *parent = nullptr);
    ~Correcto();

private:
    Ui::Correcto *ui;
};

#endif // CORRECTO_H
