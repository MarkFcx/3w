/********************************************************************************
** Form generated from reading UI file 'FrequencyDivisionConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCYDIVISIONCONFIGURATION_H
#define UI_FREQUENCYDIVISIONCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrequencyDivisionConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *addFrequencyDivisionButton;
    QFrame *down_frame;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_9;
    QComboBox *comboBox;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_10;
    QComboBox *comboBox_2;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_11;
    QComboBox *comboBox_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_14;
    QComboBox *comboBox_4;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_13;
    QComboBox *comboBox_5;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_12;
    QComboBox *comboBox_6;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_17;
    QComboBox *comboBox_10;
    QFrame *frame_16;
    QVBoxLayout *verticalLayout_16;
    QComboBox *comboBox_11;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_15;
    QComboBox *comboBox_12;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QFrame *frame_18;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *lineEdit;
    QFrame *frame_19;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *lineEdit_2;
    QFrame *frame_20;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *lineEdit_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QFrame *frame_21;
    QVBoxLayout *verticalLayout_23;
    QComboBox *comboBox_7;
    QFrame *frame_22;
    QVBoxLayout *verticalLayout_22;
    QComboBox *comboBox_8;
    QFrame *frame_23;
    QVBoxLayout *verticalLayout_21;
    QComboBox *comboBox_9;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QFrame *frame_24;
    QVBoxLayout *verticalLayout_26;
    QLineEdit *lineEdit_4;
    QFrame *frame_25;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *lineEdit_5;
    QFrame *frame_26;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *lineEdit_6;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QFrame *frame_27;
    QVBoxLayout *verticalLayout_29;
    QComboBox *comboBox_19;
    QFrame *frame_28;
    QVBoxLayout *verticalLayout_28;
    QComboBox *comboBox_20;
    QFrame *frame_29;
    QVBoxLayout *verticalLayout_27;
    QComboBox *comboBox_21;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FrequencyDivisionConfiguration)
    {
        if (FrequencyDivisionConfiguration->objectName().isEmpty())
            FrequencyDivisionConfiguration->setObjectName("FrequencyDivisionConfiguration");
        FrequencyDivisionConfiguration->resize(1699, 580);
        verticalLayout = new QVBoxLayout(FrequencyDivisionConfiguration);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(FrequencyDivisionConfiguration);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 22px;\n"
"line-height: 30px;\n"
"/* identical to box height, or 136% */\n"
"\n"
"\n"
"color: #565656;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(482, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addFrequencyDivisionButton = new QPushButton(frame);
        addFrequencyDivisionButton->setObjectName("addFrequencyDivisionButton");
        addFrequencyDivisionButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 116px;\n"
