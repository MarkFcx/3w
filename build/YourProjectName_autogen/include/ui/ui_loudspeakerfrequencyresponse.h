/********************************************************************************
** Form generated from reading UI file 'loudspeakerfrequencyresponse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOUDSPEAKERFREQUENCYRESPONSE_H
#define UI_LOUDSPEAKERFREQUENCYRESPONSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoudspeakerFrequencyResponse
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboBox;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QFrame *down_frame;
    QHBoxLayout *horizontalLayout_11;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *frame_16;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *point_x_0_line_edit;
    QLineEdit *point_y_0_line_edit;
    QLineEdit *point_Q_0_line_edit;
    QFrame *frame_17;
    QGridLayout *gridLayout_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *point_x_1_line_edit;
    QLineEdit *point_y_1_line_edit;
    QLineEdit *point_Q_1_line_edit;
    QFrame *frame_18;
    QGridLayout *gridLayout_4;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *point_x_2_line_edit;
    QLineEdit *point_y_2_line_edit;
    QLineEdit *point_Q_2_line_edit;
    QFrame *frame_19;
    QGridLayout *gridLayout_5;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *point_x_3_line_edit;
    QLineEdit *point_y_3_line_edit;
    QLineEdit *point_Q_3_line_edit;
    QFrame *frame_20;
    QGridLayout *gridLayout_6;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *point_x_4_line_edit;
    QLineEdit *point_y_4_line_edit;
    QLineEdit *point_Q_4_line_edit;
    QFrame *frame_21;
    QGridLayout *gridLayout_7;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *point_x_5_line_edit;
    QLineEdit *point_y_5_line_edit;
    QLineEdit *point_Q_5_line_edit;
    QFrame *right_frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *graph_frame;

    void setupUi(QWidget *LoudspeakerFrequencyResponse)
    {
        if (LoudspeakerFrequencyResponse->objectName().isEmpty())
            LoudspeakerFrequencyResponse->setObjectName("LoudspeakerFrequencyResponse");
        LoudspeakerFrequencyResponse->resize(1610, 833);
        LoudspeakerFrequencyResponse->setStyleSheet(QString::fromUtf8("QWidget,\n"
"QFrame#frame\n"
"{\n"
"background: #FAFAFA;\n"
"}"));
        verticalLayout = new QVBoxLayout(LoudspeakerFrequencyResponse);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        frame = new QFrame(LoudspeakerFrequencyResponse);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
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

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(916, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 14px;\n"
"	line-height: 18px;\n"
"	text-align: right;\n"
"	color: #565656;\n"
"}"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	width: 256px;\n"
"	height: 34px;\n"
"	background: #FFFFFF;\n"
"	border: 2px solid #D2D2D2;\n"
"	border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(LoudspeakerFrequencyResponse);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("QFrame#graph_frame,\n"
"QFrame#down_frame,\n"
"QFrame#right_frame\n"
"{\n"
"	background: #FFFFFF;\n"
"border: 1px solid #D2D2D2;\n"
"box-shadow: inset 0px 0px 20px 4px #FFFFFF;\n"
"border-radius: 4px;\n"
"}"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        down_frame = new QFrame(frame_2);
        down_frame->setObjectName("down_frame");
        down_frame->setFrameShape(QFrame::StyledPanel);
        down_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(down_frame);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        frame_15 = new QFrame(down_frame);
        frame_15->setObjectName("frame_15");
        frame_15->setMaximumSize(QSize(140, 16777215));
        frame_15->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #565656;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_15->setFrameShape(QFrame::NoFrame);
        frame_15->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_15);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_12 = new QLabel(frame_15);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(frame_15);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(frame_15);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_14);


        horizontalLayout_11->addWidget(frame_15);

        frame_16 = new QFrame(down_frame);
        frame_16->setObjectName("frame_16");
        frame_16->setMaximumSize(QSize(140, 16777215));
        frame_16->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #EC1A1A;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #EC1A1A;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_16->setFrameShape(QFrame::NoFrame);
        frame_16->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_16);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(-1);
        gridLayout_2->setContentsMargins(10, -1, 10, -1);
        label_17 = new QLabel(frame_16);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 2, 1, 1, 1);

        label_15 = new QLabel(frame_16);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 0, 1, 1, 1);

        label_16 = new QLabel(frame_16);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 1, 1, 1, 1);

        point_x_0_line_edit = new QLineEdit(frame_16);
        point_x_0_line_edit->setObjectName("point_x_0_line_edit");
        point_x_0_line_edit->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(point_x_0_line_edit, 0, 0, 1, 1);

        point_y_0_line_edit = new QLineEdit(frame_16);
        point_y_0_line_edit->setObjectName("point_y_0_line_edit");

        gridLayout_2->addWidget(point_y_0_line_edit, 1, 0, 1, 1);

        point_Q_0_line_edit = new QLineEdit(frame_16);
        point_Q_0_line_edit->setObjectName("point_Q_0_line_edit");

        gridLayout_2->addWidget(point_Q_0_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_16);

        frame_17 = new QFrame(down_frame);
        frame_17->setObjectName("frame_17");
        frame_17->setMaximumSize(QSize(140, 16777215));
        frame_17->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #F2821B;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #F2821B;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_17->setFrameShape(QFrame::NoFrame);
        frame_17->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(frame_17);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(-1);
        gridLayout_3->setContentsMargins(10, -1, 10, -1);
        label_18 = new QLabel(frame_17);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_18, 2, 1, 1, 1);

        label_19 = new QLabel(frame_17);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_19, 0, 1, 1, 1);

        label_20 = new QLabel(frame_17);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_20, 1, 1, 1, 1);

        point_x_1_line_edit = new QLineEdit(frame_17);
        point_x_1_line_edit->setObjectName("point_x_1_line_edit");
        point_x_1_line_edit->setMinimumSize(QSize(80, 0));

        gridLayout_3->addWidget(point_x_1_line_edit, 0, 0, 1, 1);

        point_y_1_line_edit = new QLineEdit(frame_17);
        point_y_1_line_edit->setObjectName("point_y_1_line_edit");

        gridLayout_3->addWidget(point_y_1_line_edit, 1, 0, 1, 1);

        point_Q_1_line_edit = new QLineEdit(frame_17);
        point_Q_1_line_edit->setObjectName("point_Q_1_line_edit");

        gridLayout_3->addWidget(point_Q_1_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_17);

        frame_18 = new QFrame(down_frame);
        frame_18->setObjectName("frame_18");
        frame_18->setMaximumSize(QSize(140, 16777215));
        frame_18->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #BEC111;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #BEC111;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_18->setFrameShape(QFrame::NoFrame);
        frame_18->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(frame_18);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(-1);
        gridLayout_4->setContentsMargins(10, -1, 10, -1);
        label_21 = new QLabel(frame_18);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_21, 2, 1, 1, 1);

        label_22 = new QLabel(frame_18);
        label_22->setObjectName("label_22");
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_22, 0, 1, 1, 1);

        label_23 = new QLabel(frame_18);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_23, 1, 1, 1, 1);

        point_x_2_line_edit = new QLineEdit(frame_18);
        point_x_2_line_edit->setObjectName("point_x_2_line_edit");
        point_x_2_line_edit->setMinimumSize(QSize(80, 0));

        gridLayout_4->addWidget(point_x_2_line_edit, 0, 0, 1, 1);

        point_y_2_line_edit = new QLineEdit(frame_18);
        point_y_2_line_edit->setObjectName("point_y_2_line_edit");

        gridLayout_4->addWidget(point_y_2_line_edit, 1, 0, 1, 1);

        point_Q_2_line_edit = new QLineEdit(frame_18);
        point_Q_2_line_edit->setObjectName("point_Q_2_line_edit");

        gridLayout_4->addWidget(point_Q_2_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_18);

        frame_19 = new QFrame(down_frame);
        frame_19->setObjectName("frame_19");
        frame_19->setMaximumSize(QSize(140, 16777215));
        frame_19->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #85CD10;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #85CD10;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_19->setFrameShape(QFrame::NoFrame);
        frame_19->setFrameShadow(QFrame::Plain);
        gridLayout_5 = new QGridLayout(frame_19);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(-1);
        gridLayout_5->setContentsMargins(10, -1, 10, -1);
        label_24 = new QLabel(frame_19);
        label_24->setObjectName("label_24");
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_24, 2, 1, 1, 1);

        label_25 = new QLabel(frame_19);
        label_25->setObjectName("label_25");
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_25, 0, 1, 1, 1);

        label_26 = new QLabel(frame_19);
        label_26->setObjectName("label_26");
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_26, 1, 1, 1, 1);

        point_x_3_line_edit = new QLineEdit(frame_19);
        point_x_3_line_edit->setObjectName("point_x_3_line_edit");
        point_x_3_line_edit->setMinimumSize(QSize(80, 0));
        point_x_3_line_edit->setMaximumSize(QSize(67, 16777215));

        gridLayout_5->addWidget(point_x_3_line_edit, 0, 0, 1, 1);

        point_y_3_line_edit = new QLineEdit(frame_19);
        point_y_3_line_edit->setObjectName("point_y_3_line_edit");

        gridLayout_5->addWidget(point_y_3_line_edit, 1, 0, 1, 1);

        point_Q_3_line_edit = new QLineEdit(frame_19);
        point_Q_3_line_edit->setObjectName("point_Q_3_line_edit");

        gridLayout_5->addWidget(point_Q_3_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_19);

        frame_20 = new QFrame(down_frame);
        frame_20->setObjectName("frame_20");
        frame_20->setMaximumSize(QSize(140, 16777215));
        frame_20->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #1FD67E;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #1FD67E;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_20->setFrameShape(QFrame::NoFrame);
        frame_20->setFrameShadow(QFrame::Plain);
        gridLayout_6 = new QGridLayout(frame_20);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setVerticalSpacing(-1);
        gridLayout_6->setContentsMargins(10, -1, 10, -1);
        label_27 = new QLabel(frame_20);
        label_27->setObjectName("label_27");
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_27, 2, 1, 1, 1);

        label_28 = new QLabel(frame_20);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_28, 0, 1, 1, 1);

        label_29 = new QLabel(frame_20);
        label_29->setObjectName("label_29");
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_29, 1, 1, 1, 1);

        point_x_4_line_edit = new QLineEdit(frame_20);
        point_x_4_line_edit->setObjectName("point_x_4_line_edit");
        point_x_4_line_edit->setMinimumSize(QSize(80, 0));

        gridLayout_6->addWidget(point_x_4_line_edit, 0, 0, 1, 1);

        point_y_4_line_edit = new QLineEdit(frame_20);
        point_y_4_line_edit->setObjectName("point_y_4_line_edit");

        gridLayout_6->addWidget(point_y_4_line_edit, 1, 0, 1, 1);

        point_Q_4_line_edit = new QLineEdit(frame_20);
        point_Q_4_line_edit->setObjectName("point_Q_4_line_edit");

        gridLayout_6->addWidget(point_Q_4_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_20);

        frame_21 = new QFrame(down_frame);
        frame_21->setObjectName("frame_21");
        frame_21->setMaximumSize(QSize(140, 16777215));
        frame_21->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 14px;\n"
"letter-spacing: -0.25px;\n"
"color: #2AA8DE;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"max-width: 65px;\n"
"height: 22px;\n"
"border: 1px solid #ffffff;\n"
"background: #ffffff;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 24px;\n"
"line-height: 22px;\n"
"letter-spacing: -0.25px;\n"
"color: #2AA8DE;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        frame_21->setFrameShape(QFrame::NoFrame);
        frame_21->setFrameShadow(QFrame::Plain);
        gridLayout_7 = new QGridLayout(frame_21);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(-1);
        gridLayout_7->setContentsMargins(10, -1, 10, -1);
        label_30 = new QLabel(frame_21);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_30, 2, 1, 1, 1);

        label_31 = new QLabel(frame_21);
        label_31->setObjectName("label_31");
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_31, 0, 1, 1, 1);

        label_32 = new QLabel(frame_21);
        label_32->setObjectName("label_32");
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_32, 1, 1, 1, 1);

        point_x_5_line_edit = new QLineEdit(frame_21);
        point_x_5_line_edit->setObjectName("point_x_5_line_edit");
        point_x_5_line_edit->setMinimumSize(QSize(80, 0));

        gridLayout_7->addWidget(point_x_5_line_edit, 0, 0, 1, 1);

        point_y_5_line_edit = new QLineEdit(frame_21);
        point_y_5_line_edit->setObjectName("point_y_5_line_edit");

        gridLayout_7->addWidget(point_y_5_line_edit, 1, 0, 1, 1);

        point_Q_5_line_edit = new QLineEdit(frame_21);
        point_Q_5_line_edit->setObjectName("point_Q_5_line_edit");

        gridLayout_7->addWidget(point_Q_5_line_edit, 2, 0, 1, 1);


        horizontalLayout_11->addWidget(frame_21);


        gridLayout->addWidget(down_frame, 1, 0, 1, 1);

        right_frame = new QFrame(frame_2);
        right_frame->setObjectName("right_frame");
        right_frame->setFrameShape(QFrame::StyledPanel);
        right_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(right_frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(right_frame, 0, 1, 2, 1);

        graph_frame = new QFrame(frame_2);
        graph_frame->setObjectName("graph_frame");
        graph_frame->setMinimumSize(QSize(1361, 620));
        graph_frame->setMaximumSize(QSize(1361, 620));
        graph_frame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
""));

        gridLayout->addWidget(graph_frame, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 8);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(LoudspeakerFrequencyResponse);

        QMetaObject::connectSlotsByName(LoudspeakerFrequencyResponse);
    } // setupUi

    void retranslateUi(QWidget *LoudspeakerFrequencyResponse)
    {
        LoudspeakerFrequencyResponse->setWindowTitle(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Loudspeaker Frequency Response", nullptr));
        label->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "\346\211\254\345\243\260\345\231\250\351\242\221\345\223\215", nullptr));
        label_2->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "\346\265\213\350\257\225\345\243\260\346\272\220", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LoudspeakerFrequencyResponse", "\347\262\211\345\231\252", nullptr));

        label_12->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "FREQ.Hz:", nullptr));
        label_13->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "GAIN dB:", nullptr));
        label_14->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Q:", nullptr));
        label_17->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_15->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_16->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_0_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "1040", nullptr));
        point_y_0_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_0_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
        label_18->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_19->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_20->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_1_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "1040", nullptr));
        point_y_1_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_1_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
        label_21->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_22->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_23->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_2_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "1040", nullptr));
        point_y_2_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_2_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
        label_24->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_25->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_26->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_3_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "20000", nullptr));
        point_y_3_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_3_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
        label_27->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_28->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_29->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_4_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "1040", nullptr));
        point_y_4_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_4_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
        label_30->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_31->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "Hz", nullptr));
        label_32->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "dB/Oct", nullptr));
        point_x_5_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "1040", nullptr));
        point_y_5_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.0", nullptr));
        point_Q_5_line_edit->setText(QCoreApplication::translate("LoudspeakerFrequencyResponse", "0.71", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoudspeakerFrequencyResponse: public Ui_LoudspeakerFrequencyResponse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOUDSPEAKERFREQUENCYRESPONSE_H
