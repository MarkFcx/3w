#ifndef LOUDSPEAKERFREQUENCYRESPONSE_H
#define LOUDSPEAKERFREQUENCYRESPONSE_H

#include <QWidget>
#include <QtCharts>

namespace Ui {
class LoudspeakerFrequencyResponse;
}

class LoudspeakerFrequencyResponse : public QWidget
{
    Q_OBJECT

public:
    explicit LoudspeakerFrequencyResponse(QWidget *parent = nullptr);
    ~LoudspeakerFrequencyResponse();
    QChart* createChart();

private:
    Ui::LoudspeakerFrequencyResponse *ui;
    QChartView* chartView;
};

#endif // LOUDSPEAKERFREQUENCYRESPONSE_H
