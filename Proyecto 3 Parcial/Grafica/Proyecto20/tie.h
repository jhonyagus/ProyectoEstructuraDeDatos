#ifndef TIE_H
#define TIE_H
#include <QDialog>
namespace Ui {
class TIE;
}

class TIE : public QDialog
{
    Q_OBJECT

public:
    explicit TIE(QWidget *parent = nullptr);
    ~TIE();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TIE *ui;
};

#endif // TIE_H
