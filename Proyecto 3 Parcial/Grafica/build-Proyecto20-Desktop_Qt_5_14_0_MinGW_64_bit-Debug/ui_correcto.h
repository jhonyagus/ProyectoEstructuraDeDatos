/********************************************************************************
** Form generated from reading UI file 'correcto.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTO_H
#define UI_CORRECTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Correcto
{
public:
    QLabel *label;

    void setupUi(QDialog *Correcto)
    {
        if (Correcto->objectName().isEmpty())
            Correcto->setObjectName(QString::fromUtf8("Correcto"));
        Correcto->resize(400, 300);
        label = new QLabel(Correcto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 90, 371, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Uighur"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(Correcto);

        QMetaObject::connectSlotsByName(Correcto);
    } // setupUi

    void retranslateUi(QDialog *Correcto)
    {
        Correcto->setWindowTitle(QCoreApplication::translate("Correcto", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Correcto", "Palabra ingresada correctamente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Correcto: public Ui_Correcto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTO_H
