/********************************************************************************
** Form generated from reading UI file 'keyframewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYFRAMEWIDGET_H
#define UI_KEYFRAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyFrameWidget
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *KeyFrameWidget)
    {
        if (KeyFrameWidget->objectName().isEmpty())
            KeyFrameWidget->setObjectName(QString::fromUtf8("KeyFrameWidget"));
        KeyFrameWidget->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        KeyFrameWidget->setWidget(dockWidgetContents);

        retranslateUi(KeyFrameWidget);

        QMetaObject::connectSlotsByName(KeyFrameWidget);
    } // setupUi

    void retranslateUi(QDockWidget *KeyFrameWidget)
    {
        KeyFrameWidget->setWindowTitle(QCoreApplication::translate("KeyFrameWidget", "DockWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyFrameWidget: public Ui_KeyFrameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYFRAMEWIDGET_H
