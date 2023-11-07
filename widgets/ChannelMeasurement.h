#ifndef CHANNELMEASUREMENT_H
#define CHANNELMEASUREMENT_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "data.h" // 包含LoudspeakerData数据结构的头文件

namespace Ui {
class ChannelMeasurement;
}

class ChannelMeasurement : public QWidget
{
    Q_OBJECT

public:
    explicit ChannelMeasurement(QWidget *parent = nullptr);
    ~ChannelMeasurement();
    void createTable();
    void loadChannelMeasurementData();
    void setLoudspeakerParametersToDatabase(int row);
    void updateLoudspeakerParameters();
    void exitMeasurement();

private slots:
    void playButtonClicked();

private:
    QVector<QPushButton*> playButtons;

private:
    Ui::ChannelMeasurement *ui;
    QVector<LoudspeakerData> loudspeakers; // 扬声器数据
    
};

#endif // CHANNELMEASUREMENT_H
