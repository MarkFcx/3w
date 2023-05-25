#ifndef MEASUREMENTPAGE_H
#define MEASUREMENTPAGE_H

#include <QWidget>

class ChannelMeasurement;
class ChannelRouting;
class LoudnessGain;
class LoudspeakerFrequencyResponse;

namespace Ui {
class MeasurementPage;
}

class MeasurementPage : public QWidget
{
    Q_OBJECT

public:
    explicit MeasurementPage(QWidget *parent = nullptr);
    ~MeasurementPage();
    void initDownWidgetsAddToPage();

private slots:
    void onNextStepButtonClicked();
    void onPreviousStepButtonClicked();

private:
    Ui::MeasurementPage *ui;

private:
    int currentIndex;
    ChannelMeasurement* channelMeasurement;
    ChannelRouting* channelRouting;
    LoudnessGain* loudnessGain;
    LoudspeakerFrequencyResponse* loudspeakerFrequencyResponse;
};

#endif // MEASUREMENTPAGE_H
