#include "GlobalHelper.h"

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
    ui->PreviousStepButton->hide();

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
    if (currentIndex > 8) 
    {
        return;
    } 
    ui->PreviousStepButton->show();
    QString nextStepButtonText = "下一步";
    if (currentIndex >= 7) {nextStepButtonText = "同步";}
    ui->NextStepButton->setText(nextStepButtonText);

    // 隐藏当前实例
    if (currentIndex == 0) {
        channelMeasurement->exitMeasurement();
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
    else if (currentIndex == 8) {
        // delayMeasurement->hide();
    }

    // 更新索引
    currentIndex = currentIndex + 1;

    // 显示下一个实例
    if (currentIndex == 0) {
        channelMeasurement->show();
    } else if (currentIndex == 1) {
        channelRouting->show();
    } else if (currentIndex == 2) {
        loudnessGain->show();
    } else if (currentIndex == 3) {
        // loudspeakerFrequencyResponse->show();
        loudspeakerFrequencyResponse->enter();
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

    setNextLabelStyle(currentIndex+1);
}

void MeasurementPage::onPreviousStepButtonClicked()
{
    if (currentIndex < 1)
    {
        ui->PreviousStepButton->hide();
        return;
    } 

    setPreviousLabelStyle(currentIndex+1);

    // 隐藏当前实例
    if (currentIndex == 1) {
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
    currentIndex = currentIndex - 1;

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

    QString nextStepButtonText = "下一步";
    ui->NextStepButton->setText(nextStepButtonText);
}

void MeasurementPage::setNextLabelStyle(int index) {
    QString iconLabelName = QString("icon_label_%1").arg(index);
    QString textLabelName = QString("text_label_%1").arg(index);
    QString lineLabelName = QString("line_label_%1").arg(index);
    QString nextIconLabelName = QString("icon_label_%1").arg(index+1);
    QString nextTextLabelName = QString("text_label_%1").arg(index+1);

    QString iconLabelStyle = QString("QLabel#icon_label_%1{"
        "    border-image: url(:/icon/navigation_icon_current.svg);"
    "}").arg(index);

    QString textLabelStyle = QString("QLabel#text_label_%1{"
        "    color: #565656;"
    "}").arg(index);

    QString lineLabelStyle = QString("QLabel#line_label_%1{"
        "    background: rgb(58, 218, 170);"
    "}").arg(index);

    QString nextIconLabelStyle = QString("QLabel#icon_label_%1{"
        "    border-image: url(:/icon/navigation_icon_prepare.svg);"
    "}").arg(index+1);

    QString nextTextLabelStyle = QString("QLabel#text_label_%1{"
        "    color: #565656;"
    "}").arg(index+1);

    QLabel* iconLabel = ui->frame->findChild<QLabel*>(iconLabelName);
    QLabel* textLabel = ui->frame->findChild<QLabel*>(textLabelName);
    QLabel* lineLabel = ui->frame->findChild<QLabel*>(lineLabelName);
    QLabel* nextIconLabel = ui->frame->findChild<QLabel*>(nextIconLabelName);
    QLabel* nextTextLabel = ui->frame->findChild<QLabel*>(nextTextLabelName);
    if (iconLabel) {
        iconLabel->setStyleSheet(iconLabelStyle);
    }
    if (textLabel) {
        textLabel->setStyleSheet(textLabelStyle);
    }
    if (lineLabel) {
        lineLabel->setStyleSheet(lineLabelStyle);
    }
    if (nextIconLabel) {
        nextIconLabel->setStyleSheet(nextIconLabelStyle);
    }
    if (nextTextLabel) {
        nextTextLabel->setStyleSheet(nextTextLabelStyle);
    }
}

void MeasurementPage::setPreviousLabelStyle(int index) {
    QString previousIconLabelName = QString("icon_label_%1").arg(index);
    QString previousTextLabelName = QString("text_label_%1").arg(index);
    QString previousLineLabelName = QString("line_label_%1").arg(index);
    QString iconLabelName = QString("icon_label_%1").arg(index+1);
    QString textLabelName = QString("text_label_%1").arg(index+1);
    QString lineLabelName = QString("line_label_%1").arg(index+1);

    QLabel* previousIconLabel = ui->frame->findChild<QLabel*>(previousIconLabelName);
    QLabel* previousTextLabel = ui->frame->findChild<QLabel*>(previousTextLabelName);
    QLabel* previousLineLabel = ui->frame->findChild<QLabel*>(previousLineLabelName);
    QLabel* iconLabel = ui->frame->findChild<QLabel*>(iconLabelName);
    QLabel* textLabel = ui->frame->findChild<QLabel*>(textLabelName);
    QLabel* lineLabel = ui->frame->findChild<QLabel*>(lineLabelName);

    QString previousIconLabelStyle = QString("QLabel#icon_label_%1{"
        "    border-image: url(:/icon/navigation_icon_prepare.svg);"
    "}").arg(index);

    QString previousTextLabelStyle = QString("QLabel#text_label_%1{"
        "    color: #565656;"
    "}").arg(index);

    QString previousLineLabelStyle = QString("QLabel#line_label_%1{"
        "    min-width: 40px;    "
        "    max-width: 40px;    "
        "    min-height: 2px;    "
        "    max-height: 2px;    "
        "    background: #9E9E9E;"
    "}").arg(index);

    QString iconLabelStyle = QString("QLabel#icon_label_%1{"
        "    border-image: url(:/icon/navigation_icon_not.svg);"
    "}").arg(index+1);

    QString textLabelStyle = QString("QLabel#text_label_%1{"
        "    color: #9E9E9E;"
    "}").arg(index+1);

    QString lineLabelStyle = QString("QLabel#line_label_%1{"
        "    min-width: 40px;    "
        "    max-width: 40px;    "
        "    min-height: 2px;    "
        "    max-height: 2px;    "
        "    background: #9E9E9E;"
    "}").arg(index+2);

    if (previousIconLabel) {
        previousIconLabel->setStyleSheet(previousIconLabelStyle);
    }
    if (previousTextLabel) {
        previousTextLabel->setStyleSheet(previousTextLabelStyle);
    }
    if (previousLineLabel) {
        previousLineLabel->setStyleSheet(previousLineLabelStyle);
    }
    if (iconLabel) {
        iconLabel->setStyleSheet(iconLabelStyle);
    }
    if (textLabel) {
        textLabel->setStyleSheet(textLabelStyle);
    }
    if (lineLabel) {
        lineLabel->setStyleSheet(lineLabelStyle);
    }
}

void MeasurementPage::loadData()
{
    channelMeasurement->loadChannelMeasurementData();
}





