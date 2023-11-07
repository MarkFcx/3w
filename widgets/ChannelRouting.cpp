#include "ChannelRouting.h"
#include "ui/ui_channelrouting.h"

#include "../GlobalHelper.h"

ChannelRouting::ChannelRouting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChannelRouting)
{
    ui->setupUi(this);
    ui->channelRoutingTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->channelRoutingTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    createTable();
    loadChannelRoutingData();
}

ChannelRouting::~ChannelRouting()
{
    delete ui;
}

// 其他成员函数和槽函数的实现
void ChannelRouting::createTable()
{
    // 清空已有的表格
    ui->channelRoutingTable->clear();
    qDebug() << "speakerDescription:";

    // 获取扬声器描述规则
    QString speakerDescription = GlobalHelper::getInstance().getSpeakerDescription();
    qDebug() << "speakerDescription: " << speakerDescription;

    // 根据规则确定表格列数和列名
    int columnCount = 0;
    QStringList headerLabels;
    if (speakerDescription == "5.1")
    {
        columnCount = 8;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs";
    }
    else if (speakerDescription == "5.1.2")
    {
        columnCount = 10;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs" << "Ltf" << "Rtf";
    }
    else if (speakerDescription == "5.1.4")
    {
        columnCount = 12;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs" << "Ltf" << "Rtf" << "Ltr" << "Rtr";
    }
    else if (speakerDescription == "7.1")
    {
        columnCount = 10;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs" << "Lss" << "Rss";
    }
    else if (speakerDescription == "7.1.2")
    {
        columnCount = 12;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs" << "Lss" << "Rss" << "Ltf" << "Rtf";
    }
    else if (speakerDescription == "7.1.4")
    {
        columnCount = 14;
        headerLabels << "Spaker" << "名称" << "L" << "R" << "C" << "LFE" << "Lrs" << "Rrs" << "Lss" << "Rss" << "Ltf" << "Rtf" << "Ltr" << "Rtr";
    }

    // 设置表格列数和表头
    ui->channelRoutingTable->setRowCount(10);
    ui->channelRoutingTable->setColumnCount(columnCount);
    ui->channelRoutingTable->setHorizontalHeaderLabels(headerLabels);

    for (int i = 0; i < columnCount; i++)
    {
        QWidget* headerWidget = new QWidget(ui->channelRoutingTable);
        QHBoxLayout* layout = new QHBoxLayout(headerWidget);
        layout->setContentsMargins(10, 10, 10, 10);
        layout->setSpacing(0); 
        
        // 创建标签并设置列名
        QLabel* columnLabel = new QLabel(headerLabels[i]);
        columnLabel->setStyleSheet("QLabel { min-width: 45px; max-width: 45px; min-height: 20px; max-height: 20px; }");
        layout->addWidget(columnLabel);

        if (i >= 2) {
            // 创建按钮并设置样式
            QPushButton* playButton = new QPushButton();
            playButton->setStyleSheet("QPushButton { min-width: 16px; max-width: 16px; min-height: 16px; max-height: 16px; border-image: url(:/icon/speaker_play_icon.svg); }"
                                    "QPushButton:checked { border-image: url(:/icon/speaker_play_stop_icon.svg); }");
            playButton->setProperty("columnIndex", i);
            connect(playButton, &QPushButton::clicked, this, &ChannelRouting::handleColumnPlayButtonClick);
            layout->addWidget(playButton);
        }

        ui->channelRoutingTable->setCellWidget(0, i, headerWidget);
    }
}

