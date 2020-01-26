#ifndef TSI_H
#define TSI_H
#include <QDialog>
namespace Ui {
class Tsi;
}

class Tsi : public QDialog
{
    Q_OBJECT

public:
    explicit Tsi(QWidget *parent = nullptr);
    ~Tsi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tsi *ui;
};

#endif // TSI_H
