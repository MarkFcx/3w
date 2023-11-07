/********************************************************************************
** Form generated from reading UI file 'AutomaticSoundFieldEqualization.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomaticSoundFieldEqualization
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *top_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *down_frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QWidget *progress_widget;
    QLabel *percent_label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSlider *test_slider;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AutomaticSoundFieldEqualization)
    {
        if (AutomaticSoundFieldEqualization->objectName().isEmpty())
            AutomaticSoundFieldEqualization->setObjectName("AutomaticSoundFieldEqualization");
        AutomaticSoundFieldEqualization->resize(983, 568);
        AutomaticSoundFieldEqualization->setStyleSheet(QString::fromUtf8("QWidget#AutomaticSoundFieldEqualization,\n"
"QFrame#top_frame,\n"
"QFrame#down_frame\n"
"{\n"
"	background: #FFFFFF;\n"
"}"));
        verticalLayout = new QVBoxLayout(AutomaticSoundFieldEqualization);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        top_frame = new QFrame(AutomaticSoundFieldEqualization);
        top_frame->setObjectName("top_frame");
        top_frame->setFrameShape(QFrame::NoFrame);
        top_frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(top_frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(top_frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 22px;\n"
"line-height: 30px;\n"
"/* identical to box height, or 136% */\n"
"\n"
"\n"
"color: #565656;\n"
""));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(526, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(top_frame);

        down_frame = new QFrame(AutomaticSoundFieldEqualization);
        down_frame->setObjectName("down_frame");
        down_frame->setFrameShape(QFrame::NoFrame);
        down_frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(down_frame);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        frame_3 = new QFrame(down_frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(78);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 70));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        progress_widget = new QWidget(frame_4);
        progress_widget->setObjectName("progress_widget");

        horizontalLayout_2->addWidget(progress_widget);

        percent_label = new QLabel(frame_4);
        percent_label->setObjectName("percent_label");
        percent_label->setMinimumSize(QSize(50, 0));
        percent_label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(percent_label);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout_2->addWidget(frame_4, 0, 0, 1, 5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("QFrame#frame_6\n"
"{\n"
"	min-width: 240px;\n"
"	min-height: 42px;\n"
"\n"
"	background: #FFFFFF;\n"
"	border: 1px solid rgba(86, 86, 86, 0.2);\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QLabel#label_4\n"
"{\n"
"	min-width: 48px;\n"
"	max-width: 48px;\n"
"	max-height: 30px;\n"
"	min-height: 30px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 16px;\n"
"	line-height: 30px;\n"
"\n"
"	color: #565656;\n"
"}"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(20, 0, 0, 0);
        label_4 = new QLabel(frame_6);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);


        horizontalLayout_4->addWidget(frame_6);

        cancelButton = new QPushButton(frame_5);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 100px;\n"
"	height: 42px;\n"
"\n"
"	background: #FFFFFF;\n"
"	border: 1px solid rgba(86, 86, 86, 0.2);\n"
"	border-radius: 4px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 16px;\n"
"	line-height: 22px;\n"
"	color: #565656;\n"
"}"));

        horizontalLayout_4->addWidget(cancelButton);


        gridLayout_2->addWidget(frame_5, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        test_slider = new QSlider(frame_3);
        test_slider->setObjectName("test_slider");
        test_slider->setMaximum(100);
        test_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(test_slider, 2, 2, 1, 1);


        gridLayout->addWidget(frame_3, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        verticalLayout->addWidget(down_frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(AutomaticSoundFieldEqualization);

        QMetaObject::connectSlotsByName(AutomaticSoundFieldEqualization);
    } // setupUi

    void retranslateUi(QWidget *AutomaticSoundFieldEqualization)
    {
        AutomaticSoundFieldEqualization->setWindowTitle(QCoreApplication::translate("AutomaticSoundFieldEqualization", "Automatic Sound Field Equalization", nullptr));
        label->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\243\260\345\234\272\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        label_2->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        percent_label->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "0%", nullptr));
        label_4->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\211\251\344\275\231\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "00:00:00", nullptr));
        cancelButton->setText(QCoreApplication::translate("AutomaticSoundFieldEqualization", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomaticSoundFieldEqualization: public Ui_AutomaticSoundFieldEqualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATICSOUNDFIELDEQUALIZATION_H
