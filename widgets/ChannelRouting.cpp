#include "ChannelRouting.h"
#include "ui/ui_channelrouting.h"

ChannelRouting::ChannelRouting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChannelRouting)
{
    ui->setupUi(this);
    createTable(17);
}

ChannelRouting::~ChannelRouting()
{
    delete ui;
}

// 其他成员函数和槽函数的实现
void ChannelRouting::createTable(int rowCount)
{
    // 清空已有的表格
    ui->tableWidget->clear();

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(14);

    // 设置表头
    QStringList headerLabels;
    headerLabels << "CH" << "名称" << "L" << "R" << "C" << "LEF" << "Ls" << "Rs" << "Lrs" << "Rrs" << "Ltf" << "Rtf" << "Ltr" << "Rtr";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    // 设置表格内容
    for (int row = 0; row < rowCount; ++row)
    {
        // 创建单元格并设置内容
        QTableWidgetItem* chItem = new QTableWidgetItem(QString::number(row + 1));
        QTableWidgetItem* nameItem = new QTableWidgetItem();
        QTableWidgetItem* distanceItem = new QTableWidgetItem();
        QTableWidgetItem* pitchItem = new QTableWidgetItem();
        QTableWidgetItem* yawItem = new QTableWidgetItem();
        QTableWidgetItem* attitudePitchItem = new QTableWidgetItem();
        QTableWidgetItem* attitudeYawItem = new QTableWidgetItem();

        // 将单元格添加到表格中的对应位置
        ui->tableWidget->setItem(row, 0, chItem);
        ui->tableWidget->setItem(row, 1, nameItem);
        ui->tableWidget->setItem(row, 2, distanceItem);
        ui->tableWidget->setItem(row, 3, pitchItem);
        ui->tableWidget->setItem(row, 4, yawItem);
        ui->tableWidget->setItem(row, 5, attitudePitchItem);
        ui->tableWidget->setItem(row, 6, attitudeYawItem);
    }
}
