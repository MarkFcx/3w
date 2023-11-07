/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *LoginFrame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *passwordLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *usernameLineEdit;
    QLabel *label;
    QPushButton *loginButton;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1371, 775);
        LoginPage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(LoginPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LoginFrame = new QFrame(LoginPage);
        LoginFrame->setObjectName("LoginFrame");
        LoginFrame->setStyleSheet(QString::fromUtf8("QFrame#LoginFrame {\n"
"    border-image: url(:/icon/login_bottom_photo.jpg);\n"
"}"));
        LoginFrame->setFrameShape(QFrame::NoFrame);
        LoginFrame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(LoginFrame);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        frame = new QFrame(LoginFrame);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(424, 446));
        frame->setMaximumSize(QSize(424, 446));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border: 1px;\n"
"	border-radius: 4px;\n"
"	background: #ffffff;\n"
"}\n"
"QPushButton {\n"
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
"\n"
"QPushButton:pressed \n"
"{\n"
"	background: rgb(83, 44, 183);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background: #FFFFFF;\n"
"	border: 1px solid #E7E7E7;\n"
"	border-radius: 3px;\n"
"	\n"
"	color: #343434;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 12px;\n"
"line-height: 18px;\n"
"/* identical to box height, or 150% */\n"
"\n"
"\n"
"color: #636468;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(-1);
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(0, 0, 0, 10);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 1, 1, 1);

        passwordLineEdit = new QLineEdit(frame);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setMinimumSize(QSize(324, 38));
        passwordLineEdit->setMaximumSize(QSize(324, 38));

        gridLayout_2->addWidget(passwordLineEdit, 5, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        usernameLineEdit = new QLineEdit(frame);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(324, 38));
        usernameLineEdit->setMaximumSize(QSize(324, 38));

        gridLayout_2->addWidget(usernameLineEdit, 3, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(0, 38));

        gridLayout_2->addWidget(loginButton, 6, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(424, 140));
        label_3->setMaximumSize(QSize(424, 140));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border-image: url(:/icon/loginLogo.svg);\n"
"}\n"
"\n"
"\n"
""));
        label_3->setLineWidth(0);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 3);
        gridLayout_2->setColumnStretch(0, 1);

        gridLayout->addWidget(frame, 2, 1, 1, 1);


        verticalLayout->addWidget(LoginFrame);


        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        passwordLineEdit->setText(QCoreApplication::translate("LoginPage", "123", nullptr));
        usernameLineEdit->setText(QCoreApplication::translate("LoginPage", "admin", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "\347\224\250\346\210\267\345\220\215", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("LoginPage", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
