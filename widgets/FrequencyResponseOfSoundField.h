#ifndef FREQUENCYRESPONSEOFSOUNDFIELD_H
#define FREQUENCYRESPONSEOFSOUNDFIELD_H

#include <QWidget>
#include <vector>
#include "progress_frame.h"

namespace Ui {
class FrequencyResponseOfSoundField;
}

class FrequencyResponseOfSoundField : public QWidget
{
    Q_OBJECT

public:
    explicit FrequencyResponseOfSoundField(QWidget *parent = nullptr);
    ~FrequencyResponseOfSoundField();

    void setProgress(double percentage);

private slots:
    void on_car_play_left_front_button_clicked();
    void on_car_play_right_front_button_clicked();
    void on_car_play_left_rear_button_clicked();
    void on_car_play_right_rear_button_clicked();

private:
    Ui::FrequencyResponseOfSoundField *ui;
    std::vector<ProgressFrame*> progressFrames;

//// 开发测试代码
private slots:
    void on_horizontalSlider_valueChanged(int value);
//// 开发测试代码

};

#endif // FREQUENCYRESPONSEOFSOUNDFIELD_H
