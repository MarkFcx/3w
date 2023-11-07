#include "../GlobalHelper.h"

#include "AutomaticSoundFieldEqualization.h"
#include "ui/ui_AutomaticSoundFieldEqualization.h"

AutomaticSoundFieldEqualization::AutomaticSoundFieldEqualization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AutomaticSoundFieldEqualization)
{
    ui->setupUi(this);

    QHBoxLayout *layout = new QHBoxLayout(ui->progress_widget);
    layout->setSpacing(3);
    
    for (int i = 0; i < 4; ++i)
    {
        ProgressFrame* progressFrame = new ProgressFrame(this);
        progressFrames.append(progressFrame);
        layout->addWidget(progressFrame);
    }

    if(GlobalHelper::getInstance().getIsDevelopmentTesting())
    {
        ui->test_slider->show();
        connect(ui->test_slider, &QSlider::valueChanged, this, &AutomaticSoundFieldEqualization::on_horizontalSlider_valueChanged);
    }
    else {
        ui->test_slider->hide();
    }
}

AutomaticSoundFieldEqualization::~AutomaticSoundFieldEqualization()
{
    delete ui;
}

void AutomaticSoundFieldEqualization::setProgress(double percentage)
{
    if (percentage >= 0 && percentage <= 1)
    {
        if (percentage < 0.25)
            progressFrames[0]->setProgress(percentage);
        else if (percentage < 0.5)
            progressFrames[1]->setProgress(percentage);
        else if (percentage < 0.75)
            progressFrames[2]->setProgress(percentage);
        else
            progressFrames[3]->setProgress(percentage);

        int percent = static_cast<int>(percentage * 100);
        ui->percent_label->setText(QString("%1 %").arg(percent));
    }
}

//// 开发测试代码
void AutomaticSoundFieldEqualization::on_horizontalSlider_valueChanged(int value)
{
    double percentage = static_cast<double>(value) / 100.0;
    setProgress(percentage);
}
//// 开发测试代码
