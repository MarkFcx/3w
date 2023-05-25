#ifndef CHANNELROUTING_H
#define CHANNELROUTING_H

#include <QWidget>

namespace Ui {
class ChannelRouting;
}

class ChannelRouting : public QWidget
{
    Q_OBJECT

public:
    explicit ChannelRouting(QWidget *parent = nullptr);
    ~ChannelRouting();
    void createTable(int rowCount);

private:
    Ui::ChannelRouting *ui;
};

#endif // CHANNELROUTING_H
