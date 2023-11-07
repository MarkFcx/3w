/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *w;
    QVBoxLayout *verticalLayout;
    QWidget *barWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *exit_button;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *button_frame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PersonalPageButton;
    QSpacerItem *horizontalSpacer;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1175, 803);
        w = new QWidget(MainWindow);
        w->setObjectName("w");
        verticalLayout = new QVBoxLayout(w);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        barWidget = new QWidget(w);
        barWidget->setObjectName("barWidget");
        barWidget->setMinimumSize(QSize(1680, 42));
        barWidget->setMaximumSize(QSize(1680, 42));
        barWidget->setStyleSheet(QString::fromUtf8("background: #E7E7E7;\n"
"\n"
"border-radius: 8px 8px 0px 0px;"));
        horizontalLayout_2 = new QHBoxLayout(barWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 6, 0, 0);
        frame = new QFrame(barWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        exit_button = new QPushButton(frame);
        exit_button->setObjectName("exit_button");
        exit_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	min-width: 12px;\n"
"	max-width: 12px;\n"
"	max-height: 12px;\n"
"	min-height: 12px;\n"
"\n"
"	background: #FF5E5D;\n"
"	border: 0.5px solid #E1A325;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	min-width: 14px;\n"
"	max-width: 14px;\n"
"	max-height: 14px;\n"
"	min-height: 14px;\n"
"\n"
"	background: #FF7E7D;\n"
"	border: 0.5px solid #E1A325;\n"
"    border-radius: 7px;\n"
"}"));

        horizontalLayout->addWidget(exit_button);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	min-width: 12px;\n"
"	max-width: 12px;\n"
"	max-height: 12px;\n"
"	min-height: 12px;\n"
"\n"
"background: #FFBC4F;\n"
"border: 0.5px solid #E1A325;\n"
"\n"
"    border-radius: 6px;\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	min-width: 12px;\n"
"	max-width: 12px;\n"
"	max-height: 12px;\n"
"	min-height: 12px;\n"
"\n"
"background: #22CB58;\n"
"border: 0.5px solid #3EAF3F;\n"
"\n"
"    border-radius: 6px;\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);


        horizontalLayout_2->addWidget(frame);

        button_frame = new QFrame(barWidget);
        button_frame->setObjectName("button_frame");
        button_frame->setFrameShape(QFrame::NoFrame);
        button_frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(button_frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        PersonalPageButton = new QPushButton(button_frame);
        PersonalPageButton->setObjectName("PersonalPageButton");
        PersonalPageButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	min-width: 84px;\n"
"	min-height: 36px;\n"
"	max-width: 84px;\n"
"	max-height: 36px;\n"
"\n"
"	background: #E7E7E7;\n"
"	border-radius: 3px 3px 0px 0px;\n"
"}\n"
"\n"
"QPushButton::checked\n"
"{\n"
"	background: #FFFFFF;\n"
"	border-radius: 3px 3px 0px 0px;\n"
"}\n"
""));
        PersonalPageButton->setCheckable(true);
        PersonalPageButton->setChecked(true);

        horizontalLayout_3->addWidget(PersonalPageButton);


        horizontalLayout_2->addWidget(button_frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(barWidget);

        centralwidget = new QWidget(w);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1680, 982));
        centralwidget->setMaximumSize(QSize(1680, 982));

        verticalLayout->addWidget(centralwidget);

        MainWindow->setCentralWidget(w);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1175, 43));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WANOS", nullptr));
        exit_button->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        PersonalPageButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
