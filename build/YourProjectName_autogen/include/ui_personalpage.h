/********************************************************************************
** Form generated from reading UI file 'personalpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
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
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *frame_3;
    QPushButton *button2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PersonalPage)
    {
        if (PersonalPage->objectName().isEmpty())
            PersonalPage->setObjectName(QString::fromUtf8("PersonalPage"));
        PersonalPage->resize(716, 401);
        PersonalPageLayout = new QVBoxLayout(PersonalPage);
        PersonalPageLayout->setObjectName(QString::fromUtf8("PersonalPageLayout"));
        PersonalPageLayout->setContentsMargins(0, 0, 0, 0);
        ManageWidget = new QWidget(PersonalPage);
        ManageWidget->setObjectName(QString::fromUtf8("ManageWidget"));
        ManageWidget->setMinimumSize(QSize(0, 200));
        gridLayout_2 = new QGridLayout(ManageWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(ManageWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        gridLayout_2->addWidget(frame_2, 0, 1, 1, 1);

        frame_3 = new QFrame(ManageWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        button2 = new QPushButton(frame_3);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(20, 20, 121, 101));

        gridLayout_2->addWidget(frame_3, 1, 1, 1, 1);

        frame = new QFrame(ManageWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addWidget(frame, 0, 0, 2, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 5);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 6);

        PersonalPageLayout->addWidget(ManageWidget);


        retranslateUi(PersonalPage);

        QMetaObject::connectSlotsByName(PersonalPage);
    } // setupUi

    void retranslateUi(QWidget *PersonalPage)
    {
        PersonalPage->setWindowTitle(QCoreApplication::translate("PersonalPage", "Personal Page", nullptr));
        label_2->setText(QCoreApplication::translate("PersonalPage", "\346\234\200\350\277\221\346\226\207\344\273\266", nullptr));
        lineEdit->setText(QCoreApplication::translate("PersonalPage", "\350\257\267\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PersonalPage", "\345\257\274\345\205\245\346\226\207\344\273\266", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PersonalPage", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        button2->setText(QCoreApplication::translate("PersonalPage", "\347\220\206\346\203\263\346\261\275\350\275\246", nullptr));
        label->setText(QCoreApplication::translate("PersonalPage", "LOGO\345\233\276\347\211\207", nullptr));
        pushButton->setText(QCoreApplication::translate("PersonalPage", "\346\234\200\350\277\221\346\226\207\344\273\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PersonalPage", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalPage: public Ui_PersonalPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALPAGE_H
