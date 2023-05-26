#include "measurementpage.h"
#include "ui_measurementpage.h"
#include "widgets/ChannelMeasurement.h"
#include "widgets/ChannelRouting.h"
#include "widgets/LoudnessGain.h"
#include "widgets/LoudspeakerFrequencyResponse.h"
#include "widgets/FrequencyDivisionConfiguration.h"
#include "widgets/FrequencyResponseOfSoundField.h"
#include "widgets/AutomaticSoundFieldEqualization.h"
#include "widgets/ManualTuning.h"
// #include "widgets/DelayMeasurement.h"

MeasurementPage::MeasurementPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MeasurementPage),
    currentIndex(0)
{
    ui->setupUi(this);
    initDownWidgetsAddToPage();

    connect(ui->NextStepButton, &QPushButton::clicked, this, &MeasurementPage::onNextStepButtonClicked);
    connect(ui->PreviousStepButton, &QPushButton::clicked, this, &MeasurementPage::onPreviousStepButtonClicked);
}

MeasurementPage::~MeasurementPage()
{
    delete ui;
}

void MeasurementPage::initDownWidgetsAddToPage()
{
    QHBoxLayout* layout = new QHBoxLayout(ui->DownFrame);

    channelMeasurement = new ChannelMeasurement(this);
    layout->addWidget(channelMeasurement);
    channelMeasurement->show();

    channelRouting = new ChannelRouting(this);
    layout->addWidget(channelRouting);
    channelRouting->hide();

    loudnessGain = new LoudnessGain(this);
    layout->addWidget(loudnessGain);
    loudnessGain->hide();

    loudspeakerFrequencyResponse = new LoudspeakerFrequencyResponse(this);
    layout->addWidget(loudspeakerFrequencyResponse);
    loudspeakerFrequencyResponse->hide();

    frequencyDivisionConfiguration = new FrequencyDivisionConfiguration(this);
    layout->addWidget(frequencyDivisionConfiguration);
    frequencyDivisionConfiguration->hide();

    frequencyResponseOfSoundField = new FrequencyResponseOfSoundField(this);
    layout->addWidget(frequencyResponseOfSoundField);
    frequencyResponseOfSoundField->hide();

    automaticSoundFieldEqualization = new AutomaticSoundFieldEqualization(this);
    layout->addWidget(automaticSoundFieldEqualization);
    automaticSoundFieldEqualization->hide();

    manualTuning = new ManualTuning(this);
    layout->addWidget(manualTuning);
    manualTuning->hide();

    // delayMeasurement = new DelayMeasurement(this);
    // layout->addWidget(delayMeasurement);
    // delayMeasurement->hide();

}

void MeasurementPage::onNextStepButtonClicked()
{
    // 隐藏当前实例
    if (currentIndex == 0) {
        channelMeasurement->hide();
    } else if (currentIndex == 1) {
        channelRouting->hide();
    } else if (currentIndex == 2) {
        loudnessGain->hide();
    } else if (currentIndex == 3) {
        loudspeakerFrequencyResponse->hide();
    } else if (currentIndex == 4) {
        frequencyDivisionConfiguration->hide();
    } else if (currentIndex == 5) {
        frequencyResponseOfSoundField->hide();
    } else if (currentIndex == 6) {
        automaticSoundFieldEqualization->hide();
    } 
    else if (currentIndex == 7) {
        manualTuning->hide();
    } 
    // else if (currentIndex == 8) {
    //     delayMeasurement->hide();
    // }

    // 更新索引
    currentIndex = (currentIndex + 1) % 9;

    // 显示下一个实例
    if (currentIndex == 0) {
        channelMeasurement->show();
    } else if (currentIndex == 1) {
        channelRouting->show();
    } else if (currentIndex == 2) {
        loudnessGain->show();
    } else if (currentIndex == 3) {
        loudspeakerFrequencyResponse->show();
    } else if (currentIndex == 4) {
        frequencyDivisionConfiguration->show();
    } else if (currentIndex == 5) {
        frequencyResponseOfSoundField->show();
    } else if (currentIndex == 6) {
        automaticSoundFieldEqualization->show();
    } 
    else if (currentIndex == 7) {
        manualTuning->show();
    } 
    // else if (currentIndex == 8) {
    //     delayMeasurement->show();
    // }
}

void MeasurementPage::onPreviousStepButtonClicked()
{

    // 隐藏当前实例
    if (currentIndex == 0) {
        channelMeasurement->hide();
    } else if (currentIndex == 1) {
        channelRouting->hide();
    } else if (currentIndex == 2) {
        loudnessGain->hide();
    } else if (currentIndex == 3) {
        loudspeakerFrequencyResponse->hide();
    } else if (currentIndex == 4) {
        frequencyDivisionConfiguration->hide();
    } else if (currentIndex == 5) {
        frequencyResponseOfSoundField->hide();
    } else if (currentIndex == 6) {
        automaticSoundFieldEqualization->hide();
    } 
    else if (currentIndex == 7) {
        manualTuning->hide();
    } 
    // else if (currentIndex == 8) {
    //     delayMeasurement->hide();
    // }
    

    // 更新索引
    currentIndex = (currentIndex - 1 + 9) % 9;

    // 显示上一个实例
    if (currentIndex == 0) {
        channelMeasurement->show();
    } else if (currentIndex == 1) {
        channelRouting->show();
    } else if (currentIndex == 2) {
        loudnessGain->show();
    } else if (currentIndex == 3) {
        loudspeakerFrequencyResponse->show();
    } else if (currentIndex == 4) {
        frequencyDivisionConfiguration->show();
    } else if (currentIndex == 5) {
        frequencyResponseOfSoundField->show();
    } else if (currentIndex == 6) {
        automaticSoundFieldEqualization->show();
    } 
    else if (currentIndex == 7) {
        manualTuning->show();
    } 
    // else if (currentIndex == 8) {
    //     delayMeasurement->show();
    // }
}
