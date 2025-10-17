/********************************************************************************
** Form generated from reading UI file 'serverdebug.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDEBUG_H
#define UI_SERVERDEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerDebug
{
public:

    void setupUi(QWidget *ServerDebug)
    {
        if (ServerDebug->objectName().isEmpty())
            ServerDebug->setObjectName(QString::fromUtf8("ServerDebug"));
        ServerDebug->resize(400, 300);

        retranslateUi(ServerDebug);

        QMetaObject::connectSlotsByName(ServerDebug);
    } // setupUi

    void retranslateUi(QWidget *ServerDebug)
    {
        ServerDebug->setWindowTitle(QCoreApplication::translate("ServerDebug", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerDebug: public Ui_ServerDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDEBUG_H
