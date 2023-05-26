#ifndef FREQUENCYRESPONSEOFSOUNDFIELD_H
#define FREQUENCYRESPONSEOFSOUNDFIELD_H

#include <QWidget>

namespace Ui {
class FrequencyResponseOfSoundField;
}

class FrequencyResponseOfSoundField : public QWidget
{
    Q_OBJECT

public:
    explicit FrequencyResponseOfSoundField(QWidget *parent = nullptr);
    ~FrequencyResponseOfSoundField();

private:
    Ui::FrequencyResponseOfSoundField *ui;
};

#endif // FREQUENCYRESPONSEOFSOUNDFIELD_H
