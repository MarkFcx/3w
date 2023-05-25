/********************************************************************************
** Form generated from reading UI file 'measurementpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTPAGE_H
#define UI_MEASUREMENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *TopFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *microphoneButton;
    QPushButton *connectButton;
    QPushButton *PreviousStepButton;
    QPushButton *NextStepButton;
    QFrame *DownFrame;

    void setupUi(QWidget *MeasurementPage)
    {
        if (MeasurementPage->objectName().isEmpty())
            MeasurementPage->setObjectName(QString::fromUtf8("MeasurementPage"));
        MeasurementPage->resize(1025, 462);
        verticalLayout = new QVBoxLayout(MeasurementPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TopFrame = new QFrame(MeasurementPage);
        TopFrame->setObjectName(QString::fromUtf8("TopFrame"));
        TopFrame->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"    border-image: url(:/icon/measurementlabel_1_current.png);\n"
"}"));
        TopFrame->setFrameShape(QFrame::StyledPanel);
        TopFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(TopFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_1 = new QLabel(TopFrame);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        horizontalLayout->addWidget(label_1);

        label_2 = new QLabel(TopFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(TopFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(TopFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(TopFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(TopFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(TopFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(TopFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(TopFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        microphoneButton = new QPushButton(TopFrame);
        microphoneButton->setObjectName(QString::fromUtf8("microphoneButton"));

        horizontalLayout->addWidget(microphoneButton);

        connectButton = new QPushButton(TopFrame);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        horizontalLayout->addWidget(connectButton);

        PreviousStepButton = new QPushButton(TopFrame);
        PreviousStepButton->setObjectName(QString::fromUtf8("PreviousStepButton"));

        horizontalLayout->addWidget(PreviousStepButton);

        NextStepButton = new QPushButton(TopFrame);
        NextStepButton->setObjectName(QString::fromUtf8("NextStepButton"));

        horizontalLayout->addWidget(NextStepButton);


        verticalLayout->addWidget(TopFrame);

        DownFrame = new QFrame(MeasurementPage);
        DownFrame->setObjectName(QString::fromUtf8("DownFrame"));
        DownFrame->setFrameShape(QFrame::StyledPanel);
        DownFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(DownFrame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(MeasurementPage);

        QMetaObject::connectSlotsByName(MeasurementPage);
    } // setupUi

    void retranslateUi(QWidget *MeasurementPage)
    {
        MeasurementPage->setWindowTitle(QCoreApplication::translate("MeasurementPage", "Measurement Page", nullptr));
        label_1->setText(QCoreApplication::translate("MeasurementPage", "\351\200\232\351\201\223\346\265\213\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("MeasurementPage", "\351\200\232\351\201\223\350\267\257\347\224\261", nullptr));
        label_3->setText(QCoreApplication::translate("MeasurementPage", "\345\223\215\345\272\246\345\242\236\347\233\212", nullptr));
        label_4->setText(QCoreApplication::translate("MeasurementPage", "\346\211\254\345\243\260\345\231\250\351\242\221\345\223\215", nullptr));
        label_5->setText(QCoreApplication::translate("MeasurementPage", "\345\210\206\351\242\221\351\205\215\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("MeasurementPage", "\345\243\260\345\234\272\351\242\221\345\223\215", nullptr));
        label_7->setText(QCoreApplication::translate("MeasurementPage", "\345\243\260\345\234\272\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        label_8->setText(QCoreApplication::translate("MeasurementPage", "\344\272\272\345\267\245\350\260\203\351\237\263", nullptr));
        label_9->setText(QCoreApplication::translate("MeasurementPage", "\345\273\266\346\227\266\346\265\213\351\207\217", nullptr));
        microphoneButton->setText(QCoreApplication::translate("MeasurementPage", "\351\272\246\345\205\213\351\243\216icon", nullptr));
        connectButton->setText(QCoreApplication::translate("MeasurementPage", "\350\275\246\346\234\272APP\345\267\262\350\277\236\346\216\245", nullptr));
        PreviousStepButton->setText(QCoreApplication::translate("MeasurementPage", "\344\270\212\344\270\200\346\255\245", nullptr));
        NextStepButton->setText(QCoreApplication::translate("MeasurementPage", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementPage: public Ui_MeasurementPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTPAGE_H
