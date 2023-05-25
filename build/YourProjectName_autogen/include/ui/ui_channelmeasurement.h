/********************************************************************************
** Form generated from reading UI file 'channelmeasurement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELMEASUREMENT_H
#define UI_CHANNELMEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChannelMeasurement
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ChannelMeasurement)
    {
        if (ChannelMeasurement->objectName().isEmpty())
            ChannelMeasurement->setObjectName(QString::fromUtf8("ChannelMeasurement"));
        ChannelMeasurement->resize(682, 423);
        verticalLayout = new QVBoxLayout(ChannelMeasurement);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        tableWidget = new QTableWidget(ChannelMeasurement);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ChannelMeasurement);

        QMetaObject::connectSlotsByName(ChannelMeasurement);
    } // setupUi

    void retranslateUi(QWidget *ChannelMeasurement)
    {
        ChannelMeasurement->setWindowTitle(QCoreApplication::translate("ChannelMeasurement", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChannelMeasurement: public Ui_ChannelMeasurement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELMEASUREMENT_H
