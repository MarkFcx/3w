/********************************************************************************
** Form generated from reading UI file 'ManualTuning.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALTUNING_H
#define UI_MANUALTUNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManualTuning
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QFrame *frame_2;

    void setupUi(QWidget *ManualTuning)
    {
        if (ManualTuning->objectName().isEmpty())
            ManualTuning->setObjectName(QString::fromUtf8("ManualTuning"));
        ManualTuning->resize(667, 411);
        verticalLayout = new QVBoxLayout(ManualTuning);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ManualTuning);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"STHeiti\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(ManualTuning);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);

        retranslateUi(ManualTuning);

        QMetaObject::connectSlotsByName(ManualTuning);
    } // setupUi

    void retranslateUi(QWidget *ManualTuning)
    {
        ManualTuning->setWindowTitle(QCoreApplication::translate("ManualTuning", "Manual Tuning", nullptr));
        label->setText(QCoreApplication::translate("ManualTuning", "\345\205\250\350\275\246\346\250\241\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("ManualTuning", "\344\270\273\351\251\276\346\250\241\345\274\217", nullptr));
        label_3->setText(QCoreApplication::translate("ManualTuning", "\345\211\257\351\251\276\346\250\241\345\274\217", nullptr));
        label_4->setText(QCoreApplication::translate("ManualTuning", "\345\267\246\345\220\216\346\250\241\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("ManualTuning", "\345\217\263\345\220\216\346\250\241\345\274\217", nullptr));
        label_6->setText(QCoreApplication::translate("ManualTuning", "\345\211\215\346\216\222\346\250\241\345\274\217", nullptr));
        label_7->setText(QCoreApplication::translate("ManualTuning", "\345\220\216\346\216\222\346\250\241\345\274\217", nullptr));
        pushButton->setText(QCoreApplication::translate("ManualTuning", "\346\226\260\345\273\272\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManualTuning: public Ui_ManualTuning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALTUNING_H
