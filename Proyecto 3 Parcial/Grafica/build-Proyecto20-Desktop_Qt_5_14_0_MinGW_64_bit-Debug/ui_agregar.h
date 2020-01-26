/********************************************************************************
** Form generated from reading UI file 'agregar.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_H
#define UI_AGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Agregar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Agregar)
    {
        if (Agregar->objectName().isEmpty())
            Agregar->setObjectName(QString::fromUtf8("Agregar"));
        Agregar->resize(376, 300);
        label = new QLabel(Agregar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 311, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(Agregar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 47, 14));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(Agregar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 190, 47, 14));
        label_3->setFont(font1);
        lineEdit = new QLineEdit(Agregar);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 100, 113, 20));
        lineEdit_2 = new QLineEdit(Agregar);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 190, 113, 20));
        pushButton = new QPushButton(Agregar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 120, 75, 23));
        pushButton_2 = new QPushButton(Agregar);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 160, 75, 23));

        retranslateUi(Agregar);

        QMetaObject::connectSlotsByName(Agregar);
    } // setupUi

    void retranslateUi(QDialog *Agregar)
    {
        Agregar->setWindowTitle(QCoreApplication::translate("Agregar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Agregar", "Agrega nuevo contenido al diccionario", nullptr));
        label_2->setText(QCoreApplication::translate("Agregar", "Espa\303\261ol", nullptr));
        label_3->setText(QCoreApplication::translate("Agregar", "Ingles", nullptr));
        pushButton->setText(QCoreApplication::translate("Agregar", "Agregar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Agregar", "Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Agregar: public Ui_Agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_H
