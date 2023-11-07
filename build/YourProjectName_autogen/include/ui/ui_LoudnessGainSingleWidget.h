/********************************************************************************
** Form generated from reading UI file 'LoudnessGainSingleWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOUDNESSGAINSINGLEWIDGET_H
#define UI_LOUDNESSGAINSINGLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoudnessGainSingleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QLineEdit *speaker_volume_lineEdit;
    QLabel *text_label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *speaker_icon_label;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *speaker_play_button;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_9;
    QFrame *line_2;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QFrame *line;
    QLabel *label;
    QLabel *label_10;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QSlider *speaker_slider;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *LoudnessGainSingleWidget)
    {
        if (LoudnessGainSingleWidget->objectName().isEmpty())
            LoudnessGainSingleWidget->setObjectName("LoudnessGainSingleWidget");
        LoudnessGainSingleWidget->resize(134, 589);
        LoudnessGainSingleWidget->setMaximumSize(QSize(134, 16777215));
        LoudnessGainSingleWidget->setStyleSheet(QString::fromUtf8("QLabel#speaker_icon_label {\n"
"	min-width: 60px;\n"
"	max-width: 60px;\n"
"	max-height: 60px;\n"
"	min-height: 60px;\n"
"    border-image: url(:/icon/speaker_icon.png);\n"
"}\n"
"\n"
"QLabel#text_label {\n"
"	width: 77px;\n"
"	height: 28px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 12px;\n"
"	line-height: 14px;\n"
"}\n"
"\n"
"QPushButton#speaker_play_button\n"
"{\n"
"	border-image: url(:/icon/speaker_play_icon.png);\n"
"}\n"
"\n"
"QPushButton::checked#speaker_play_button\n"
"{\n"
"	border-image: url(:/icon/speaker_play_stop_icon.png);\n"
"}\n"
"\n"
"QLineEdit#speaker_volume_lineEdit\n"
"{\n"
"	height: 24px;  \n"
"	border: 2px solid rgb(216, 216, 216);\n"
"	border-radius: 3px;	\n"
"	background: #ffffff; \n"
"	color: #636468;\n"
"}\n"
"\n"
"QSlider::groove:vertical {    \n"
"	border-style: solid;    \n"
"	background: rgb(0,0,0); \n"
"}\n"
"\n"
"QSlider::add-page:vertical {    \n"
"	border: 6px solid #ffffff;\n"
"	background: rgb(115, 133, 244);    \n"
""
                        "}\n"
"\n"
"QSlider::sub-page:vertical {    \n"
"	border: 6px solid #ffffff;    \n"
"    background: #D6D6D6;    \n"
"}\n"
"\n"
"QSlider::handle:vertical {    \n"
"	background: rgb(117, 170, 255);    \n"
"	width: 20px;    \n"
"	height: 20px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}\n"
"\n"
"QSlider::handle::hover:vertical { \n"
"	background: rgb(117, 170, 255);    \n"
"	width: 20px;    \n"
"	height: 16px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}\n"
"\n"
"QWidget#LoudnessGainSingleWidget\n"
"{\n"
"	border: 2px solid #D8D8D8;\n"
"	border-radius: 2px;\n"
"	background: rgb(255, 255, 255);  \n"
"}\n"
"QFrame#frame\n"
"{\n"
"	border: 2px solid #D8D8D8;\n"
"	border-radius: 2px;\n"
"	background: rgb(255, 255, 255);  \n"
"}"));
        verticalLayout = new QVBoxLayout(LoudnessGainSingleWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(LoudnessGainSingleWidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(134, 16777215));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setStyleSheet(QString::fromUtf8("QLabel#speaker_icon_label {\n"
"	min-width: 60px;\n"
"	max-width: 60px;\n"
"	max-height: 60px;\n"
"	min-height: 60px;\n"
"    border-image: url(:/icon/speaker_icon.png);\n"
"}\n"
"\n"
"QLabel#text_label {\n"
"	width: 77px;\n"
"	height: 28px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 12px;\n"
"	line-height: 14px;\n"
"	/* or 117% */\n"
"\n"
"	text-align: center;\n"
"	color: #636468;\n"
"}\n"
"\n"
"QPushButton#speaker_play_button\n"
"{\n"
"	border-image: url(:/icon/play_icon.svg);\n"
"}\n"
"\n"
"QPushButton::checked#speaker_play_button\n"
"{\n"
"	border-image: url(:/icon/speaker_play_stop_icon.svg);\n"
"}\n"
"\n"
"QLineEdit#speaker_volume_lineEdit\n"
"{\n"
"	height: 24px;  \n"
"	border: 2px solid rgb(216, 216, 216);\n"
"	border-radius: 3px;	\n"
"	background: #ffffff; \n"
"	color: #636468;\n"
"}\n"
"\n"
"QSlider::groove:vertical {    \n"
"	border-style: solid;    \n"
"	background: rgb(0,0,0); \n"
"}\n"
"\n"
"QSlider::add-page:vertical {    \n"
"	border: 6"
                        "px solid #ffffff;\n"
