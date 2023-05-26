#ifndef MANUALTUNING_H
#define MANUALTUNING_H

#include <QWidget>

namespace Ui {
class ManualTuning;
}

class ManualTuning : public QWidget
{
    Q_OBJECT

public:
    explicit ManualTuning(QWidget *parent = nullptr);
    ~ManualTuning();

private:
    Ui::ManualTuning *ui;
};

#endif // MANUALTUNING_H
