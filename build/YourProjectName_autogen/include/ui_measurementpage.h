/********************************************************************************
** Form generated from reading UI file 'measurementpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *TopFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_11;
    QFrame *frame_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon_label_1;
    QLabel *text_label_1;
    QLabel *line_label_1;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *icon_label_2;
    QLabel *text_label_2;
    QLabel *line_label_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *icon_label_3;
    QLabel *text_label_3;
    QLabel *line_label_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *icon_label_4;
    QLabel *text_label_4;
    QLabel *line_label_4;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *icon_label_5;
    QLabel *text_label_5;
    QLabel *line_label_5;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *icon_label_6;
    QLabel *text_label_6;
    QLabel *line_label_6;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *icon_label_7;
    QLabel *text_label_7;
    QLabel *line_label_7;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *icon_label_8;
    QLabel *text_label_8;
    QLabel *line_label_8;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *icon_label_9;
    QLabel *text_label_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *micButton;
    QPushButton *connectButton;
    QPushButton *PreviousStepButton;
    QPushButton *NextStepButton;
    QFrame *DownFrame;

    void setupUi(QWidget *MeasurementPage)
    {
        if (MeasurementPage->objectName().isEmpty())
            MeasurementPage->setObjectName("MeasurementPage");
        MeasurementPage->resize(1680, 982);
        MeasurementPage->setMinimumSize(QSize(1680, 982));
        MeasurementPage->setMaximumSize(QSize(1680, 982));
        MeasurementPage->setStyleSheet(QString::fromUtf8("QFrame#TopFrame \n"
"{\n"
"	    background: #ffffff;\n"
"}\n"
"\n"
"QFrame#DownFrame \n"
"{\n"
"	    background: rgb(250, 250, 250);\n"
"}\n"
"\n"
"QPushButton#NextStepButton,\n"
"QPushButton#PreviousStepButton\n"
"{\n"
"    min-width: 70px;\n"
"	max-width: 70px;\n"
"	max-height: 36px;\n"
"	min-height: 36px;\n"
"    background: rgb(111, 63, 252);\n"
"    border-radius: 4px;\n"
"    \n"
"font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 20px;\n"
"\n"
"color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed#NextStepButton,\n"
"QPushButton:pressed#PreviousStepButton\n"
"{\n"
"    background: rgb(81, 63, 222);\n"
"}\n"
"\n"
"\n"
"QPushButton#connectButton\n"
"{\n"
"    min-width: 152px;\n"
"	max-width: 152px;\n"
"	max-height: 36px;\n"
"	min-height: 36px;\n"
"    background: rgb(239, 239, 255);\n"
"	border: 2px solid rgb(203, 202, 254);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 18px;\n"
"    \n"
"    font-weight: 600;\n"
"    text-align: center;"
                        "\n"
"    color: rgb(111, 63, 252);\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed#connectButton\n"
"{\n"
"    background: rgb(219, 219, 225);\n"
"}\n"
"\n"
"QPushButton#micButton\n"
"{\n"
"    min-width: 36px;\n"
"	max-width: 36px;\n"
"	max-height: 36px;\n"
"	min-height: 36px;\n"
"    background: rgb(250, 250, 250);\n"
"    border: 2px solid rgb(217, 217, 217);\n"
"    border-radius: 4px;\n"
"    border-image: url(:/icon/mic_icon.png);\n"
"}\n"
"\n"
"QPushButton:pressed#micButton\n"
"{\n"
"    background: rgb(219, 219, 225);\n"
"}"));
        verticalLayout = new QVBoxLayout(MeasurementPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TopFrame = new QFrame(MeasurementPage);
        TopFrame->setObjectName("TopFrame");
        TopFrame->setMinimumSize(QSize(1680, 60));
        TopFrame->setMaximumSize(QSize(1680, 60));
        TopFrame->setStyleSheet(QString::fromUtf8(""));
        TopFrame->setFrameShape(QFrame::NoFrame);
        TopFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(TopFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        frame = new QFrame(TopFrame);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3,\n"
"QLabel#icon_label_4,\n"
"QLabel#icon_label_5,\n"
"QLabel#icon_label_6,\n"
"QLabel#icon_label_7,\n"
"QLabel#icon_label_8,\n"
"QLabel#icon_label_9\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3,\n"
"QLabel#text_label_4,\n"
"QLabel#text_label_5,\n"
"QLabel#text_label_6,\n"
"QLabel#text_label_7,\n"
"QLabel#text_label_8,\n"
"QLabel#text_label_9\n"
"{\n"
"	max-width: 84px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3,\n"
"QLabel#line_label_4,\n"
"QLabel#line_label_5,\n"
"QLabel#line_label_6,\n"
"QLabel#line_label_7,\n"
"QLabel#line_label_8,\n"
"QLabel#line_label_9\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;"
                        "\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_11 = new QHBoxLayout(frame);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        frame_1 = new QFrame(frame);
        frame_1->setObjectName("frame_1");
        frame_1->setStyleSheet(QString::fromUtf8("QLabel#icon_label_1\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: rgb(58, 218, 170);\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_current.svg);\n"
"}\n"
"\n"
"QLabel#text_label_1\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #565656;\n"
"}\n"
"\n"
"QLabel#line_label_1\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: rgb(58, 218, 170);\n"
"}"));
        frame_1->setFrameShape(QFrame::NoFrame);
        frame_1->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_1);
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(-1);
#endif
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        icon_label_1 = new QLabel(frame_1);
        icon_label_1->setObjectName("icon_label_1");

        horizontalLayout_2->addWidget(icon_label_1);

        text_label_1 = new QLabel(frame_1);
        text_label_1->setObjectName("text_label_1");

        horizontalLayout_2->addWidget(text_label_1);

        line_label_1 = new QLabel(frame_1);
        line_label_1->setObjectName("line_label_1");

        horizontalLayout_2->addWidget(line_label_1);


        horizontalLayout_11->addWidget(frame_1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("QLabel#icon_label_2\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: rgb(58, 218, 170);\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_prepare.svg);\n"
"}\n"
"\n"
"QLabel#text_label_2\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #565656;\n"
"}\n"
"\n"
"QLabel#line_label_2\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        icon_label_2 = new QLabel(frame_2);
        icon_label_2->setObjectName("icon_label_2");

        horizontalLayout_3->addWidget(icon_label_2);

        text_label_2 = new QLabel(frame_2);
        text_label_2->setObjectName("text_label_2");

        horizontalLayout_3->addWidget(text_label_2);

        line_label_2 = new QLabel(frame_2);
        line_label_2->setObjectName("line_label_2");

        horizontalLayout_3->addWidget(line_label_2);


        horizontalLayout_11->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
#ifndef Q_OS_MAC
        horizontalLayout_4->setSpacing(-1);
#endif
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        icon_label_3 = new QLabel(frame_3);
        icon_label_3->setObjectName("icon_label_3");

        horizontalLayout_4->addWidget(icon_label_3);

        text_label_3 = new QLabel(frame_3);
        text_label_3->setObjectName("text_label_3");

        horizontalLayout_4->addWidget(text_label_3);

        line_label_3 = new QLabel(frame_3);
        line_label_3->setObjectName("line_label_3");

        horizontalLayout_4->addWidget(line_label_3);


        horizontalLayout_11->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
#ifndef Q_OS_MAC
        horizontalLayout_5->setSpacing(-1);
#endif
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        icon_label_4 = new QLabel(frame_4);
        icon_label_4->setObjectName("icon_label_4");

        horizontalLayout_5->addWidget(icon_label_4);

        text_label_4 = new QLabel(frame_4);
        text_label_4->setObjectName("text_label_4");
        text_label_4->setMinimumSize(QSize(84, 0));

        horizontalLayout_5->addWidget(text_label_4);

        line_label_4 = new QLabel(frame_4);
        line_label_4->setObjectName("line_label_4");

        horizontalLayout_5->addWidget(line_label_4);


        horizontalLayout_11->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
#ifndef Q_OS_MAC
        horizontalLayout_6->setSpacing(-1);
#endif
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        icon_label_5 = new QLabel(frame_5);
        icon_label_5->setObjectName("icon_label_5");

        horizontalLayout_6->addWidget(icon_label_5);

        text_label_5 = new QLabel(frame_5);
        text_label_5->setObjectName("text_label_5");

        horizontalLayout_6->addWidget(text_label_5);

        line_label_5 = new QLabel(frame_5);
        line_label_5->setObjectName("line_label_5");

        horizontalLayout_6->addWidget(line_label_5);


        horizontalLayout_11->addWidget(frame_5);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
#ifndef Q_OS_MAC
        horizontalLayout_7->setSpacing(-1);
#endif
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        icon_label_6 = new QLabel(frame_6);
        icon_label_6->setObjectName("icon_label_6");

        horizontalLayout_7->addWidget(icon_label_6);

        text_label_6 = new QLabel(frame_6);
        text_label_6->setObjectName("text_label_6");

        horizontalLayout_7->addWidget(text_label_6);

        line_label_6 = new QLabel(frame_6);
        line_label_6->setObjectName("line_label_6");

        horizontalLayout_7->addWidget(line_label_6);


        horizontalLayout_11->addWidget(frame_6);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Plain);
        horizontalLayout_8 = new QHBoxLayout(frame_7);
#ifndef Q_OS_MAC
        horizontalLayout_8->setSpacing(-1);
#endif
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        icon_label_7 = new QLabel(frame_7);
        icon_label_7->setObjectName("icon_label_7");

        horizontalLayout_8->addWidget(icon_label_7);

        text_label_7 = new QLabel(frame_7);
        text_label_7->setObjectName("text_label_7");

        horizontalLayout_8->addWidget(text_label_7);

        line_label_7 = new QLabel(frame_7);
        line_label_7->setObjectName("line_label_7");

        horizontalLayout_8->addWidget(line_label_7);


        horizontalLayout_11->addWidget(frame_7);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Plain);
        horizontalLayout_9 = new QHBoxLayout(frame_8);
#ifndef Q_OS_MAC
        horizontalLayout_9->setSpacing(-1);
#endif
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        icon_label_8 = new QLabel(frame_8);
        icon_label_8->setObjectName("icon_label_8");

        horizontalLayout_9->addWidget(icon_label_8);

        text_label_8 = new QLabel(frame_8);
        text_label_8->setObjectName("text_label_8");

        horizontalLayout_9->addWidget(text_label_8);

        line_label_8 = new QLabel(frame_8);
        line_label_8->setObjectName("line_label_8");

        horizontalLayout_9->addWidget(line_label_8);


        horizontalLayout_11->addWidget(frame_8);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setStyleSheet(QString::fromUtf8("QLabel#icon_label_3\n"
"{\n"
"    min-width: 15px;\n"
"    max-width: 15px;\n"
"    min-height: 15px;\n"
"    max-height: 15px;\n"
"    background: #ffffff;\n"
"    border-radius: 7px;\n"
"    border-image: url(:/icon/navigation_icon_not.svg);\n"
"}\n"
"\n"
"QLabel#text_label_3\n"
"{\n"
"	max-width: 56px;\n"
"\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #9E9E9E;\n"
"}\n"
"\n"
"QLabel#line_label_3\n"
"{\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 2px;\n"
"    max-height: 2px;\n"
"    background: #9E9E9E;\n"
"}"));
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Plain);
        horizontalLayout_10 = new QHBoxLayout(frame_9);
#ifndef Q_OS_MAC
        horizontalLayout_10->setSpacing(-1);
#endif
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        icon_label_9 = new QLabel(frame_9);
        icon_label_9->setObjectName("icon_label_9");

        horizontalLayout_10->addWidget(icon_label_9);

        text_label_9 = new QLabel(frame_9);
        text_label_9->setObjectName("text_label_9");

        horizontalLayout_10->addWidget(text_label_9);


        horizontalLayout_11->addWidget(frame_9);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        micButton = new QPushButton(TopFrame);
        micButton->setObjectName("micButton");

        horizontalLayout->addWidget(micButton);

        connectButton = new QPushButton(TopFrame);
        connectButton->setObjectName("connectButton");
        connectButton->setMinimumSize(QSize(156, 40));
        connectButton->setMaximumSize(QSize(156, 40));

        horizontalLayout->addWidget(connectButton);

        PreviousStepButton = new QPushButton(TopFrame);
        PreviousStepButton->setObjectName("PreviousStepButton");
        PreviousStepButton->setMinimumSize(QSize(70, 36));
        PreviousStepButton->setMaximumSize(QSize(70, 36));

        horizontalLayout->addWidget(PreviousStepButton);

        NextStepButton = new QPushButton(TopFrame);
        NextStepButton->setObjectName("NextStepButton");
        NextStepButton->setMinimumSize(QSize(70, 36));
        NextStepButton->setMaximumSize(QSize(70, 36));

        horizontalLayout->addWidget(NextStepButton);


        verticalLayout->addWidget(TopFrame);

        DownFrame = new QFrame(MeasurementPage);
        DownFrame->setObjectName("DownFrame");
        DownFrame->setFrameShape(QFrame::NoFrame);
        DownFrame->setFrameShadow(QFrame::Plain);
        DownFrame->setLineWidth(1);

        verticalLayout->addWidget(DownFrame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(MeasurementPage);

        QMetaObject::connectSlotsByName(MeasurementPage);
    } // setupUi

    void retranslateUi(QWidget *MeasurementPage)
    {
        MeasurementPage->setWindowTitle(QCoreApplication::translate("MeasurementPage", "Measurement Page", nullptr));
        icon_label_1->setText(QString());
        text_label_1->setText(QCoreApplication::translate("MeasurementPage", "\351\200\232\351\201\223\346\265\213\351\207\217", nullptr));
        line_label_1->setText(QString());
        icon_label_2->setText(QString());
        text_label_2->setText(QCoreApplication::translate("MeasurementPage", "\351\200\232\351\201\223\350\267\257\347\224\261", nullptr));
        line_label_2->setText(QString());
        icon_label_3->setText(QString());
        text_label_3->setText(QCoreApplication::translate("MeasurementPage", "\345\223\215\345\272\246\345\242\236\347\233\212", nullptr));
        line_label_3->setText(QString());
        icon_label_4->setText(QString());
        text_label_4->setText(QCoreApplication::translate("MeasurementPage", "\346\211\254\345\243\260\345\231\250\351\242\221\345\223\215", nullptr));
        line_label_4->setText(QString());
        icon_label_5->setText(QString());
        text_label_5->setText(QCoreApplication::translate("MeasurementPage", "\345\210\206\351\242\221\351\205\215\347\275\256", nullptr));
        line_label_5->setText(QString());
        icon_label_6->setText(QString());
        text_label_6->setText(QCoreApplication::translate("MeasurementPage", "\345\243\260\345\234\272\351\242\221\345\223\215", nullptr));
        line_label_6->setText(QString());
        icon_label_7->setText(QString());
        text_label_7->setText(QCoreApplication::translate("MeasurementPage", "\345\243\260\345\234\272\350\207\252\345\212\250\345\235\207\350\241\241", nullptr));
        line_label_7->setText(QString());
        icon_label_8->setText(QString());
        text_label_8->setText(QCoreApplication::translate("MeasurementPage", "\344\272\272\345\267\245\350\260\203\351\237\263", nullptr));
        line_label_8->setText(QString());
        icon_label_9->setText(QString());
        text_label_9->setText(QCoreApplication::translate("MeasurementPage", "\345\273\266\346\227\266\346\265\213\351\207\217", nullptr));
        micButton->setText(QString());
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
