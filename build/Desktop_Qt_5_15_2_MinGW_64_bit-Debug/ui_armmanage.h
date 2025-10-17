/********************************************************************************
** Form generated from reading UI file 'armmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMMANAGE_H
#define UI_ARMMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArmManage
{
public:

    void setupUi(QWidget *ArmManage)
    {
        if (ArmManage->objectName().isEmpty())
            ArmManage->setObjectName(QString::fromUtf8("ArmManage"));
        ArmManage->resize(371, 404);

        retranslateUi(ArmManage);

        QMetaObject::connectSlotsByName(ArmManage);
    } // setupUi

    void retranslateUi(QWidget *ArmManage)
    {
        ArmManage->setWindowTitle(QCoreApplication::translate("ArmManage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArmManage: public Ui_ArmManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMMANAGE_H
