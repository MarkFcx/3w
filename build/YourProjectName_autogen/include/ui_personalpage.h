/********************************************************************************
** Form generated from reading UI file 'personalpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALPAGE_H
#define UI_PERSONALPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_PersonalPage
{
public:
    QVBoxLayout *PersonalPageLayout;
    QWidget *ManageWidget;
    QGridLayout *gridLayout_2;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QLabel *logoLabel;
    QPushButton *recentFileButton;
    QPushButton *personalCenterButton;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QFrame *bottomFrame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *projectFrame;
    QGridLayout *gridLayout_3;
    QPushButton *testProjectButton;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *importButton;
    QPushButton *CreateNewProjectButton;
    QFrame *line_2;

    void setupUi(QWidget *PersonalPage)
    {
        if (PersonalPage->objectName().isEmpty())
            PersonalPage->setObjectName("PersonalPage");
        PersonalPage->resize(1484, 794);
        PersonalPage->setStyleSheet(QString::fromUtf8("QFrame#leftFrame \n"
"{\n"
"	  background: rgb(245, 245, 245);\n"
"}\n"
"\n"
"QFrame#topFrame, \n"
"QFrame#bottomFrame,\n"
"QFrame#projectFrame\n"
"{\n"
"	background: #ffffff;\n"
"}\n"
"\n"
"QPushButton#importButton {\n"
"    min-width: 100px;\n"
"	max-width: 100px;\n"
"	max-height: 34px;\n"
"	min-height: 34px;\n"
"    background: rgb(239, 239, 239);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 14px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #111111;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed #importButton{\n"
"    background: rgb(200, 200, 200);\n"
"}\n"
"\n"
"\n"
"QPushButton#CreateNewProjectButton {\n"
"    min-width: 100px;\n"
"	max-width: 100px;\n"
"	max-height: 34px;\n"
"	min-height: 34px;\n"
"    background: rgb(111, 63, 252);\n"
"    border-radius: 4px;\n"
"    \n"
"    font-size: 14px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #ffffff;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed#Crea"
                        "teNewProjectButton {\n"
"    background: rgb(81, 63, 222);\n"
"}\n"
"\n"
"QPushButton#recentFileButton,\n"
"QPushButton#personalCenterButton {\n"
"	max-height: 34px;\n"
"	min-height: 34px;\n"
"    background: rgb(245, 245, 245);\n"
"    border-radius: 4px;\n"
"    \n"
"font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 18px;\n"
"\n"
"color: #565656;\n"
"}\n"
"\n"
"QPushButton:checked #recentFileButton,\n"
"QPushButton:checked #personalCenterButton\n"
"{\n"
"    background: rgb(231, 231, 231);\n"
"\n"
"}\n"
""));
        PersonalPageLayout = new QVBoxLayout(PersonalPage);
        PersonalPageLayout->setObjectName("PersonalPageLayout");
        PersonalPageLayout->setContentsMargins(0, 0, 0, 0);
        ManageWidget = new QWidget(PersonalPage);
        ManageWidget->setObjectName("ManageWidget");
        ManageWidget->setMinimumSize(QSize(0, 200));
        gridLayout_2 = new QGridLayout(ManageWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        leftFrame = new QFrame(ManageWidget);
        leftFrame->setObjectName("leftFrame");
        leftFrame->setFrameShape(QFrame::NoFrame);
        leftFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName("verticalLayout");
        logoLabel = new QLabel(leftFrame);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(260, 60));
        logoLabel->setMaximumSize(QSize(260, 60));
        logoLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    border-image: url(:/icon/PersonalPageLogo.svg);\n"
"}"));

        verticalLayout->addWidget(logoLabel);

        recentFileButton = new QPushButton(leftFrame);
        recentFileButton->setObjectName("recentFileButton");
        recentFileButton->setCheckable(true);
        recentFileButton->setChecked(true);

        verticalLayout->addWidget(recentFileButton);

        personalCenterButton = new QPushButton(leftFrame);
        personalCenterButton->setObjectName("personalCenterButton");

        verticalLayout->addWidget(personalCenterButton);

        line = new QFrame(leftFrame);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addWidget(leftFrame, 0, 0, 3, 1);

        bottomFrame = new QFrame(ManageWidget);
        bottomFrame->setObjectName("bottomFrame");
        bottomFrame->setFrameShape(QFrame::NoFrame);
        bottomFrame->setFrameShadow(QFrame::Plain);
        bottomFrame->setLineWidth(0);
        gridLayout = new QGridLayout(bottomFrame);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        projectFrame = new QFrame(bottomFrame);
        projectFrame->setObjectName("projectFrame");
        projectFrame->setFrameShape(QFrame::NoFrame);
        projectFrame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(projectFrame);
        gridLayout_3->setObjectName("gridLayout_3");
        testProjectButton = new QPushButton(projectFrame);
        testProjectButton->setObjectName("testProjectButton");
        testProjectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 150px;\n"
"	max-width: 150px;\n"
"	max-height: 150px;\n"
"	min-height: 150px;\n"
"    background: rgb(245, 245, 245);\n"
"    border-radius: 10px;\n"
"    \n"
"    font-size: 14px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #111111;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QPushButton:pressed #importButton{\n"
"    background: rgb(200, 200, 200);\n"
"}"));

        gridLayout_3->addWidget(testProjectButton, 0, 0, 1, 1);


        gridLayout->addWidget(projectFrame, 0, 1, 1, 1);


        gridLayout_2->addWidget(bottomFrame, 2, 1, 1, 1);

        topFrame = new QFrame(ManageWidget);
        topFrame->setObjectName("topFrame");
        topFrame->setFrameShape(QFrame::NoFrame);
        topFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(topFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(topFrame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 22px;\n"
"line-height: 30px;\n"
"color: #1A1D1C;\n"
"}"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(topFrame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(300, 34));
        lineEdit->setMaximumSize(QSize(300, 34));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background: #FFFFFF;\n"
"	border: 1px solid #E7E7E7;\n"
"	border-radius: 4px;\n"
"\n"
"font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 14px;\n"
"\n"
"color: #878B91;\n"
"}"));

        horizontalLayout->addWidget(lineEdit);

        importButton = new QPushButton(topFrame);
        importButton->setObjectName("importButton");

        horizontalLayout->addWidget(importButton);

        CreateNewProjectButton = new QPushButton(topFrame);
        CreateNewProjectButton->setObjectName("CreateNewProjectButton");

        horizontalLayout->addWidget(CreateNewProjectButton);


        gridLayout_2->addWidget(topFrame, 0, 1, 1, 1);

        line_2 = new QFrame(ManageWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(2, 5);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 6);

        PersonalPageLayout->addWidget(ManageWidget);


        retranslateUi(PersonalPage);

        QMetaObject::connectSlotsByName(PersonalPage);
    } // setupUi

    void retranslateUi(QWidget *PersonalPage)
    {
        PersonalPage->setWindowTitle(QCoreApplication::translate("PersonalPage", "Personal Page", nullptr));
        logoLabel->setText(QString());
        recentFileButton->setText(QCoreApplication::translate("PersonalPage", "\346\234\200\350\277\221\346\226\207\344\273\266", nullptr));
        personalCenterButton->setText(QCoreApplication::translate("PersonalPage", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        testProjectButton->setText(QCoreApplication::translate("PersonalPage", "\347\220\206\346\203\263\346\261\275\350\275\246", nullptr));
        label_2->setText(QCoreApplication::translate("PersonalPage", "\346\234\200\350\277\221\346\226\207\344\273\266", nullptr));
        lineEdit->setText(QCoreApplication::translate("PersonalPage", "\350\257\267\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215", nullptr));
        importButton->setText(QCoreApplication::translate("PersonalPage", "\345\257\274\345\205\245\346\226\207\344\273\266", nullptr));
        CreateNewProjectButton->setText(QCoreApplication::translate("PersonalPage", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalPage: public Ui_PersonalPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALPAGE_H
