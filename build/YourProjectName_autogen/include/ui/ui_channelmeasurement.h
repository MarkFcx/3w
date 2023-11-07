/********************************************************************************
** Form generated from reading UI file 'channelmeasurement.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELMEASUREMENT_H
#define UI_CHANNELMEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChannelMeasurement
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *channelMeasurementTable;
    QWidget *tab_2;

    void setupUi(QWidget *ChannelMeasurement)
    {
        if (ChannelMeasurement->objectName().isEmpty())
            ChannelMeasurement->setObjectName("ChannelMeasurement");
        ChannelMeasurement->resize(1147, 649);
        ChannelMeasurement->setStyleSheet(QString::fromUtf8("QTabWidget::tab-bar \n"
"{\n"
"	left:0px;\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"	min-width: 150px;\n"
"    max-width: 150px;\n"
"    max-height: 50px;\n"
"    min-height: 50px;\n"
"    background: rgb(250, 250, 250);\n"
"	\n"
"    font-size: 12px;\n"
"    \n"
"    font-weight: 400;\n"
"    text-align: center;\n"
"    color: #555555;\n"
"    line-height: 32px;\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"	border-bottom: 4px solid #000000;\n"
"    font-size: 20px;\n"
"    color: #111111;\n"
"}"));
        verticalLayout = new QVBoxLayout(ChannelMeasurement);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        tabWidget = new QTabWidget(ChannelMeasurement);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(0, 400));
        tabWidget->setElideMode(Qt::ElideLeft);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        channelMeasurementTable = new QTableWidget(tab);
        if (channelMeasurementTable->columnCount() < 4)
            channelMeasurementTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        channelMeasurementTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        channelMeasurementTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        channelMeasurementTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        channelMeasurementTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (channelMeasurementTable->rowCount() < 4)
            channelMeasurementTable->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        channelMeasurementTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        channelMeasurementTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        channelMeasurementTable->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        channelMeasurementTable->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        channelMeasurementTable->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        channelMeasurementTable->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        channelMeasurementTable->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        channelMeasurementTable->setItem(3, 0, __qtablewidgetitem11);
        channelMeasurementTable->setObjectName("channelMeasurementTable");
        channelMeasurementTable->setStyleSheet(QString::fromUtf8("QHeaderView::section \n"
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
"	selection-background-color: rgb(249, 248, 249);\n"
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
        channelMeasurementTable->setTextElideMode(Qt::ElideRight);
        channelMeasurementTable->horizontalHeader()->setVisible(true);
        channelMeasurementTable->horizontalHeader()->setCascadingSectionResizes(false);
        channelMeasurementTable->verticalHeader()->setVisible(false);
        channelMeasurementTable->verticalHeader()->setCascadingSectionResizes(false);
        channelMeasurementTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_2->addWidget(channelMeasurementTable);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ChannelMeasurement);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChannelMeasurement);
    } // setupUi

    void retranslateUi(QWidget *ChannelMeasurement)
    {
        ChannelMeasurement->setWindowTitle(QCoreApplication::translate("ChannelMeasurement", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = channelMeasurementTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ChannelMeasurement", "Spaker", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = channelMeasurementTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ChannelMeasurement", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = channelMeasurementTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = channelMeasurementTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = channelMeasurementTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = channelMeasurementTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = channelMeasurementTable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = channelMeasurementTable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ChannelMeasurement", "\346\226\260\345\273\272\350\241\214", nullptr));

        const bool __sortingEnabled = channelMeasurementTable->isSortingEnabled();
        channelMeasurementTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = channelMeasurementTable->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ChannelMeasurement", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = channelMeasurementTable->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ChannelMeasurement", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = channelMeasurementTable->item(2, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("ChannelMeasurement", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = channelMeasurementTable->item(3, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("ChannelMeasurement", "4", nullptr));
        channelMeasurementTable->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ChannelMeasurement", "\351\200\232\351\201\223\346\265\213\351\207\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ChannelMeasurement", "\346\265\213\351\207\217\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChannelMeasurement: public Ui_ChannelMeasurement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELMEASUREMENT_H
