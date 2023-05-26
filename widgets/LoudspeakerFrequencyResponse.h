#ifndef LOUDSPEAKERFREQUENCYRESPONSE_H
#define LOUDSPEAKERFREQUENCYRESPONSE_H

#include <QWidget>
#include <QtCharts>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <qcustomplot.h>

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
    void drawCurve(QCustomPlot* customPlot, int index, const QColor& color, double peakX, double peakY);

private:
    Ui::LoudspeakerFrequencyResponse *ui;
    QChartView* chartView;
};

#endif // LOUDSPEAKERFREQUENCYRESPONSE_H
