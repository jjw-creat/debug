/********************************************************************************
** Form generated from reading UI file 'serialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDIALOG_H
#define UI_SERIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialDialog
{
public:

    void setupUi(QWidget *SerialDialog)
    {
        if (SerialDialog->objectName().isEmpty())
            SerialDialog->setObjectName(QString::fromUtf8("SerialDialog"));
        SerialDialog->resize(400, 300);

        retranslateUi(SerialDialog);

        QMetaObject::connectSlotsByName(SerialDialog);
    } // setupUi

    void retranslateUi(QWidget *SerialDialog)
    {
        SerialDialog->setWindowTitle(QCoreApplication::translate("SerialDialog", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialDialog: public Ui_SerialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDIALOG_H