"	background: rgb(115, 133, 244);    \n"
"}\n"
"\n"
"QSlider::sub-page:vertical {    \n"
"	border: 6px solid #ffffff;    \n"
"    background: #D6D6D6;    \n"
"}\n"
"\n"
"QSlider::handle:vertical {    \n"
"	background: rgb(117, 170, 255);    \n"
"	width: 20px;    \n"
"	height: 20px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}\n"
"\n"
"QSlider::handle::hover:vertical { \n"
"	background: rgb(117, 170, 255);    \n"
"	width: 20px;    \n"
"	height: 16px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}\n"
"\n"
"QFrame#frame_3\n"
"{\n"
"	background: rgb(255, 255, 255);  \n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setObjectName("gridLayout_10");
        speaker_volume_lineEdit = new QLineEdit(frame);
        speaker_volume_lineEdit->setObjectName("speaker_volume_lineEdit");

        gridLayout_10->addWidget(speaker_volume_lineEdit, 2, 0, 1, 1);

        text_label = new QLabel(frame);
        text_label->setObjectName("text_label");
        text_label->setAlignment(Qt::AlignCenter);
        text_label->setWordWrap(true);

        gridLayout_10->addWidget(text_label, 1, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        speaker_icon_label = new QLabel(frame_2);
        speaker_icon_label->setObjectName("speaker_icon_label");

        horizontalLayout_5->addWidget(speaker_icon_label);


        gridLayout_10->addWidget(frame_2, 0, 0, 1, 1);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        speaker_play_button = new QPushButton(frame_3);
        speaker_play_button->setObjectName("speaker_play_button");
        speaker_play_button->setMinimumSize(QSize(40, 40));
        speaker_play_button->setMaximumSize(QSize(40, 40));
        speaker_play_button->setCheckable(true);

        horizontalLayout_6->addWidget(speaker_play_button);


        gridLayout_10->addWidget(frame_3, 4, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_7 = new QHBoxLayout(frame_4);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(12, 0, 0, 0);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(frame_5);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_9 = new QLabel(frame_5);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        line_2 = new QFrame(frame_5);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 1, 1, 1);

        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        line = new QFrame(frame_5);
        line->setObjectName("line");
        line->setMinimumSize(QSize(10, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        label = new QLabel(frame_5);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_10 = new QLabel(frame_5);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 1, 1, 1);

        line_4 = new QFrame(frame_5);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 1, 1, 1);

        line_5 = new QFrame(frame_5);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 4, 1, 1, 1);

        line_6 = new QFrame(frame_5);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 5, 1, 1, 1);

        line_7 = new QFrame(frame_5);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 6, 1, 1, 1);

        line_8 = new QFrame(frame_5);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 7, 1, 1, 1);

        line_9 = new QFrame(frame_5);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 8, 1, 1, 1);

        line_10 = new QFrame(frame_5);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 9, 1, 1, 1);


        horizontalLayout_7->addWidget(frame_5);

        speaker_slider = new QSlider(frame_4);
        speaker_slider->setObjectName("speaker_slider");
        speaker_slider->setMinimum(-96);
        speaker_slider->setMaximum(12);
        speaker_slider->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(speaker_slider);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout_10->addWidget(frame_4, 3, 0, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(LoudnessGainSingleWidget);

        QMetaObject::connectSlotsByName(LoudnessGainSingleWidget);
    } // setupUi

    void retranslateUi(QWidget *LoudnessGainSingleWidget)
    {
        LoudnessGainSingleWidget->setWindowTitle(QCoreApplication::translate("LoudnessGainSingleWidget", "Form", nullptr));
        text_label->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "Surround Left Surround", nullptr));
        speaker_icon_label->setText(QString());
        speaker_play_button->setText(QString());
        label_3->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-12", nullptr));
        label_4->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-24", nullptr));
        label_5->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-36", nullptr));
        label_2->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "0", nullptr));
        label_9->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-84", nullptr));
        label_7->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-60", nullptr));
        label_6->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-48", nullptr));
        label_8->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-72", nullptr));
        label->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "12", nullptr));
        label_10->setText(QCoreApplication::translate("LoudnessGainSingleWidget", "-96", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoudnessGainSingleWidget: public Ui_LoudnessGainSingleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOUDNESSGAINSINGLEWIDGET_H
