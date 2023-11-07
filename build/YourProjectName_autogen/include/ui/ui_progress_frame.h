/********************************************************************************
** Form generated from reading UI file 'progress_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESS_FRAME_H
#define UI_PROGRESS_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progress_label_1;
    QLabel *progress_label_2;
    QLabel *progress_label_3;
    QLabel *progress_label_4;
    QLabel *progress_label_5;
    QLabel *progress_label_6;
    QLabel *progress_label_7;
    QLabel *progress_label_8;
    QLabel *progress_label_9;
    QLabel *progress_label_10;
    QLabel *progress_label_11;
    QLabel *progress_label_12;
    QLabel *progress_label_13;
    QLabel *progress_label_14;
    QLabel *progress_label_15;
    QLabel *progress_label_16;
    QLabel *progress_label_17;
    QLabel *progress_label_18;
    QLabel *progress_label_19;

    void setupUi(QWidget *ProgressFrame)
    {
        if (ProgressFrame->objectName().isEmpty())
            ProgressFrame->setObjectName("ProgressFrame");
        ProgressFrame->resize(154, 58);
        horizontalLayout = new QHBoxLayout(ProgressFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ProgressFrame);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background: #FFFFFF;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	min-width: 4px;\n"
"	max-width: 4px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.0149254, y1:0.0113636, x2:0.9801, y2:0.971591, stop:0 rgba(67, 203, 255, 255), stop:1 rgba(151, 8, 204, 255));\n"
"	background: #E3E3E3;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QLabel#progress_label_1,\n"
"QLabel#progress_label_3,\n"
"QLabel#progress_label_7,\n"
"QLabel#progress_label_13,\n"
"QLabel#progress_label_17,\n"
"QLabel#progress_label_19\n"
"{\n"
"	min-height: 10px;\n"
"	max-height: 10px;\n"
"}\n"
"\n"
"QLabel#progress_label_2,\n"
"QLabel#progress_label_5,\n"
"QLabel#progress_label_9,\n"
"QLabel#progress_label_11,\n"
"QLabel#progress_label_15,\n"
"QLabel#progress_label_18\n"
"{\n"
"	min-height: 22px;\n"
"	max-height: 22px;\n"
"}\n"
"\n"
"QLabel#progress_label_4,\n"
"QLabel#progress_label_6,\n"
"QLabel#progress_label_8,\n"
"QLabel#progress_label_12,\n"
"QLabel#progress_label_14,\n"
"QLabel#progress_label_16\n"
"{\n"
"	min-height: 19px;\n"
"	"
                        "max-height: 19px;\n"
"}\n"
"\n"
"QLabel#progress_label_10\n"
"{\n"
"	min-height: 34px;\n"
"	max-height: 34px;\n"
"}"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        progress_label_1 = new QLabel(frame);
        progress_label_1->setObjectName("progress_label_1");
        progress_label_1->setMinimumSize(QSize(4, 10));
        progress_label_1->setMaximumSize(QSize(4, 10));
        progress_label_1->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_1);

        progress_label_2 = new QLabel(frame);
        progress_label_2->setObjectName("progress_label_2");
        progress_label_2->setMinimumSize(QSize(4, 22));
        progress_label_2->setMaximumSize(QSize(4, 22));
        progress_label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_2);

        progress_label_3 = new QLabel(frame);
        progress_label_3->setObjectName("progress_label_3");
        progress_label_3->setMinimumSize(QSize(4, 10));
        progress_label_3->setMaximumSize(QSize(4, 10));
        progress_label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_3);

        progress_label_4 = new QLabel(frame);
        progress_label_4->setObjectName("progress_label_4");
        progress_label_4->setMinimumSize(QSize(4, 19));
        progress_label_4->setMaximumSize(QSize(4, 19));
        progress_label_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_4);

        progress_label_5 = new QLabel(frame);
        progress_label_5->setObjectName("progress_label_5");
        progress_label_5->setMinimumSize(QSize(4, 22));
        progress_label_5->setMaximumSize(QSize(4, 22));
        progress_label_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_5);

        progress_label_6 = new QLabel(frame);
        progress_label_6->setObjectName("progress_label_6");
        progress_label_6->setMinimumSize(QSize(4, 19));
        progress_label_6->setMaximumSize(QSize(4, 19));
        progress_label_6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_6);

        progress_label_7 = new QLabel(frame);
        progress_label_7->setObjectName("progress_label_7");
        progress_label_7->setMinimumSize(QSize(4, 10));
        progress_label_7->setMaximumSize(QSize(4, 10));
        progress_label_7->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_7);

        progress_label_8 = new QLabel(frame);
        progress_label_8->setObjectName("progress_label_8");
        progress_label_8->setMinimumSize(QSize(4, 19));
        progress_label_8->setMaximumSize(QSize(4, 19));
        progress_label_8->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_8);

        progress_label_9 = new QLabel(frame);
        progress_label_9->setObjectName("progress_label_9");
        progress_label_9->setMinimumSize(QSize(4, 22));
        progress_label_9->setMaximumSize(QSize(4, 22));
        progress_label_9->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_9);

        progress_label_10 = new QLabel(frame);
        progress_label_10->setObjectName("progress_label_10");
        progress_label_10->setMinimumSize(QSize(4, 34));
        progress_label_10->setMaximumSize(QSize(4, 34));
        progress_label_10->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_10);

        progress_label_11 = new QLabel(frame);
        progress_label_11->setObjectName("progress_label_11");
        progress_label_11->setMinimumSize(QSize(4, 22));
        progress_label_11->setMaximumSize(QSize(4, 22));
        progress_label_11->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_11);

        progress_label_12 = new QLabel(frame);
        progress_label_12->setObjectName("progress_label_12");
        progress_label_12->setMinimumSize(QSize(4, 19));
        progress_label_12->setMaximumSize(QSize(4, 19));
        progress_label_12->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_12);

        progress_label_13 = new QLabel(frame);
        progress_label_13->setObjectName("progress_label_13");
        progress_label_13->setMinimumSize(QSize(4, 10));
        progress_label_13->setMaximumSize(QSize(4, 10));
        progress_label_13->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_13);

        progress_label_14 = new QLabel(frame);
        progress_label_14->setObjectName("progress_label_14");
        progress_label_14->setMinimumSize(QSize(4, 19));
        progress_label_14->setMaximumSize(QSize(4, 19));
        progress_label_14->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_14);

        progress_label_15 = new QLabel(frame);
        progress_label_15->setObjectName("progress_label_15");
        progress_label_15->setMinimumSize(QSize(4, 22));
        progress_label_15->setMaximumSize(QSize(4, 22));
        progress_label_15->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_15);

        progress_label_16 = new QLabel(frame);
        progress_label_16->setObjectName("progress_label_16");
        progress_label_16->setMinimumSize(QSize(4, 19));
        progress_label_16->setMaximumSize(QSize(4, 19));
        progress_label_16->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_16);

        progress_label_17 = new QLabel(frame);
        progress_label_17->setObjectName("progress_label_17");
        progress_label_17->setMinimumSize(QSize(4, 10));
        progress_label_17->setMaximumSize(QSize(4, 10));
        progress_label_17->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_17);

        progress_label_18 = new QLabel(frame);
        progress_label_18->setObjectName("progress_label_18");
        progress_label_18->setMinimumSize(QSize(4, 22));
        progress_label_18->setMaximumSize(QSize(4, 22));
        progress_label_18->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_18);

        progress_label_19 = new QLabel(frame);
        progress_label_19->setObjectName("progress_label_19");
        progress_label_19->setMinimumSize(QSize(4, 10));
        progress_label_19->setMaximumSize(QSize(4, 10));
        progress_label_19->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(progress_label_19);


        horizontalLayout->addWidget(frame);


        retranslateUi(ProgressFrame);

        QMetaObject::connectSlotsByName(ProgressFrame);
    } // setupUi

    void retranslateUi(QWidget *ProgressFrame)
    {
        ProgressFrame->setWindowTitle(QCoreApplication::translate("ProgressFrame", "Form", nullptr));
        progress_label_1->setText(QString());
        progress_label_2->setText(QString());
        progress_label_3->setText(QString());
        progress_label_4->setText(QString());
        progress_label_5->setText(QString());
        progress_label_6->setText(QString());
        progress_label_7->setText(QString());
        progress_label_8->setText(QString());
        progress_label_9->setText(QString());
        progress_label_10->setText(QString());
        progress_label_11->setText(QString());
        progress_label_12->setText(QString());
        progress_label_13->setText(QString());
        progress_label_14->setText(QString());
        progress_label_15->setText(QString());
        progress_label_16->setText(QString());
        progress_label_17->setText(QString());
        progress_label_18->setText(QString());
        progress_label_19->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProgressFrame: public Ui_ProgressFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESS_FRAME_H
