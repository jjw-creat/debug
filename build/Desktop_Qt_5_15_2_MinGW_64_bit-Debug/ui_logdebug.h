/********************************************************************************
** Form generated from reading UI file 'logdebug.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGDEBUG_H
#define UI_LOGDEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogDebug
{
public:

    void setupUi(QWidget *LogDebug)
    {
        if (LogDebug->objectName().isEmpty())
            LogDebug->setObjectName(QString::fromUtf8("LogDebug"));
        LogDebug->resize(400, 300);

        retranslateUi(LogDebug);

        QMetaObject::connectSlotsByName(LogDebug);
    } // setupUi

    void retranslateUi(QWidget *LogDebug)
    {
        LogDebug->setWindowTitle(QCoreApplication::translate("LogDebug", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogDebug: public Ui_LogDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGDEBUG_H