"	height: 36px;\n"
"\n"
"	background: #EFEFFF;\n"
"	border: 1px solid rgba(61, 61, 252, 0.2);\n"
"	border-radius: 4px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #3D3DFC;\n"
"}"));

        horizontalLayout->addWidget(addFrequencyDivisionButton);


        verticalLayout->addWidget(frame);

        down_frame = new QFrame(FrequencyDivisionConfiguration);
        down_frame->setObjectName("down_frame");
        down_frame->setStyleSheet(QString::fromUtf8("QLineEdit,\n"
"QComboBox\n"
"{\n"
"	min-width: 211px;\n"
"	min-height: 30px;\n"
"	max-width: 211px;\n"
"	max-height: 44px;\n"
"\n"
"	background: #FFFFFF;\n"
"	border: 1px solid #D8D8D8;\n"
"	border-radius: 3px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 12px;\n"
"	line-height: 17px;\n"
"	color: #636468;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    min-width: 14px;\n"
"    min-height: 14px;\n"
"    max-width: 14px;\n"
"    max-height: 14px;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	min-width: 211px;\n"
"	min-height: 44px;\n"
"\n"
"	background: #F9F8F9;\n"
"	border: 0.5px solid #D8D8D8;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 600;\n"
"	font-size: 14px;\n"
"	line-height: 18px;\n"
"\n"
"	color: #2D2F30;\n"
"\n"
"}"));
        down_frame->setFrameShape(QFrame::StyledPanel);
        down_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(down_frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, -1);
        frame_3 = new QFrame(down_frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        comboBox = new QComboBox(frame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_9->addWidget(comboBox);


        verticalLayout_2->addWidget(frame_2);

        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_10);
        verticalLayout_10->setObjectName("verticalLayout_10");
        comboBox_2 = new QComboBox(frame_10);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_10->addWidget(comboBox_2);


        verticalLayout_2->addWidget(frame_10);

        frame_11 = new QFrame(frame_3);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        comboBox_3 = new QComboBox(frame_11);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout_11->addWidget(comboBox_3);


        verticalLayout_2->addWidget(frame_11);


        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(down_frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        frame_12 = new QFrame(frame_4);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_12);
        verticalLayout_14->setObjectName("verticalLayout_14");
        comboBox_4 = new QComboBox(frame_12);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        verticalLayout_14->addWidget(comboBox_4);


        verticalLayout_3->addWidget(frame_12);

        frame_13 = new QFrame(frame_4);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_13);
        verticalLayout_13->setObjectName("verticalLayout_13");
        comboBox_5 = new QComboBox(frame_13);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");

        verticalLayout_13->addWidget(comboBox_5);


        verticalLayout_3->addWidget(frame_13);

        frame_14 = new QFrame(frame_4);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_14);
        verticalLayout_12->setObjectName("verticalLayout_12");
        comboBox_6 = new QComboBox(frame_14);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");

        verticalLayout_12->addWidget(comboBox_6);


        verticalLayout_3->addWidget(frame_14);


        gridLayout->addWidget(frame_4, 0, 1, 1, 1);

        frame_6 = new QFrame(down_frame);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        frame_15 = new QFrame(frame_6);
        frame_15->setObjectName("frame_15");
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_15);
        verticalLayout_17->setObjectName("verticalLayout_17");
        comboBox_10 = new QComboBox(frame_15);
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->setObjectName("comboBox_10");

        verticalLayout_17->addWidget(comboBox_10);


        verticalLayout_5->addWidget(frame_15);

        frame_16 = new QFrame(frame_6);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_16);
        verticalLayout_16->setObjectName("verticalLayout_16");
        comboBox_11 = new QComboBox(frame_16);
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->setObjectName("comboBox_11");

        verticalLayout_16->addWidget(comboBox_11);


        verticalLayout_5->addWidget(frame_16);

        frame_17 = new QFrame(frame_6);
        frame_17->setObjectName("frame_17");
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_17);
        verticalLayout_15->setObjectName("verticalLayout_15");
        comboBox_12 = new QComboBox(frame_17);
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->setObjectName("comboBox_12");

        verticalLayout_15->addWidget(comboBox_12);


        verticalLayout_5->addWidget(frame_17);


        gridLayout->addWidget(frame_6, 0, 2, 1, 1);

        frame_7 = new QFrame(down_frame);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame_7);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        frame_18 = new QFrame(frame_7);
        frame_18->setObjectName("frame_18");
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        verticalLayout_20 = new QVBoxLayout(frame_18);
        verticalLayout_20->setObjectName("verticalLayout_20");
        lineEdit = new QLineEdit(frame_18);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_20->addWidget(lineEdit);


        verticalLayout_6->addWidget(frame_18);

        frame_19 = new QFrame(frame_7);
        frame_19->setObjectName("frame_19");
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_19);
        verticalLayout_19->setObjectName("verticalLayout_19");
        lineEdit_2 = new QLineEdit(frame_19);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_19->addWidget(lineEdit_2);


        verticalLayout_6->addWidget(frame_19);

        frame_20 = new QFrame(frame_7);
        frame_20->setObjectName("frame_20");
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_20);
        verticalLayout_18->setObjectName("verticalLayout_18");
        lineEdit_3 = new QLineEdit(frame_20);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_18->addWidget(lineEdit_3);


        verticalLayout_6->addWidget(frame_20);


        gridLayout->addWidget(frame_7, 0, 3, 1, 1);

        frame_5 = new QFrame(down_frame);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        frame_21 = new QFrame(frame_5);
        frame_21->setObjectName("frame_21");
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(frame_21);
        verticalLayout_23->setObjectName("verticalLayout_23");
        comboBox_7 = new QComboBox(frame_21);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName("comboBox_7");

        verticalLayout_23->addWidget(comboBox_7);


        verticalLayout_4->addWidget(frame_21);

        frame_22 = new QFrame(frame_5);
        frame_22->setObjectName("frame_22");
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        verticalLayout_22 = new QVBoxLayout(frame_22);
        verticalLayout_22->setObjectName("verticalLayout_22");
        comboBox_8 = new QComboBox(frame_22);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName("comboBox_8");

        verticalLayout_22->addWidget(comboBox_8);


        verticalLayout_4->addWidget(frame_22);

        frame_23 = new QFrame(frame_5);
        frame_23->setObjectName("frame_23");
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        verticalLayout_21 = new QVBoxLayout(frame_23);
        verticalLayout_21->setObjectName("verticalLayout_21");
        comboBox_9 = new QComboBox(frame_23);
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->setObjectName("comboBox_9");

        verticalLayout_21->addWidget(comboBox_9);


        verticalLayout_4->addWidget(frame_23);


        gridLayout->addWidget(frame_5, 0, 4, 1, 1);

        frame_8 = new QFrame(down_frame);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_8);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(frame_8);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        frame_24 = new QFrame(frame_8);
        frame_24->setObjectName("frame_24");
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        verticalLayout_26 = new QVBoxLayout(frame_24);
        verticalLayout_26->setObjectName("verticalLayout_26");
        lineEdit_4 = new QLineEdit(frame_24);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_26->addWidget(lineEdit_4);


        verticalLayout_7->addWidget(frame_24);

        frame_25 = new QFrame(frame_8);
        frame_25->setObjectName("frame_25");
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        verticalLayout_25 = new QVBoxLayout(frame_25);
        verticalLayout_25->setObjectName("verticalLayout_25");
        lineEdit_5 = new QLineEdit(frame_25);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_25->addWidget(lineEdit_5);


        verticalLayout_7->addWidget(frame_25);

        frame_26 = new QFrame(frame_8);
        frame_26->setObjectName("frame_26");
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        verticalLayout_24 = new QVBoxLayout(frame_26);
        verticalLayout_24->setObjectName("verticalLayout_24");
        lineEdit_6 = new QLineEdit(frame_26);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_24->addWidget(lineEdit_6);


        verticalLayout_7->addWidget(frame_26);


        gridLayout->addWidget(frame_8, 0, 5, 1, 1);

        frame_9 = new QFrame(down_frame);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_9);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(frame_9);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);

        frame_27 = new QFrame(frame_9);
        frame_27->setObjectName("frame_27");
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        verticalLayout_29 = new QVBoxLayout(frame_27);
        verticalLayout_29->setObjectName("verticalLayout_29");
        comboBox_19 = new QComboBox(frame_27);
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->setObjectName("comboBox_19");

        verticalLayout_29->addWidget(comboBox_19);


        verticalLayout_8->addWidget(frame_27);

        frame_28 = new QFrame(frame_9);
        frame_28->setObjectName("frame_28");
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        verticalLayout_28 = new QVBoxLayout(frame_28);
        verticalLayout_28->setObjectName("verticalLayout_28");
        comboBox_20 = new QComboBox(frame_28);
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->setObjectName("comboBox_20");

        verticalLayout_28->addWidget(comboBox_20);


        verticalLayout_8->addWidget(frame_28);

        frame_29 = new QFrame(frame_9);
        frame_29->setObjectName("frame_29");
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        verticalLayout_27 = new QVBoxLayout(frame_29);
        verticalLayout_27->setObjectName("verticalLayout_27");
        comboBox_21 = new QComboBox(frame_29);
        comboBox_21->addItem(QString());
        comboBox_21->addItem(QString());
        comboBox_21->addItem(QString());
        comboBox_21->setObjectName("comboBox_21");

        verticalLayout_27->addWidget(comboBox_21);


        verticalLayout_8->addWidget(frame_29);


        gridLayout->addWidget(frame_9, 0, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 3, 1, 1);


        verticalLayout->addWidget(down_frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(FrequencyDivisionConfiguration);

        QMetaObject::connectSlotsByName(FrequencyDivisionConfiguration);
    } // setupUi

    void retranslateUi(QWidget *FrequencyDivisionConfiguration)
    {
        FrequencyDivisionConfiguration->setWindowTitle(QCoreApplication::translate("FrequencyDivisionConfiguration", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\345\210\206\351\242\221\351\205\215\347\275\256", nullptr));
        addFrequencyDivisionButton->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\346\267\273\345\212\240\345\210\206\351\242\221", nullptr));
        label_2->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "CH\350\276\223\345\205\245", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        label_3->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\345\210\206\351\242\221", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        label_5->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\344\275\216\351\237\263", nullptr));
        comboBox_10->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_10->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_10->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_11->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_11->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_11->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_12->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_12->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_12->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        label_6->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\345\210\206\351\242\221\347\202\271", nullptr));
        lineEdit->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "870.0", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "870.0", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "870.0", nullptr));
        label_4->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\344\270\255\351\253\230\351\237\263", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_7->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_8->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_9->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_9->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_9->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        label_7->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\345\210\206\351\242\221\347\202\271", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "20000.0", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "20000.0", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "20000.0", nullptr));
        label_8->setText(QCoreApplication::translate("FrequencyDivisionConfiguration", "\351\253\230\351\237\263", nullptr));
        comboBox_19->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_19->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_19->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_20->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_20->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_20->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

        comboBox_21->setItemText(0, QCoreApplication::translate("FrequencyDivisionConfiguration", "1", nullptr));
        comboBox_21->setItemText(1, QCoreApplication::translate("FrequencyDivisionConfiguration", "2", nullptr));
        comboBox_21->setItemText(2, QCoreApplication::translate("FrequencyDivisionConfiguration", "3", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FrequencyDivisionConfiguration: public Ui_FrequencyDivisionConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCYDIVISIONCONFIGURATION_H
