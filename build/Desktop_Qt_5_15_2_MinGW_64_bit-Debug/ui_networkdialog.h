/********************************************************************************
** Form generated from reading UI file 'networkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKDIALOG_H
#define UI_NETWORKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetWorkDialog
{
public:

    void setupUi(QWidget *NetWorkDialog)
    {
        if (NetWorkDialog->objectName().isEmpty())
            NetWorkDialog->setObjectName(QString::fromUtf8("NetWorkDialog"));
        NetWorkDialog->setEnabled(true);
        NetWorkDialog->resize(237, 110);

        retranslateUi(NetWorkDialog);

        QMetaObject::connectSlotsByName(NetWorkDialog);
    } // setupUi

    void retranslateUi(QWidget *NetWorkDialog)
    {
        NetWorkDialog->setWindowTitle(QCoreApplication::translate("NetWorkDialog", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetWorkDialog: public Ui_NetWorkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKDIALOG_H
