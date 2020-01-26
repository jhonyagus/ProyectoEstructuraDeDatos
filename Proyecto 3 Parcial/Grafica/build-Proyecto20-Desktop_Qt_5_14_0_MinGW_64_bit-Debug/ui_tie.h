/********************************************************************************
** Form generated from reading UI file 'tie.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIE_H
#define UI_TIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TIE
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txting;
    QLineEdit *txtespa;
    QPushButton *pushButton;

    void setupUi(QDialog *TIE)
    {
        if (TIE->objectName().isEmpty())
            TIE->setObjectName(QString::fromUtf8("TIE"));
        TIE->resize(400, 300);
        buttonBox = new QDialogButtonBox(TIE);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(TIE);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 20, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Tw Cen MT Condensed Extra Bold"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(TIE);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS PGothic"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(TIE);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 100, 61, 16));
        label_3->setFont(font1);
        txting = new QLineEdit(TIE);
        txting->setObjectName(QString::fromUtf8("txting"));
        txting->setGeometry(QRect(20, 140, 113, 20));
        txtespa = new QLineEdit(TIE);
        txtespa->setObjectName(QString::fromUtf8("txtespa"));
        txtespa->setGeometry(QRect(240, 140, 113, 20));
        txtespa->setFrame(false);
        txtespa->setReadOnly(true);
        pushButton = new QPushButton(TIE);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 190, 75, 23));

        retranslateUi(TIE);
        QObject::connect(buttonBox, SIGNAL(accepted()), TIE, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TIE, SLOT(reject()));

        QMetaObject::connectSlotsByName(TIE);
    } // setupUi

    void retranslateUi(QDialog *TIE)
    {
        TIE->setWindowTitle(QCoreApplication::translate("TIE", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TIE", "Ingles-Espa\303\261ol", nullptr));
        label_2->setText(QCoreApplication::translate("TIE", "Ingles", nullptr));
        label_3->setText(QCoreApplication::translate("TIE", "Espa\303\261ol", nullptr));
        pushButton->setText(QCoreApplication::translate("TIE", "Traducir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TIE: public Ui_TIE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIE_H
