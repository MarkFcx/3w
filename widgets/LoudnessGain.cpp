#include "LoudnessGain.h"
#include "ui/ui_LoudnessGain.h"
#include "../GlobalHelper.h"

#include "LoudnessGainSingleWidget.h"


LoudnessGain::LoudnessGain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudnessGain)
{
    ui->setupUi(this);

    // 创建speakerWidget函数，传入数量n个
    createSpeakerWidgets(GlobalHelper::getInstance().getSpeakerCount());
    qDebug() << "LoudnessGain: " << GlobalHelper::getInstance().getSpeakerCount();
}

LoudnessGain::~LoudnessGain()
{
    delete ui;
    clearSpeakerWidgets();
}

void LoudnessGain::createSpeakerWidgets(int n)
{
    for (int i = 0; i < n; ++i)
    {
        // 创建LoudnessGainSingleWidget实例
        LoudnessGainSingleWidget* widget = new LoudnessGainSingleWidget(this);
        ui->LoudnessGainScrollAreaWidgetLayout->addWidget(widget);

        // 将widget存储到容器中
        speakerWidgets.push_back(widget);
    }
    ui->LoudnessGainScrollAreaWidgetLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));
}

LoudnessGainSingleWidget* LoudnessGain::getSpeakerWidget(int index)
{
    if (index >= 0 && index < speakerWidgets.size())
        return speakerWidgets[index];

    return nullptr;
}

void LoudnessGain::clearSpeakerWidgets()
{
    for (LoudnessGainSingleWidget* widget : speakerWidgets)
        delete widget;

    speakerWidgets.clear();
}
