/********************************************************************************
** Form generated from reading UI file 'channelrouting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELROUTING_H
#define UI_CHANNELROUTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChannelRouting
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ChannelRouting)
    {
        if (ChannelRouting->objectName().isEmpty())
            ChannelRouting->setObjectName(QString::fromUtf8("ChannelRouting"));
        ChannelRouting->resize(660, 446);
        verticalLayout = new QVBoxLayout(ChannelRouting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(ChannelRouting);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ChannelRouting);

        QMetaObject::connectSlotsByName(ChannelRouting);
    } // setupUi

    void retranslateUi(QWidget *ChannelRouting)
    {
        ChannelRouting->setWindowTitle(QCoreApplication::translate("ChannelRouting", "ChannelRouting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChannelRouting: public Ui_ChannelRouting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELROUTING_H
