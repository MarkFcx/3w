#ifndef CHANNELMEASUREMENT_H
#define CHANNELMEASUREMENT_H

#include <QWidget>

namespace Ui {
class ChannelMeasurement;
}

class ChannelMeasurement : public QWidget
{
    Q_OBJECT

public:
    explicit ChannelMeasurement(QWidget *parent = nullptr);
    ~ChannelMeasurement();
    void createTable(int rowCount);

private:
    Ui::ChannelMeasurement *ui;
};

#endif // CHANNELMEASUREMENT_H
