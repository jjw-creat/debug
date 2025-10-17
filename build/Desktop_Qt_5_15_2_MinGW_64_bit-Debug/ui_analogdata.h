/********************************************************************************
** Form generated from reading UI file 'analogdata.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGDATA_H
#define UI_ANALOGDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalogData
{
public:

    void setupUi(QWidget *AnalogData)
    {
        if (AnalogData->objectName().isEmpty())
            AnalogData->setObjectName(QString::fromUtf8("AnalogData"));
        AnalogData->resize(400, 300);

        retranslateUi(AnalogData);

        QMetaObject::connectSlotsByName(AnalogData);
    } // setupUi

    void retranslateUi(QWidget *AnalogData)
    {
        AnalogData->setWindowTitle(QCoreApplication::translate("AnalogData", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalogData: public Ui_AnalogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGDATA_H
