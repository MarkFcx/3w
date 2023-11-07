#ifndef LOUDNESSGAIN_H
#define LOUDNESSGAIN_H

#include <QWidget>
#include <QVBoxLayout>
#include <QSizePolicy>
#include <vector>

class LoudnessGainSingleWidget; // 前向声明

namespace Ui {
class LoudnessGain;
}

class LoudnessGain : public QWidget
{
    Q_OBJECT

public:
    explicit LoudnessGain(QWidget *parent = nullptr);
    ~LoudnessGain();

    LoudnessGainSingleWidget* getSpeakerWidget(int index);

private:
    Ui::LoudnessGain *ui;
    std::vector<LoudnessGainSingleWidget*> speakerWidgets;

    void createSpeakerWidgets(int n);
    void clearSpeakerWidgets();
};

#endif // LOUDNESSGAIN_H
