/********************************************************************************
** Form generated from reading UI file 'tsi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSI_H
#define UI_TSI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tsi
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtes;
    QLineEdit *txting;
    QPushButton *pushButton;

    void setupUi(QDialog *Tsi)
    {
        if (Tsi->objectName().isEmpty())
            Tsi->setObjectName(QString::fromUtf8("Tsi"));
        Tsi->resize(400, 300);
        buttonBox = new QDialogButtonBox(Tsi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Tsi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 40, 121, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Tw Cen MT Condensed Extra Bold"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Tsi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 71, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Banner"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(Tsi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 90, 71, 41));
        label_3->setFont(font1);
        txtes = new QLineEdit(Tsi);
        txtes->setObjectName(QString::fromUtf8("txtes"));
        txtes->setGeometry(QRect(10, 140, 113, 20));
        txting = new QLineEdit(Tsi);
        txting->setObjectName(QString::fromUtf8("txting"));
        txting->setGeometry(QRect(240, 140, 131, 21));
        txting->setFrame(false);
        txting->setReadOnly(true);
        pushButton = new QPushButton(Tsi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 180, 75, 23));

        retranslateUi(Tsi);
        QObject::connect(buttonBox, SIGNAL(accepted()), Tsi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Tsi, SLOT(reject()));

        QMetaObject::connectSlotsByName(Tsi);
    } // setupUi

    void retranslateUi(QDialog *Tsi)
    {
        Tsi->setWindowTitle(QCoreApplication::translate("Tsi", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Tsi", "Espa\303\261ol-Ingles", nullptr));
        label_2->setText(QCoreApplication::translate("Tsi", "Espa\303\261ol", nullptr));
        label_3->setText(QCoreApplication::translate("Tsi", "Ingles", nullptr));
        pushButton->setText(QCoreApplication::translate("Tsi", "Traducir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tsi: public Ui_Tsi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSI_H
