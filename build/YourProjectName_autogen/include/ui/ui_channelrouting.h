/********************************************************************************
** Form generated from reading UI file 'channelrouting.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELROUTING_H
#define UI_CHANNELROUTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChannelRouting
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *bottomFrame;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *channelRoutingTable;

    void setupUi(QWidget *ChannelRouting)
    {
        if (ChannelRouting->objectName().isEmpty())
            ChannelRouting->setObjectName("ChannelRouting");
        ChannelRouting->resize(1235, 693);
        ChannelRouting->setStyleSheet(QString::fromUtf8("QFrame#topFrame,\n"
"QFrame#bottomFrame\n"
"{\n"
"	background: rgb(250, 250, 250);\n"
"}\n"
"\n"
"QLabel#label \n"
"{\n"
"	font-size: 18px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #333333;\n"
"    line-height: 32px;\n"
"}"));
        verticalLayout = new QVBoxLayout(ChannelRouting);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topFrame = new QFrame(ChannelRouting);
        topFrame->setObjectName("topFrame");
        topFrame->setFrameShape(QFrame::NoFrame);
        topFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(topFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(topFrame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-family: 'PingFang SC';\n"
"	font-style: normal;\n"
"	font-weight: 500;\n"
"	font-size: 22px;\n"
"	line-height: 30px;\n"
"	color: #565656;\n"
"}"));

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(topFrame);

        bottomFrame = new QFrame(ChannelRouting);
        bottomFrame->setObjectName("bottomFrame");
        bottomFrame->setFrameShape(QFrame::NoFrame);
        bottomFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(bottomFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        channelRoutingTable = new QTableWidget(bottomFrame);
        if (channelRoutingTable->columnCount() < 2)
            channelRoutingTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        channelRoutingTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        channelRoutingTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (channelRoutingTable->rowCount() < 2)
            channelRoutingTable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        channelRoutingTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        channelRoutingTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        channelRoutingTable->setObjectName("channelRoutingTable");
        channelRoutingTable->setStyleSheet(QString::fromUtf8("QHeaderView::section \n"
"{\n"
"    background-color: rgb(249, 248, 249);\n"
"    padding: 4px;\n"
"    font-size: 14pt;\n"
"	border: 1px solid rgb(240, 240, 240);\n"
"	\n"
"	selection-background-color: rgb(249, 248, 249);\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	selection-background-color: rgb(226, 255, 255);\n"
"\n"
"    font-size: 12px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #333333;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QTableView::item:focus{\n"
"	color: #333333;\n"
"}"));
        channelRoutingTable->setSelectionMode(QAbstractItemView::MultiSelection);
        channelRoutingTable->setRowCount(2);
        channelRoutingTable->setColumnCount(2);
        channelRoutingTable->horizontalHeader()->setVisible(false);
        channelRoutingTable->horizontalHeader()->setCascadingSectionResizes(false);
        channelRoutingTable->horizontalHeader()->setDefaultSectionSize(30);
        channelRoutingTable->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(channelRoutingTable);


        verticalLayout->addWidget(bottomFrame);


        retranslateUi(ChannelRouting);

        QMetaObject::connectSlotsByName(ChannelRouting);
    } // setupUi

    void retranslateUi(QWidget *ChannelRouting)
    {
        ChannelRouting->setWindowTitle(QCoreApplication::translate("ChannelRouting", "ChannelRouting", nullptr));
        label->setText(QCoreApplication::translate("ChannelRouting", "\351\200\232\351\201\223\350\267\257\347\224\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem = channelRoutingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ChannelRouting", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = channelRoutingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ChannelRouting", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = channelRoutingTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ChannelRouting", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = channelRoutingTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ChannelRouting", "\346\226\260\345\273\272\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChannelRouting: public Ui_ChannelRouting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELROUTING_H
