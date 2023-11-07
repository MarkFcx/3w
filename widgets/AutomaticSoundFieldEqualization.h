#ifndef AUTOMATICSOUNDFIELDEQUALIZATION_H
#define AUTOMATICSOUNDFIELDEQUALIZATION_H

#include <QWidget>
#include <QHBoxLayout>
#include "progress_frame.h"

namespace Ui {
class AutomaticSoundFieldEqualization;
}

class AutomaticSoundFieldEqualization : public QWidget
{
    Q_OBJECT

public:
    explicit AutomaticSoundFieldEqualization(QWidget *parent = nullptr);
    ~AutomaticSoundFieldEqualization();

    void setProgress(double percentage);

private:
    Ui::AutomaticSoundFieldEqualization *ui;
    QVector<ProgressFrame*> progressFrames;

//// 开发测试代码
private slots:
    void on_horizontalSlider_valueChanged(int value);
//// 开发测试代码

};

#endif // AUTOMATICSOUNDFIELDEQUALIZATION_H
