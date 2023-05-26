/********************************************************************************
** Form generated from reading UI file 'AutomaticSoundFieldEqualization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATICSOUNDFIELDEQUALIZATION_H
#define UI_AUTOMATICSOUNDFIELDEQUALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomaticSoundFieldEqualization
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QProgressBar *progressBar;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AutomaticSoundFieldEqualization)
    {
        if (AutomaticSoundFieldEqualization->objectName().isEmpty())
            AutomaticSoundFieldEqualization->setObjectName(QString::fromUtf8("AutomaticSoundFieldEqualization"));
        AutomaticSoundFieldEqualization->resize(667, 373);
        verticalLayout = new QVBoxLayout(AutomaticSoundFieldEqualization);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(AutomaticSoundFieldEqualization);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(526, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(AutomaticSoundFieldEqualization);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);


        horizontalLayout_4->addWidget(frame_6);

        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_2->addWidget(frame_5, 1, 2, 1, 1);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        progressBar = new QProgressBar(frame_4);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        gridLayout_2->addWidget(frame_4, 0, 0, 1, 5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 3, 1, 1);


        gridLayout->addWidget(frame_3, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(AutomaticSoundFieldEqualization);

        QMetaObject::connectSlotsByName(AutomaticSoundFieldEqualization);
    } // setupUi

    void retranslateUi(QWidget *AutomaticSoundFieldEqualization)
    {
        AutomaticSoundFieldEqualization->setWindowTitle(QCoreApplication::translate("AutomaticSoundFieldEqualization", "Automatic Sound Field Equalization", nullptr));
        label->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\243\260\345\234\272\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        label_4->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\211\251\344\275\231\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "00:00:00", nullptr));
        pushButton->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        label_3->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "48%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomaticSoundFieldEqualization: public Ui_AutomaticSoundFieldEqualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATICSOUNDFIELDEQUALIZATION_H
