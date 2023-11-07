#include "../GlobalHelper.h"

#include "FrequencyResponseOfSoundField.h"
#include "ui/ui_frequencyresponseofsoundfield.h"

FrequencyResponseOfSoundField::FrequencyResponseOfSoundField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrequencyResponseOfSoundField)
{
    ui->setupUi(this);

    connect(ui->car_play_left_front_button, &QPushButton::clicked, this, &FrequencyResponseOfSoundField::on_car_play_left_front_button_clicked);
    connect(ui->car_play_right_front_button, &QPushButton::clicked, this, &FrequencyResponseOfSoundField::on_car_play_right_front_button_clicked);
    connect(ui->car_play_left_rear_button, &QPushButton::clicked, this, &FrequencyResponseOfSoundField::on_car_play_left_rear_button_clicked);
    connect(ui->car_play_right_rear_button, &QPushButton::clicked, this, &FrequencyResponseOfSoundField::on_car_play_right_rear_button_clicked);

    // Create and add ProgressFrame instances to the layout
    QHBoxLayout *layout = new QHBoxLayout(ui->progress_widget);
    layout->setSpacing(3);
    progressFrames.push_back(new ProgressFrame(this));
    progressFrames.push_back(new ProgressFrame(this));
    progressFrames.push_back(new ProgressFrame(this));
    progressFrames.push_back(new ProgressFrame(this));

    for (ProgressFrame* frame : progressFrames)
    {
        layout->addWidget(frame);
    }

    if(GlobalHelper::getInstance().getIsDevelopmentTesting())
    {
        ui->test_slider->show();
        connect(ui->test_slider, &QSlider::valueChanged, this, &FrequencyResponseOfSoundField::on_horizontalSlider_valueChanged);
    }
    else {
        ui->test_slider->hide();
    }

}

FrequencyResponseOfSoundField::~FrequencyResponseOfSoundField()
{
    delete ui;

    // Delete the ProgressFrame instances
    for (ProgressFrame* frame : progressFrames)
    {
        delete frame;
    }
}

void FrequencyResponseOfSoundField::setProgress(double percentage)
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

void FrequencyResponseOfSoundField::on_car_play_left_front_button_clicked()
{
    // TODO：添加后端接口代码
}

void FrequencyResponseOfSoundField::on_car_play_right_front_button_clicked()
{
    // TODO：添加后端接口代码
}

void FrequencyResponseOfSoundField::on_car_play_left_rear_button_clicked()
{
    // TODO：添加后端接口代码
}

void FrequencyResponseOfSoundField::on_car_play_right_rear_button_clicked()
{
    // TODO：添加后端接口代码
}

//// 开发测试代码
void FrequencyResponseOfSoundField::on_horizontalSlider_valueChanged(int value)
{
    double percentage = static_cast<double>(value) / 100.0;
    setProgress(percentage);
}
//// 开发测试代码