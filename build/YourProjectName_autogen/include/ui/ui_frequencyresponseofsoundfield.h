/********************************************************************************
** Form generated from reading UI file 'frequencyresponseofsoundfield.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCYRESPONSEOFSOUNDFIELD_H
#define UI_FREQUENCYRESPONSEOFSOUNDFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrequencyResponseOfSoundField
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;

    void setupUi(QWidget *FrequencyResponseOfSoundField)
    {
        if (FrequencyResponseOfSoundField->objectName().isEmpty())
            FrequencyResponseOfSoundField->setObjectName(QString::fromUtf8("FrequencyResponseOfSoundField"));
        FrequencyResponseOfSoundField->resize(654, 395);
        verticalLayout = new QVBoxLayout(FrequencyResponseOfSoundField);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(FrequencyResponseOfSoundField);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(540, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(FrequencyResponseOfSoundField);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(FrequencyResponseOfSoundField);

        QMetaObject::connectSlotsByName(FrequencyResponseOfSoundField);
    } // setupUi

    void retranslateUi(QWidget *FrequencyResponseOfSoundField)
    {
        FrequencyResponseOfSoundField->setWindowTitle(QCoreApplication::translate("FrequencyResponseOfSoundField", "Frequency Response of Sound Field", nullptr));
        label->setText(QCoreApplication::translate("FrequencyResponseOfSoundField", "\345\243\260\345\234\272\351\242\221\345\223\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrequencyResponseOfSoundField: public Ui_FrequencyResponseOfSoundField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCYRESPONSEOFSOUNDFIELD_H