void ChannelRouting::loadChannelRoutingData()
{
    // Clear the table
    ui->channelRoutingTable->clearContents();
    createTable();

    // Get the current project name
    QString projectName = GlobalHelper::getInstance().getCurrentProjectName();

    // Get the loudspeakers data for the current project
    QVector<LoudspeakerData> loudspeakers = GlobalHelper::getInstance().getLoudspeakersByProject(projectName);

    // Set the row count
    int rowCount = loudspeakers.size();
    ui->channelRoutingTable->setRowCount(rowCount + 1);

    // Fill the table with data
    for (int row = 1; row <= rowCount; ++row)
    {
        const LoudspeakerData& loudspeaker = loudspeakers[row-1];

        QTableWidgetItem* speakerItem = new QTableWidgetItem();
        QTableWidgetItem* nameItem = new QTableWidgetItem(loudspeaker.name);
        // QTableWidgetItem* columnCountItem = new QTableWidgetItem(loudspeaker.columnCount.join(','));

        ui->channelRoutingTable->setItem(row, 0, speakerItem);
        ui->channelRoutingTable->setItem(row, 1, nameItem);
        // ui->channelRoutingTable->setItem(row, 2, columnCountItem);
    }

    // 设置第一列的宽度和高度
    ui->channelRoutingTable->verticalHeader()->setDefaultSectionSize(44);
    ui->channelRoutingTable->horizontalHeader()->resizeSection(0, 150);

    for (int row = 1; row <= rowCount; ++row)
    {
        // ...

        // 创建水平布局
        QHBoxLayout* layout = new QHBoxLayout();
        layout->setContentsMargins(0, 0, 0, 0);

        // 创建标签并设置行号
        QLabel* rowLabel = new QLabel(QString::number(row));
        rowLabel->setStyleSheet("QLabel { min-width: 16px; max-width: 16px; min-height: 16px; max-height: 16px; }");
        layout->addWidget(rowLabel);

        // 创建按钮并设置样式
        QPushButton* playButton = new QPushButton();
        playButton->setStyleSheet("QPushButton { min-width: 16px; max-width: 16px; min-height: 16px; max-height: 16px; border-image: url(:/icon/speaker_play_icon.svg); }"
                                "QPushButton:checked { border-image: url(:/icon/speaker_play_stop_icon.svg); }");
        connect(playButton, &QPushButton::clicked, this, &ChannelRouting::handleRowPlayButtonClick);
        layout->addWidget(playButton);

        // 设置布局为表格的单元格小部件
        QWidget* widget = new QWidget();
        widget->setLayout(layout);
        ui->channelRoutingTable->setCellWidget(row, 0, widget);

        playButtons.append(playButton);
    }

    for (int row = 1; row <= rowCount; ++row)
    {
        const LoudspeakerData& loudspeaker = loudspeakers[row-1];

        // 获取当前loudspeaker的columnCount
        const QList<int>& columnCount = loudspeaker.columnCount;

        // 遍历columnCount并选中对应的单元格
        for (int i = 0; i < columnCount.size(); ++i)
        {
            int column = columnCount[i] - 1; // 列数从0开始，所以要减去1
            QTableWidgetItem* item = ui->channelRoutingTable->item(row, column);
            if (item)
            {
                item->setCheckState(Qt::Checked);
            }
        }
    }

    QTableWidgetItem* item = ui->channelRoutingTable->item(0, 0);
    if (item)
    {
        item->setCheckState(Qt::Checked);
    }

}

void ChannelRouting::handleColumnPlayButtonClick()
{
    QPushButton* playButton = qobject_cast<QPushButton*>(sender());
    if (playButton)
    {
        int columnIndex = playButton->property("columnIndex").toInt();
        // 处理播放按钮点击事件
        // 根据 columnIndex 执行相应的逻辑
        qDebug() << "播放第 " << columnIndex << "列的按钮";
    }
}

void ChannelRouting::handleRowPlayButtonClick()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QWidget* widget = button->parentWidget();
    int row = ui->channelRoutingTable->indexAt(widget->pos()).row();

    // TODO： 
    // WanosAutoTuning wanosAutoTuning;  // 创建WanosAutoTuning类的实例
    // SpeakerConfig* config = wanosAutoTuning.getSpeakerConfig(row);

    // 安卓TCP/IP

    qDebug() << "播放第 " + QString::number(row+1) + "个播放器";
}

// void ChannelRouting::setRoutingParametersToDatabase(int row)
// {
//     // 在这里将表格中对应行列的数据设置到数据库中
// }

// void ChannelRouting::updateRoutingParameters()
// {
//     int rowCount = ui->channelRoutingTable->rowCount();
//     for (int row = 0; row < rowCount; ++row)
//     {
//         setRoutingParametersToDatabase(row);
//     }
// }

// void ChannelRouting::exitRouting()
// {
//     updateRoutingParameters();
//     this->hide();
// }