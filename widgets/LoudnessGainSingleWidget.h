#ifndef LOUDNESSGAINSINGLEWIDGET_H
#define LOUDNESSGAINSINGLEWIDGET_H

#include <QWidget>

namespace Ui {
class LoudnessGainSingleWidget;
}

class LoudnessGainSingleWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoudnessGainSingleWidget(QWidget *parent = nullptr);
    ~LoudnessGainSingleWidget();

private:
    Ui::LoudnessGainSingleWidget *ui;
};

#endif // LOUDNESSGAINSINGLEWIDGET_H
