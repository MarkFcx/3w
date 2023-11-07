/********************************************************************************
** Form generated from reading UI file 'frequencyresponseofsoundfield.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCYRESPONSEOFSOUNDFIELD_H
#define UI_FREQUENCYRESPONSEOFSOUNDFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrequencyResponseOfSoundField
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *top_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *total_label;
    QSpacerItem *horizontalSpacer;
    QFrame *down_frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_;
    QWidget *progress_widget;
    QLabel *percent_label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QFrame *car_frame;
    QPushButton *car_play_right_front_button;
    QPushButton *car_play_right_rear_button;
    QPushButton *car_play_left_front_button;
    QPushButton *car_play_left_rear_button;
    QSpacerItem *horizontalSpacer_3;
    QSlider *test_slider;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *FrequencyResponseOfSoundField)
    {
        if (FrequencyResponseOfSoundField->objectName().isEmpty())
            FrequencyResponseOfSoundField->setObjectName("FrequencyResponseOfSoundField");
        FrequencyResponseOfSoundField->resize(1055, 712);
        FrequencyResponseOfSoundField->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background: #FFFFFF\n"
"}"));
        verticalLayout = new QVBoxLayout(FrequencyResponseOfSoundField);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        top_frame = new QFrame(FrequencyResponseOfSoundField);
        top_frame->setObjectName("top_frame");
        top_frame->setFrameShape(QFrame::NoFrame);
        top_frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(top_frame);
        horizontalLayout->setObjectName("horizontalLayout");
        total_label = new QLabel(top_frame);
        total_label->setObjectName("total_label");
        total_label->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 22px;\n"
"line-height: 30px;\n"
"color: #565656;"));

        horizontalLayout->addWidget(total_label);

        horizontalSpacer = new QSpacerItem(540, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(top_frame);

        down_frame = new QFrame(FrequencyResponseOfSoundField);
        down_frame->setObjectName("down_frame");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        down_frame->setFont(font);
        down_frame->setFrameShape(QFrame::NoFrame);
        down_frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(down_frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        horizontalSpacer_2 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        frame_3 = new QFrame(down_frame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_ = new QLabel(frame_3);
        label_->setObjectName("label_");
        label_->setStyleSheet(QString::fromUtf8("font-family: 'PingFang SC';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 18px;\n"
"color: #636468;"));

        horizontalLayout_2->addWidget(label_);

        progress_widget = new QWidget(frame_3);
        progress_widget->setObjectName("progress_widget");

        horizontalLayout_2->addWidget(progress_widget);

        percent_label = new QLabel(frame_3);
        percent_label->setObjectName("percent_label");
        percent_label->setMinimumSize(QSize(50, 0));
        percent_label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(percent_label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 5);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 3);

        gridLayout->addWidget(frame_3, 3, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        car_frame = new QFrame(down_frame);
        car_frame->setObjectName("car_frame");
        car_frame->setMinimumSize(QSize(915, 484));
        car_frame->setMaximumSize(QSize(915, 484));
        car_frame->setStyleSheet(QString::fromUtf8("QFrame#car_frame\n"
"{\n"
"	border-image: url(:/icon/car.png);\n"
"}\n"
"\n"
"QPushButton#car_play_left_front_button,\n"
"QPushButton#car_play_right_front_button,\n"
"QPushButton#car_play_left_rear_button,\n"
"QPushButton#car_play_right_rear_button\n"
"{\n"
"	border-image: url(:/icon/car_play_icon.svg);\n"
"}\n"
"\n"
"QPushButton::checked#car_play_left_front_button,\n"
"QPushButton::checked#car_play_right_front_button,\n"
"QPushButton::checked#car_play_left_rear_button,\n"
"QPushButton::checked#car_play_right_rear_button\n"
"{\n"
"	border-image: url(:/icon/car_stop_play_icon.svg);\n"
"}"));
        car_frame->setFrameShape(QFrame::NoFrame);
        car_frame->setFrameShadow(QFrame::Plain);
        car_play_right_front_button = new QPushButton(car_frame);
        car_play_right_front_button->setObjectName("car_play_right_front_button");
        car_play_right_front_button->setGeometry(QRect(355, 78, 110, 110));
        car_play_right_front_button->setMinimumSize(QSize(110, 110));
        car_play_right_front_button->setMaximumSize(QSize(110, 110));
        car_play_right_front_button->setCheckable(true);
        car_play_right_rear_button = new QPushButton(car_frame);
        car_play_right_rear_button->setObjectName("car_play_right_rear_button");
        car_play_right_rear_button->setGeometry(QRect(576, 78, 110, 110));
        car_play_right_rear_button->setMinimumSize(QSize(110, 110));
        car_play_right_rear_button->setMaximumSize(QSize(110, 110));
        car_play_right_rear_button->setCheckable(true);
        car_play_left_front_button = new QPushButton(car_frame);
        car_play_left_front_button->setObjectName("car_play_left_front_button");
        car_play_left_front_button->setGeometry(QRect(355, 219, 110, 110));
        car_play_left_front_button->setMinimumSize(QSize(110, 110));
        car_play_left_front_button->setMaximumSize(QSize(110, 110));
        car_play_left_front_button->setCheckable(true);
        car_play_left_rear_button = new QPushButton(car_frame);
        car_play_left_rear_button->setObjectName("car_play_left_rear_button");
        car_play_left_rear_button->setGeometry(QRect(576, 219, 110, 110));
        car_play_left_rear_button->setMinimumSize(QSize(110, 110));
        car_play_left_rear_button->setMaximumSize(QSize(110, 110));
        car_play_left_rear_button->setCheckable(true);

        gridLayout->addWidget(car_frame, 1, 1, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        test_slider = new QSlider(down_frame);
        test_slider->setObjectName("test_slider");
        test_slider->setMaximumSize(QSize(16777215, 16777215));
        test_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(test_slider, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);


        verticalLayout->addWidget(down_frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(FrequencyResponseOfSoundField);

        QMetaObject::connectSlotsByName(FrequencyResponseOfSoundField);
    } // setupUi

    void retranslateUi(QWidget *FrequencyResponseOfSoundField)
    {
        FrequencyResponseOfSoundField->setWindowTitle(QCoreApplication::translate("FrequencyResponseOfSoundField", "Frequency Response of Sound Field", nullptr));
        total_label->setText(QCoreApplication::translate("FrequencyResponseOfSoundField", "\345\243\260\345\234\272\351\242\221\345\223\215", nullptr));
        label_->setText(QCoreApplication::translate("FrequencyResponseOfSoundField", "\346\265\213\350\257\225\346\272\220\357\274\232", nullptr));
        percent_label->setText(QCoreApplication::translate("FrequencyResponseOfSoundField", "0%", nullptr));
        car_play_right_front_button->setText(QString());
        car_play_right_rear_button->setText(QString());
        car_play_left_front_button->setText(QString());
        car_play_left_rear_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrequencyResponseOfSoundField: public Ui_FrequencyResponseOfSoundField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCYRESPONSEOFSOUNDFIELD_H
