#ifndef CHANNELROUTING_H
#define CHANNELROUTING_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class ChannelRouting;
}

class ChannelRouting : public QWidget
{
    Q_OBJECT

public:
    explicit ChannelRouting(QWidget *parent = nullptr);
    ~ChannelRouting();
    void createTable();
    void loadChannelRoutingData();

private slots:
    void handleColumnPlayButtonClick();
    void handleRowPlayButtonClick();

private:
    Ui::ChannelRouting *ui;
    QVector<QPushButton*> playButtons;
};

#endif // CHANNELROUTING_H
