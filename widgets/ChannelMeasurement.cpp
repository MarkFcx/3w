#include "ChannelMeasurement.h"
#include "ui/ui_channelmeasurement.h"

ChannelMeasurement::ChannelMeasurement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChannelMeasurement)
{
    ui->setupUi(this);
    createTable(12);
}

ChannelMeasurement::~ChannelMeasurement()
{
    // 析构函数实现
}

// 其他成员函数和槽函数的实现
void ChannelMeasurement::createTable(int rowCount)
{
    // 清空已有的表格
    ui->tableWidget->clear();

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(7);

    // 设置表头
    QStringList headerLabels;
    headerLabels << "CH" << "名称" << "距离" << "俯仰角" << "水平角" << "姿态俯仰角" << "姿态水平角";
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
