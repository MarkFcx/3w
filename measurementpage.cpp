#include "measurementpage.h"
#include "ui_measurementpage.h"
#include "widgets/ChannelMeasurement.h"
#include "widgets/ChannelRouting.h"
#include "widgets/LoudnessGain.h"
#include "widgets/LoudspeakerFrequencyResponse.h"

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
    }

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
    }
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
    }

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
    }
}
