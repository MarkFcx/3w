#include "../GlobalHelper.h"

#include "ChannelMeasurement.h"
#include "ui/ui_channelmeasurement.h"
#include "../lib/speakerconfig.h"
#include "../lib/WanosAutoTuning.h"

// #include "lib/speakerconfig.h"

ChannelMeasurement::ChannelMeasurement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChannelMeasurement)
{
    ui->setupUi(this);
    ui->channelMeasurementTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->channelMeasurementTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    createTable();
}

ChannelMeasurement::~ChannelMeasurement()
{
}

void ChannelMeasurement::createTable()
{
    // 清空已有的表格
    ui->channelMeasurementTable->clear();

    // 设置列数
    ui->channelMeasurementTable->setColumnCount(7);

    // 设置表头
    QStringList headerLabels;
    headerLabels << "Speaker" << "名称" << "距离" << "俯仰角" << "水平角" << "姿态俯仰角" << "姿态水平角";
    ui->channelMeasurementTable->setHorizontalHeaderLabels(headerLabels);
}

void ChannelMeasurement::loadChannelMeasurementData()
{
    // Clear the table
    ui->channelMeasurementTable->clearContents();

    // Get the current project name
    QString projectName = GlobalHelper::getInstance().getCurrentProjectName();

    // Get the loudspeakers data for the current project
    QVector<LoudspeakerData> loudspeakers = GlobalHelper::getInstance().getLoudspeakersByProject(projectName);

    // Set the row count
    int rowCount = loudspeakers.size();
    ui->channelMeasurementTable->setRowCount(rowCount);

    // Fill the table with data
    for (int row = 0; row < rowCount; ++row)
    {
        const LoudspeakerData& loudspeaker = loudspeakers[row];

        // QTableWidgetItem* speakerItem = new QTableWidgetItem(QString::number(row + 1));
        QTableWidgetItem* speakerItem = new QTableWidgetItem();
        QTableWidgetItem* nameItem = new QTableWidgetItem(loudspeaker.name);
        QTableWidgetItem* distanceItem = new QTableWidgetItem(QString::number(loudspeaker.distance));
        QTableWidgetItem* pitchItem = new QTableWidgetItem(QString::number(loudspeaker.pitch));
        QTableWidgetItem* yawItem = new QTableWidgetItem(QString::number(loudspeaker.yaw));
        QTableWidgetItem* attitudePitchItem = new QTableWidgetItem(QString::number(loudspeaker.attitudePitch));
        QTableWidgetItem* attitudeYawItem = new QTableWidgetItem(QString::number(loudspeaker.attitudeYaw));

        ui->channelMeasurementTable->setItem(row, 0, speakerItem);
        ui->channelMeasurementTable->setItem(row, 1, nameItem);
        ui->channelMeasurementTable->setItem(row, 2, distanceItem);
        ui->channelMeasurementTable->setItem(row, 3, pitchItem);
        ui->channelMeasurementTable->setItem(row, 4, yawItem);
        ui->channelMeasurementTable->setItem(row, 5, attitudePitchItem);
        ui->channelMeasurementTable->setItem(row, 6, attitudeYawItem);
    }

    // 设置第一列的宽度和高度
    ui->channelMeasurementTable->verticalHeader()->setDefaultSectionSize(44);
    ui->channelMeasurementTable->horizontalHeader()->resizeSection(0, 50);

    for (int row = 0; row < rowCount; ++row)
    {
        // ...

        // 创建水平布局
        QHBoxLayout* layout = new QHBoxLayout();
        layout->setContentsMargins(0, 0, 0, 0);

        // 创建标签并设置行号
        QLabel* rowLabel = new QLabel(QString::number(row + 1));
        rowLabel->setStyleSheet("QLabel { min-width: 16px; max-width: 16px; min-height: 16px; max-height: 16px; }");
        layout->addWidget(rowLabel);

        // 创建按钮并设置样式
        QPushButton* playButton = new QPushButton();
        playButton->setStyleSheet("QPushButton { min-width: 16px; max-width: 16px; min-height: 16px; max-height: 16px; border-image: url(:/icon/speaker_play_icon.svg); }"
                                "QPushButton:checked { border-image: url(:/icon/speaker_play_stop_icon.svg); }");
        connect(playButton, &QPushButton::clicked, this, &ChannelMeasurement::playButtonClicked);
        layout->addWidget(playButton);

        // 设置布局为表格的单元格小部件
        QWidget* widget = new QWidget();
        widget->setLayout(layout);
        ui->channelMeasurementTable->setCellWidget(row, 0, widget);

        playButtons.append(playButton);
    }

}

void ChannelMeasurement::playButtonClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QWidget* widget = button->parentWidget();
    int row = ui->channelMeasurementTable->indexAt(widget->pos()).row();

    // TODO： 
    // WanosAutoTuning wanosAutoTuning;  // 创建WanosAutoTuning类的实例
    // SpeakerConfig* config = wanosAutoTuning.getSpeakerConfig(row);

    // 安卓TCP/IP

    qDebug() << "播放第 " + QString::number(row+1) + "个播放器";
}

void ChannelMeasurement::setLoudspeakerParametersToDatabase(int row)
{
    // 获取对应行列的数据
    QTableWidgetItem* nameItem = ui->channelMeasurementTable->item(row, 1);
    QTableWidgetItem* pitchItem = ui->channelMeasurementTable->item(row, 3);
    QTableWidgetItem* yawItem = ui->channelMeasurementTable->item(row, 4);
    QTableWidgetItem* attitudePitchItem = ui->channelMeasurementTable->item(row, 5);
    QTableWidgetItem* attitudeYawItem = ui->channelMeasurementTable->item(row, 6);

    qDebug() << "nameItem"+ nameItem->text();


    if (nameItem && pitchItem && yawItem && attitudePitchItem && attitudeYawItem)
    {
        QString name = nameItem->text();
        double pitchValue = pitchItem->text().toDouble();
        double yawValue = yawItem->text().toDouble();
        double attitudePitchValue = attitudePitchItem->text().toDouble();
        double attitudeYawValue = attitudeYawItem->text().toDouble();

        // 调用GlobalHelper的setLoudspeaker函数将参数设置到数据库中
        GlobalHelper::getInstance().setLoudspeaker(name, pitchValue, yawValue, attitudePitchValue, attitudeYawValue);
    }
}

void ChannelMeasurement::updateLoudspeakerParameters()
{
    int rowCount = ui->channelMeasurementTable->rowCount();
    qDebug() << "rowCount："+ QString::number(rowCount);

    for (int row = 0; row < rowCount; ++row)
    {
        setLoudspeakerParametersToDatabase(row);
    }
}

void ChannelMeasurement::exitMeasurement()
{
    qDebug() << "exitMeasurement";

    updateLoudspeakerParameters();
    this->hide();
}

