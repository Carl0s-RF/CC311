/********************************************************************************
** Form generated from reading UI file 'demo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Demo
{
public:
    QPushButton *btn_Close;
    QPushButton *btn_Exit;

    void setupUi(QWidget *Demo)
    {
        if (Demo->objectName().isEmpty())
            Demo->setObjectName(QString::fromUtf8("Demo"));
        Demo->resize(400, 300);
        btn_Close = new QPushButton(Demo);
        btn_Close->setObjectName(QString::fromUtf8("btn_Close"));
        btn_Close->setGeometry(QRect(160, 220, 80, 21));
        btn_Exit = new QPushButton(Demo);
        btn_Exit->setObjectName(QString::fromUtf8("btn_Exit"));
        btn_Exit->setGeometry(QRect(160, 150, 80, 21));

        retranslateUi(Demo);

        QMetaObject::connectSlotsByName(Demo);
    } // setupUi

    void retranslateUi(QWidget *Demo)
    {
        Demo->setWindowTitle(QCoreApplication::translate("Demo", "Demo", nullptr));
        btn_Close->setText(QCoreApplication::translate("Demo", "Salir", nullptr));
        btn_Exit->setText(QCoreApplication::translate("Demo", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Demo: public Ui_Demo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H
