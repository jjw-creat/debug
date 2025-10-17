/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *csvPathLabel;
    QLineEdit *csvPathEdit;
    QPushButton *csvPathButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *binPathLabel;
    QLineEdit *binPathEdit;
    QPushButton *binPathButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *odrPathLabel;
    QLineEdit *odrPathEdit;
    QPushButton *odrPathButton;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *netWaitLabel;
    QSpinBox *netWaitBox;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *modelLabel;
    QComboBox *modelBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *applyButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *msgLenLabel;
    QSpinBox *msgLenBox;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *interpolateTimeLabel;
    QSpinBox *interpolateTimeBox;
    QLabel *label_5;
    QFrame *line_2;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *tabDrcLabel;
    QComboBox *tabDrcBox;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *logFormatLabel;
    QComboBox *logFormatBox;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(586, 371);
        verticalLayoutWidget = new QWidget(SettingDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 30, 501, 89));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        csvPathLabel = new QLabel(verticalLayoutWidget);
        csvPathLabel->setObjectName(QString::fromUtf8("csvPathLabel"));

        horizontalLayout->addWidget(csvPathLabel);

        csvPathEdit = new QLineEdit(verticalLayoutWidget);
        csvPathEdit->setObjectName(QString::fromUtf8("csvPathEdit"));

        horizontalLayout->addWidget(csvPathEdit);

        csvPathButton = new QPushButton(verticalLayoutWidget);
        csvPathButton->setObjectName(QString::fromUtf8("csvPathButton"));

        horizontalLayout->addWidget(csvPathButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        binPathLabel = new QLabel(verticalLayoutWidget);
        binPathLabel->setObjectName(QString::fromUtf8("binPathLabel"));

        horizontalLayout_2->addWidget(binPathLabel);

        binPathEdit = new QLineEdit(verticalLayoutWidget);
        binPathEdit->setObjectName(QString::fromUtf8("binPathEdit"));

        horizontalLayout_2->addWidget(binPathEdit);

        binPathButton = new QPushButton(verticalLayoutWidget);
        binPathButton->setObjectName(QString::fromUtf8("binPathButton"));

        horizontalLayout_2->addWidget(binPathButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        odrPathLabel = new QLabel(verticalLayoutWidget);
        odrPathLabel->setObjectName(QString::fromUtf8("odrPathLabel"));

        horizontalLayout_8->addWidget(odrPathLabel);

        odrPathEdit = new QLineEdit(verticalLayoutWidget);
        odrPathEdit->setObjectName(QString::fromUtf8("odrPathEdit"));

        horizontalLayout_8->addWidget(odrPathEdit);

        odrPathButton = new QPushButton(verticalLayoutWidget);
        odrPathButton->setObjectName(QString::fromUtf8("odrPathButton"));

        horizontalLayout_8->addWidget(odrPathButton);


        verticalLayout->addLayout(horizontalLayout_8);

        label_3 = new QLabel(SettingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 54, 12));
        label_4 = new QLabel(SettingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 54, 12));
        line = new QFrame(SettingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 120, 561, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_3 = new QWidget(SettingDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 160, 241, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        netWaitLabel = new QLabel(horizontalLayoutWidget_3);
        netWaitLabel->setObjectName(QString::fromUtf8("netWaitLabel"));

        horizontalLayout_3->addWidget(netWaitLabel);

        netWaitBox = new QSpinBox(horizontalLayoutWidget_3);
        netWaitBox->setObjectName(QString::fromUtf8("netWaitBox"));

        horizontalLayout_3->addWidget(netWaitBox);

        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        horizontalLayoutWidget_4 = new QWidget(SettingDialog);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(50, 240, 161, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        modelLabel = new QLabel(horizontalLayoutWidget_4);
        modelLabel->setObjectName(QString::fromUtf8("modelLabel"));

        horizontalLayout_4->addWidget(modelLabel);

        modelBox = new QComboBox(horizontalLayoutWidget_4);
        modelBox->addItem(QString());
        modelBox->addItem(QString());
        modelBox->addItem(QString());
        modelBox->setObjectName(QString::fromUtf8("modelBox"));

        horizontalLayout_4->addWidget(modelBox);

        horizontalLayoutWidget = new QWidget(SettingDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(330, 330, 241, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(horizontalLayoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_5->addWidget(okButton);

        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);

        applyButton = new QPushButton(horizontalLayoutWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_5->addWidget(applyButton);

        horizontalLayoutWidget_2 = new QWidget(SettingDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(290, 160, 261, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        msgLenLabel = new QCheckBox(horizontalLayoutWidget_2);
        msgLenLabel->setObjectName(QString::fromUtf8("msgLenLabel"));

        horizontalLayout_6->addWidget(msgLenLabel);

        msgLenBox = new QSpinBox(horizontalLayoutWidget_2);
        msgLenBox->setObjectName(QString::fromUtf8("msgLenBox"));

        horizontalLayout_6->addWidget(msgLenBox);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalLayoutWidget_5 = new QWidget(SettingDialog);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(290, 240, 261, 31));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        interpolateTimeLabel = new QCheckBox(horizontalLayoutWidget_5);
        interpolateTimeLabel->setObjectName(QString::fromUtf8("interpolateTimeLabel"));

        horizontalLayout_7->addWidget(interpolateTimeLabel);

        interpolateTimeBox = new QSpinBox(horizontalLayoutWidget_5);
        interpolateTimeBox->setObjectName(QString::fromUtf8("interpolateTimeBox"));

        horizontalLayout_7->addWidget(interpolateTimeBox);

        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        line_2 = new QFrame(SettingDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 196, 561, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(SettingDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 220, 54, 12));
        horizontalLayoutWidget_6 = new QWidget(SettingDialog);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(50, 280, 161, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        tabDrcLabel = new QLabel(horizontalLayoutWidget_6);
        tabDrcLabel->setObjectName(QString::fromUtf8("tabDrcLabel"));

        horizontalLayout_9->addWidget(tabDrcLabel);

        tabDrcBox = new QComboBox(horizontalLayoutWidget_6);
        tabDrcBox->addItem(QString());
        tabDrcBox->addItem(QString());
        tabDrcBox->setObjectName(QString::fromUtf8("tabDrcBox"));
        tabDrcBox->setEnabled(false);

        horizontalLayout_9->addWidget(tabDrcBox);

        horizontalLayoutWidget_7 = new QWidget(SettingDialog);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(290, 280, 161, 31));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        logFormatLabel = new QLabel(horizontalLayoutWidget_7);
        logFormatLabel->setObjectName(QString::fromUtf8("logFormatLabel"));

        horizontalLayout_10->addWidget(logFormatLabel);

        logFormatBox = new QComboBox(horizontalLayoutWidget_7);
        logFormatBox->addItem(QString());
        logFormatBox->addItem(QString());
        logFormatBox->addItem(QString());
        logFormatBox->addItem(QString());
        logFormatBox->setObjectName(QString::fromUtf8("logFormatBox"));

        horizontalLayout_10->addWidget(logFormatBox);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QCoreApplication::translate("SettingDialog", "Dialog", nullptr));
        csvPathLabel->setText(QCoreApplication::translate("SettingDialog", "csv\346\226\207\344\273\266\350\267\257\345\276\204:", nullptr));
        csvPathButton->setText(QCoreApplication::translate("SettingDialog", "\346\265\217\350\247\210...", nullptr));
        binPathLabel->setText(QCoreApplication::translate("SettingDialog", "bin\346\226\207\344\273\266\350\267\257\345\276\204:", nullptr));
        binPathButton->setText(QCoreApplication::translate("SettingDialog", "\346\265\217\350\247\210...", nullptr));
        odrPathLabel->setText(QCoreApplication::translate("SettingDialog", "odr\346\226\207\344\273\266\350\267\257\345\276\204:", nullptr));
        odrPathButton->setText(QCoreApplication::translate("SettingDialog", "\346\265\217\350\247\210...", nullptr));
        label_3->setText(QCoreApplication::translate("SettingDialog", "\346\226\207\344\273\266\350\256\276\347\275\256\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("SettingDialog", "\347\275\221\347\273\234\351\200\211\351\241\271\357\274\232", nullptr));
        netWaitLabel->setText(QCoreApplication::translate("SettingDialog", "\345\272\224\347\255\224\347\255\211\345\276\205\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("SettingDialog", "ms", nullptr));
        modelLabel->setText(QCoreApplication::translate("SettingDialog", "\350\260\203\350\257\225\346\250\241\345\274\217\357\274\232", nullptr));
        modelBox->setItemText(0, QCoreApplication::translate("SettingDialog", "\350\277\234\347\250\213\346\250\241\345\274\217", nullptr));
        modelBox->setItemText(1, QCoreApplication::translate("SettingDialog", "\346\226\207\344\273\266\346\250\241\345\274\217", nullptr));
        modelBox->setItemText(2, QCoreApplication::translate("SettingDialog", "\345\215\263\346\227\266\346\250\241\345\274\217", nullptr));

        okButton->setText(QCoreApplication::translate("SettingDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("SettingDialog", "Cancel", nullptr));
        applyButton->setText(QCoreApplication::translate("SettingDialog", "Apply", nullptr));
        msgLenLabel->setText(QCoreApplication::translate("SettingDialog", "\346\212\245\346\226\207\351\231\220\351\225\277", nullptr));
        label_2->setText(QCoreApplication::translate("SettingDialog", "byte", nullptr));
        interpolateTimeLabel->setText(QCoreApplication::translate("SettingDialog", "\346\217\222\345\200\274\346\227\266\351\232\231\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("SettingDialog", "ms", nullptr));
        label_7->setText(QCoreApplication::translate("SettingDialog", "\350\260\203\350\257\225\350\256\276\347\275\256\357\274\232", nullptr));
        tabDrcLabel->setText(QCoreApplication::translate("SettingDialog", "\351\235\242\346\235\277\346\226\271\345\220\221\357\274\232", nullptr));
        tabDrcBox->setItemText(0, QCoreApplication::translate("SettingDialog", "Vertical", nullptr));
        tabDrcBox->setItemText(1, QCoreApplication::translate("SettingDialog", "Horizontal", nullptr));

        logFormatLabel->setText(QCoreApplication::translate("SettingDialog", "\346\227\245\345\277\227\346\240\274\345\274\217\357\274\232", nullptr));
        logFormatBox->setItemText(0, QCoreApplication::translate("SettingDialog", "2", nullptr));
        logFormatBox->setItemText(1, QCoreApplication::translate("SettingDialog", "8", nullptr));
        logFormatBox->setItemText(2, QCoreApplication::translate("SettingDialog", "10", nullptr));
        logFormatBox->setItemText(3, QCoreApplication::translate("SettingDialog", "16", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
