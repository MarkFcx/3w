#ifndef LOUDNESSGAIN_H
#define LOUDNESSGAIN_H

#include <QWidget>

namespace Ui {
class LoudnessGain;
}

class LoudnessGain : public QWidget
{
    Q_OBJECT

public:
    explicit LoudnessGain(QWidget *parent = nullptr);
    ~LoudnessGain();

private:
    Ui::LoudnessGain *ui;
};

#endif // LOUDNESSGAIN_H
