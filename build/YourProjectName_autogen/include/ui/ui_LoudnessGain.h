/********************************************************************************
** Form generated from reading UI file 'LoudnessGain.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOUDNESSGAIN_H
#define UI_LOUDNESSGAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoudnessGain
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_9;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *total_output_play_button;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *total_output_icon_label;
    QLineEdit *total_output_volume_lineEdit;
    QLabel *text_label;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_11;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QFrame *line_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QFrame *line;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_3;
    QSlider *total_output_slider;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_3;
    QGridLayout *gridLayout_10;
    QLineEdit *total_input_volume_lineEdit;
    QLabel *text_label_2;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *total_input_icon_label;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_7;
    QSlider *TotalInputGainDBSlider;
    QSlider *TotalInputLoudnessSlider;
    QScrollArea *LoudnessGainScrollArea;
    QWidget *LoudnessGainScrollAreaWidget;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *LoudnessGainScrollAreaWidgetLayout;

    void setupUi(QWidget *LoudnessGain)
    {
        if (LoudnessGain->objectName().isEmpty())
            LoudnessGain->setObjectName("LoudnessGain");
        LoudnessGain->resize(1093, 560);
        verticalLayout = new QVBoxLayout(LoudnessGain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 0, 10, 12);
        label = new QLabel(LoudnessGain);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 22px;\n"
"	line-height: 30px;\n"
"	color: #565656;\n"
"}"));

        verticalLayout->addWidget(label);

        frame = new QFrame(LoudnessGain);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(134, 16777215));
        frame_2->setLayoutDirection(Qt::LeftToRight);
        frame_2->setStyleSheet(QString::fromUtf8("QLabel#total_output_icon_label {\n"
"	min-width: 60px;\n"
"	max-width: 60px;\n"
"	max-height: 60px;\n"
"	min-height: 60px;\n"
"    border-image: url(:/icon/horn_icon.png);\n"
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
"QPushButton#total_output_play_button\n"
"{\n"
"	border-image: url(:/icon/play_icon.svg);\n"
"}\n"
"\n"
"QPushButton::checked#total_output_play_button\n"
"{\n"
"	border-image: url(:/icon/speaker_play_stop_icon.svg);\n"
"}\n"
"\n"
"QLineEdit#total_output_volume_lineEdit\n"
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
"	background: rgb(115, 133, 244)"
                        ";    \n"
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
"	height: 20px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}\n"
"\n"
"QFrame#frame_2\n"
"{\n"
"	border: 2px solid #D8D8D8;\n"
"	border-radius: 2px;\n"
"	background: rgb(255, 255, 255);  \n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_2);
        gridLayout_9->setObjectName("gridLayout_9");
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        total_output_play_button = new QPushButton(frame_6);
        total_output_play_button->setObjectName("total_output_play_button");
        total_output_play_button->setMinimumSize(QSize(40, 40));
        total_output_play_button->setMaximumSize(QSize(40, 40));
        total_output_play_button->setFocusPolicy(Qt::StrongFocus);
        total_output_play_button->setCheckable(true);

        horizontalLayout_4->addWidget(total_output_play_button);


        gridLayout_9->addWidget(frame_6, 5, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        total_output_icon_label = new QLabel(frame_4);
        total_output_icon_label->setObjectName("total_output_icon_label");

        horizontalLayout_2->addWidget(total_output_icon_label);


        gridLayout_9->addWidget(frame_4, 0, 0, 1, 1);

        total_output_volume_lineEdit = new QLineEdit(frame_2);
        total_output_volume_lineEdit->setObjectName("total_output_volume_lineEdit");

        gridLayout_9->addWidget(total_output_volume_lineEdit, 2, 0, 1, 1);

        text_label = new QLabel(frame_2);
        text_label->setObjectName("text_label");
        text_label->setAlignment(Qt::AlignCenter);
        text_label->setWordWrap(true);

        gridLayout_9->addWidget(text_label, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        horizontalLayout_8 = new QHBoxLayout(frame_5);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(frame_5);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::NoFrame);
        frame_11->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame_11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_11);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(frame_11);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(frame_11);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(frame_11);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_9 = new QLabel(frame_11);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        line_2 = new QFrame(frame_11);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 1, 1, 1);

        label_7 = new QLabel(frame_11);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(frame_11);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        label_10 = new QLabel(frame_11);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        line = new QFrame(frame_11);
        line->setObjectName("line");
        line->setMinimumSize(QSize(10, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        label_11 = new QLabel(frame_11);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(frame_11);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 9, 0, 1, 1);

        line_3 = new QFrame(frame_11);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 1, 1, 1);

        line_4 = new QFrame(frame_11);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 1, 1, 1);

        line_5 = new QFrame(frame_11);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 4, 1, 1, 1);

        line_6 = new QFrame(frame_11);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 5, 1, 1, 1);

        line_7 = new QFrame(frame_11);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 6, 1, 1, 1);

        line_8 = new QFrame(frame_11);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 7, 1, 1, 1);

        line_9 = new QFrame(frame_11);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 8, 1, 1, 1);

        line_10 = new QFrame(frame_11);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 9, 1, 1, 1);


        horizontalLayout_8->addWidget(frame_11);

        frame_10 = new QFrame(frame_5);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(frame_10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        total_output_slider = new QSlider(frame_10);
        total_output_slider->setObjectName("total_output_slider");
        total_output_slider->setMinimum(-96);
        total_output_slider->setMaximum(12);
        total_output_slider->setOrientation(Qt::Vertical);
        total_output_slider->setTickPosition(QSlider::NoTicks);
        total_output_slider->setTickInterval(6);

        horizontalLayout_3->addWidget(total_output_slider);


        horizontalLayout_8->addWidget(frame_10);

        horizontalSpacer = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        gridLayout_9->addWidget(frame_5, 3, 0, 1, 1);


        horizontalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setMaximumSize(QSize(134, 16777215));
        frame_3->setLayoutDirection(Qt::LeftToRight);
        frame_3->setStyleSheet(QString::fromUtf8("QLabel#total_input_icon_label {\n"
"	min-width: 60px;\n"
"	max-width: 60px;\n"
"	max-height: 60px;\n"
"	min-height: 60px;\n"
"    border-image: url(:/icon/microphone_icon_2.png);\n"
"}\n"
"\n"
"QLabel#text_label_2 {\n"
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
"QPushButton#total_input_play_button\n"
"{\n"
"	background: #ffffff; \n"
"}\n"
"\n"
"QLineEdit#total_input_volume_lineEdit\n"
"{\n"
"	height: 24px;  \n"
"	border: 2px solid rgb(216, 216, 216);\n"
"	border-radius: 3px;	\n"
"	background: #ffffff; \n"
"	color: #636468;\n"
"}\n"
"\n"
"QFrame#frame_3\n"
"{\n"
"	border: 2px solid #D8D8D8;\n"
"	border-radius: 2px;\n"
"	background: rgb(255, 255, 255);  \n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_3);
        gridLayout_10->setObjectName("gridLayout_10");
        total_input_volume_lineEdit = new QLineEdit(frame_3);
        total_input_volume_lineEdit->setObjectName("total_input_volume_lineEdit");

        gridLayout_10->addWidget(total_input_volume_lineEdit, 2, 0, 1, 1);

        text_label_2 = new QLabel(frame_3);
        text_label_2->setObjectName("text_label_2");
        text_label_2->setAlignment(Qt::AlignCenter);
        text_label_2->setWordWrap(true);

        gridLayout_10->addWidget(text_label_2, 1, 0, 1, 1);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        total_input_icon_label = new QLabel(frame_7);
        total_input_icon_label->setObjectName("total_input_icon_label");

        horizontalLayout_5->addWidget(total_input_icon_label);


        gridLayout_10->addWidget(frame_7, 0, 0, 1, 1);

        frame_8 = new QFrame(frame_3);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Plain);
        horizontalLayout_6 = new QHBoxLayout(frame_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        label_2 = new QLabel(frame_8);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(label_2);


        gridLayout_10->addWidget(frame_8, 4, 0, 1, 1);

        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Plain);
        horizontalLayout_7 = new QHBoxLayout(frame_9);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        TotalInputGainDBSlider = new QSlider(frame_9);
        TotalInputGainDBSlider->setObjectName("TotalInputGainDBSlider");
        TotalInputGainDBSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {    \n"
"	border-style: solid;    \n"
"	background: rgb(0,0,0); \n"
"}\n"
"\n"
"QSlider::add-page:vertical {    \n"
"	border: 6px solid #ffffff;\n"
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
"	height: 20px;  \n"
"    border-radius: 3px;	\n"
"	border: 2px solid rgb(117, 170, 255);\n"
"}"));
        TotalInputGainDBSlider->setMaximum(54);
        TotalInputGainDBSlider->setOrientation(Qt::Vertical);
        TotalInputGainDBSlider->setTickPosition(QSlider::NoTicks);
        TotalInputGainDBSlider->setTickInterval(6);

        horizontalLayout_7->addWidget(TotalInputGainDBSlider);

        TotalInputLoudnessSlider = new QSlider(frame_9);
        TotalInputLoudnessSlider->setObjectName("TotalInputLoudnessSlider");
        TotalInputLoudnessSlider->setEnabled(false);
        TotalInputLoudnessSlider->setMouseTracking(true);
        TotalInputLoudnessSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {    \n"
"	border: 5px solid #242424;\n"
"\n"
"	background: rgb(0,0,0); \n"
"}\n"
"\n"
"QSlider::add-page:vertical {    \n"
"	border: 5px solid #ffffff;\n"
"	background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 255, 0, 255), stop:0.05 rgba(0, 255, 73, 255), stop:0.36 rgba(0, 255, 0, 255), stop:0.60199 rgba(206, 206, 0, 253), stop:0.711443 rgba(196, 194, 0, 255), stop:0.791045 rgba(215, 217, 0, 255), stop:0.86 rgba(212, 215, 0, 255), stop:0.935323 rgba(239, 236, 55, 255));    \n"
"}\n"
"\n"
"QSlider::sub-page:vertical {    \n"
"	border: 5px solid #ffffff;\n"
"    background: #565656;    \n"
"\n"
"}\n"
"\n"
"QSlider::handle:vertical {    \n"
"	background: #565656;    \n"
"	border: 5px solid #565656;\n"
"}\n"
"\n"
"QSlider::handle::hover:vertical { \n"
"	background: #565656;    \n"
"	border: 5px solid #565656;\n"
"}"));
        TotalInputLoudnessSlider->setMaximum(54);
        TotalInputLoudnessSlider->setValue(50);
        TotalInputLoudnessSlider->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(TotalInputLoudnessSlider);


        gridLayout_10->addWidget(frame_9, 3, 0, 1, 1);


        horizontalLayout->addWidget(frame_3);

        LoudnessGainScrollArea = new QScrollArea(frame);
        LoudnessGainScrollArea->setObjectName("LoudnessGainScrollArea");
        LoudnessGainScrollArea->setFrameShape(QFrame::NoFrame);
        LoudnessGainScrollArea->setFrameShadow(QFrame::Plain);
        LoudnessGainScrollArea->setWidgetResizable(true);
        LoudnessGainScrollAreaWidget = new QWidget();
        LoudnessGainScrollAreaWidget->setObjectName("LoudnessGainScrollAreaWidget");
        LoudnessGainScrollAreaWidget->setEnabled(true);
        LoudnessGainScrollAreaWidget->setGeometry(QRect(0, 0, 805, 516));
        LoudnessGainScrollAreaWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        horizontalLayout_9 = new QHBoxLayout(LoudnessGainScrollAreaWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        LoudnessGainScrollAreaWidgetLayout = new QHBoxLayout();
        LoudnessGainScrollAreaWidgetLayout->setSpacing(0);
        LoudnessGainScrollAreaWidgetLayout->setObjectName("LoudnessGainScrollAreaWidgetLayout");

        horizontalLayout_9->addLayout(LoudnessGainScrollAreaWidgetLayout);

        LoudnessGainScrollArea->setWidget(LoudnessGainScrollAreaWidget);

        horizontalLayout->addWidget(LoudnessGainScrollArea);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(LoudnessGain);

        QMetaObject::connectSlotsByName(LoudnessGain);
    } // setupUi

    void retranslateUi(QWidget *LoudnessGain)
    {
        LoudnessGain->setWindowTitle(QCoreApplication::translate("LoudnessGain", "Loudness Gain", nullptr));
        label->setText(QCoreApplication::translate("LoudnessGain", "\345\223\215\345\272\246\345\242\236\347\233\212", nullptr));
        total_output_play_button->setText(QString());
        total_output_icon_label->setText(QString());
        text_label->setText(QCoreApplication::translate("LoudnessGain", "Surround Left Surround", nullptr));
        label_3->setText(QCoreApplication::translate("LoudnessGain", "-12", nullptr));
        label_4->setText(QCoreApplication::translate("LoudnessGain", "-24", nullptr));
        label_5->setText(QCoreApplication::translate("LoudnessGain", "-36", nullptr));
        label_6->setText(QCoreApplication::translate("LoudnessGain", "0", nullptr));
        label_9->setText(QCoreApplication::translate("LoudnessGain", "-84", nullptr));
        label_7->setText(QCoreApplication::translate("LoudnessGain", "-60", nullptr));
        label_8->setText(QCoreApplication::translate("LoudnessGain", "-48", nullptr));
        label_10->setText(QCoreApplication::translate("LoudnessGain", "-72", nullptr));
        label_11->setText(QCoreApplication::translate("LoudnessGain", "12", nullptr));
        label_12->setText(QCoreApplication::translate("LoudnessGain", "-96", nullptr));
        text_label_2->setText(QCoreApplication::translate("LoudnessGain", "Surround Left Surround", nullptr));
        total_input_icon_label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoudnessGain: public Ui_LoudnessGain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOUDNESSGAIN_H
