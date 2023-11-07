#ifndef MEASUREMENTPAGE_H
#define MEASUREMENTPAGE_H

#include <QWidget>
#include <QLabel>

class ChannelMeasurement;
class ChannelRouting;
class LoudnessGain;
class LoudspeakerFrequencyResponse;
class FrequencyDivisionConfiguration;
class FrequencyResponseOfSoundField;
class AutomaticSoundFieldEqualization;
class ManualTuning;
// class DelayMeasurement;

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
    void loadData();
    void setNextLabelStyle(int index);
    void setPreviousLabelStyle(int index);

private:

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
    FrequencyDivisionConfiguration* frequencyDivisionConfiguration;
    FrequencyResponseOfSoundField* frequencyResponseOfSoundField;
    AutomaticSoundFieldEqualization* automaticSoundFieldEqualization;
    ManualTuning* manualTuning;
    // DelayMeasurement* delayMeasurement;
    
};

#endif // MEASUREMENTPAGE_H
