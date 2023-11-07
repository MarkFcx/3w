/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *portLineEdit;
    QPushButton *connectButton;
    QLabel *label_3;
    QLineEdit *ipLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_51;
    QRadioButton *radioButton_714;
    QRadioButton *radioButton_514;
    QLabel *label_4;
    QRadioButton *radioButton_712;
    QRadioButton *radioButton_512;
    QRadioButton *radioButton_71;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLabel *connectSuccessLabel;
    QLabel *speakerNumLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *CancelButton;
    QPushButton *OKButton;
    QFrame *line_2;
    QFrame *BarFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *new_input_icon_label;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QFrame *line_3;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName("InputDialog");
        InputDialog->resize(886, 602);
        InputDialog->setStyleSheet(QString::fromUtf8("QFrame#BarFrame \n"
"{\n"
"	background: rgb(245, 245, 245);\n"
"}\n"
"\n"
"QFrame#frame,\n"
"QFrame#frame_2,\n"
"QFrame#frame_3,\n"
"QFrame#frame_4,\n"
"QDialog\n"
"{\n"
"	background: #ffffff;\n"
"}"));
        gridLayout_3 = new QGridLayout(InputDialog);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(InputDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #565656;\n"
"}"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 20px;\n"
"/* identical to box height */\n"
"\n"
"\n"
"color: #636468;\n"
""));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName("checkBox");

        gridLayout_4->addWidget(checkBox, 1, 0, 1, 1);

        checkBox_3 = new QCheckBox(frame_3);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout_4->addWidget(checkBox_3, 1, 1, 1, 1);

        checkBox_4 = new QCheckBox(frame_3);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout_4->addWidget(checkBox_4, 1, 2, 1, 1);

        checkBox_5 = new QCheckBox(frame_3);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout_4->addWidget(checkBox_5, 1, 3, 1, 1);

        checkBox_2 = new QCheckBox(frame_3);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_4->addWidget(checkBox_2, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(frame_3);
        checkBox_6->setObjectName("checkBox_6");

        gridLayout_4->addWidget(checkBox_6, 2, 1, 1, 1);

        checkBox_7 = new QCheckBox(frame_3);
        checkBox_7->setObjectName("checkBox_7");

        gridLayout_4->addWidget(checkBox_7, 2, 2, 1, 1);


        gridLayout_3->addWidget(frame_3, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        frame = new QFrame(InputDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 18px;\n"
"/* identical to box height, or 150% */\n"
"\n"
"\n"
"color: #565656;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 60));
        label->setMaximumSize(QSize(16777215, 60));
        label->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 20px;\n"
"/* identical to box height */\n"
"\n"
"\n"
"color: #636468;"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        portLineEdit = new QLineEdit(frame);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setMinimumSize(QSize(0, 38));
        portLineEdit->setMaximumSize(QSize(16777215, 38));
        portLineEdit->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border: 1px solid #E7E7E7;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(portLineEdit, 2, 1, 1, 1);

        connectButton = new QPushButton(frame);
        connectButton->setObjectName("connectButton");
        connectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 140px;\n"
"	max-width: 140px;\n"
"	max-height: 38px;\n"
"	min-height: 38px;\n"
"    background: rgb(111, 63, 252);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 18px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #ffffff;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: rgb(81, 63, 222);\n"
"}\n"
""));

        gridLayout->addWidget(connectButton, 1, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 18px;\n"
"/* identical to box height, or 150% */\n"
"\n"
"\n"
"color: #565656;"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        ipLineEdit = new QLineEdit(frame);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setMinimumSize(QSize(0, 38));
        ipLineEdit->setMaximumSize(QSize(16777215, 38));
        ipLineEdit->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border: 1px solid #E7E7E7;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(ipLineEdit, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 3);

        gridLayout_3->addWidget(frame, 1, 1, 1, 1);

        frame_2 = new QFrame(InputDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 400;\n"
"	font-size: 14px;\n"
"	line-height: 20px;\n"
"	color: #565656;\n"
"}"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        radioButton_51 = new QRadioButton(frame_2);
        radioButton_51->setObjectName("radioButton_51");
        radioButton_51->setCheckable(false);

        gridLayout_2->addWidget(radioButton_51, 2, 2, 1, 1);

        radioButton_714 = new QRadioButton(frame_2);
        radioButton_714->setObjectName("radioButton_714");
        radioButton_714->setCheckable(false);

        gridLayout_2->addWidget(radioButton_714, 1, 0, 1, 1);

        radioButton_514 = new QRadioButton(frame_2);
        radioButton_514->setObjectName("radioButton_514");
        radioButton_514->setCheckable(false);

        gridLayout_2->addWidget(radioButton_514, 2, 0, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 20px;\n"
"/* identical to box height */\n"
"\n"
"\n"
"color: #636468;"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        radioButton_712 = new QRadioButton(frame_2);
        radioButton_712->setObjectName("radioButton_712");
        radioButton_712->setCheckable(false);

        gridLayout_2->addWidget(radioButton_712, 1, 1, 1, 1);

        radioButton_512 = new QRadioButton(frame_2);
        radioButton_512->setObjectName("radioButton_512");
        radioButton_512->setCheckable(false);

        gridLayout_2->addWidget(radioButton_512, 2, 1, 1, 1);

        radioButton_71 = new QRadioButton(frame_2);
        radioButton_71->setObjectName("radioButton_71");
        radioButton_71->setCheckable(false);

        gridLayout_2->addWidget(radioButton_71, 1, 2, 1, 1);


        gridLayout_3->addWidget(frame_2, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        frame_4 = new QFrame(InputDialog);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        connectSuccessLabel = new QLabel(frame_4);
        connectSuccessLabel->setObjectName("connectSuccessLabel");
        connectSuccessLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-width: 10px;\n"
"	max-width: 10px;\n"
"	max-height: 10px;\n"
"	min-height: 10px;\n"
"	background: rgb(172, 172, 172);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout->addWidget(connectSuccessLabel);

        speakerNumLabel = new QLabel(frame_4);
        speakerNumLabel->setObjectName("speakerNumLabel");

        horizontalLayout->addWidget(speakerNumLabel);

        horizontalSpacer_3 = new QSpacerItem(536, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        CancelButton = new QPushButton(frame_4);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 100px;\n"
"	max-width: 100px;\n"
"	max-height: 38px;\n"
"	min-height: 38px;\n"
"    background:rgb(231, 231, 231);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 18px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #111111;\n"
"    line-height: 32px;\n"
"}"));

        horizontalLayout->addWidget(CancelButton);

        OKButton = new QPushButton(frame_4);
        OKButton->setObjectName("OKButton");
        OKButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 100px;\n"
"	max-width: 100px;\n"
"	max-height: 38px;\n"
"	min-height: 38px;\n"
"    background: rgb(111, 63, 252);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 18px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #ffffff;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: rgb(81, 63, 222);\n"
"}\n"
""));

        horizontalLayout->addWidget(OKButton);


        gridLayout_3->addWidget(frame_4, 7, 0, 1, 3);

        line_2 = new QFrame(InputDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 4, 0, 1, 3);

        BarFrame = new QFrame(InputDialog);
        BarFrame->setObjectName("BarFrame");
        BarFrame->setFrameShape(QFrame::StyledPanel);
        BarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(BarFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        new_input_icon_label = new QLabel(BarFrame);
        new_input_icon_label->setObjectName("new_input_icon_label");
        new_input_icon_label->setMinimumSize(QSize(16, 16));
        new_input_icon_label->setMaximumSize(QSize(16, 16));
        new_input_icon_label->setStyleSheet(QString::fromUtf8("QLabel#new_input_icon_label\n"
"{\n"
"	border-image: url(:/icon/project_button_icon.svg);\n"
"}"));

        horizontalLayout_2->addWidget(new_input_icon_label);

        label_7 = new QLabel(BarFrame);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(796, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_3->addWidget(BarFrame, 0, 0, 1, 3);

        line = new QFrame(InputDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 2);

        line_3 = new QFrame(InputDialog);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 6, 0, 1, 3);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 4);
        gridLayout_3->setRowStretch(2, 4);
        gridLayout_3->setRowStretch(3, 4);
        gridLayout_3->setRowStretch(4, 2);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 5);
        gridLayout_3->setColumnStretch(2, 1);

        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QCoreApplication::translate("InputDialog", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("InputDialog", "\351\200\211\346\213\251\346\250\241\345\274\217\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("InputDialog", "\345\205\250\350\275\246\346\250\241\345\274\217", nullptr));
        checkBox_3->setText(QCoreApplication::translate("InputDialog", "\344\270\273\351\251\276\346\250\241\345\274\217", nullptr));
        checkBox_4->setText(QCoreApplication::translate("InputDialog", "\345\211\257\351\251\276\346\250\241\345\274\217", nullptr));
        checkBox_5->setText(QCoreApplication::translate("InputDialog", "\345\267\246\345\220\216\346\250\241\345\274\217", nullptr));
        checkBox_2->setText(QCoreApplication::translate("InputDialog", "\345\217\263\345\220\216\346\250\241\345\274\217", nullptr));
        checkBox_6->setText(QCoreApplication::translate("InputDialog", "\345\211\215\346\216\222\346\250\241\345\274\217", nullptr));
        checkBox_7->setText(QCoreApplication::translate("InputDialog", "\345\220\216\346\216\222\346\250\241\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("InputDialog", "IP\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("InputDialog", "\350\277\236\346\216\245\350\275\246\346\234\272APP:", nullptr));
        portLineEdit->setText(QCoreApplication::translate("InputDialog", "1234", nullptr));
        connectButton->setText(QCoreApplication::translate("InputDialog", "\350\277\236\346\216\245\350\275\246\346\234\272", nullptr));
        label_3->setText(QCoreApplication::translate("InputDialog", "\347\253\257\345\217\243", nullptr));
        ipLineEdit->setText(QCoreApplication::translate("InputDialog", "127.0.0.1", nullptr));
        radioButton_51->setText(QCoreApplication::translate("InputDialog", "5.1", nullptr));
        radioButton_714->setText(QCoreApplication::translate("InputDialog", "7.1.4", nullptr));
        radioButton_514->setText(QCoreApplication::translate("InputDialog", "5.1.4", nullptr));
        label_4->setText(QCoreApplication::translate("InputDialog", "\351\200\211\346\213\251\345\243\260\351\201\223\357\274\232", nullptr));
        radioButton_712->setText(QCoreApplication::translate("InputDialog", "7.1.2", nullptr));
        radioButton_512->setText(QCoreApplication::translate("InputDialog", "5.1.2", nullptr));
        radioButton_71->setText(QCoreApplication::translate("InputDialog", "7.1", nullptr));
        connectSuccessLabel->setText(QString());
        speakerNumLabel->setText(QCoreApplication::translate("InputDialog", "Speaker:", nullptr));
        CancelButton->setText(QCoreApplication::translate("InputDialog", "\345\217\226\346\266\210", nullptr));
        OKButton->setText(QCoreApplication::translate("InputDialog", "\347\241\256\345\256\232", nullptr));
        new_input_icon_label->setText(QString());
        label_7->setText(QCoreApplication::translate("InputDialog", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H
