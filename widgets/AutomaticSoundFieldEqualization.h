#ifndef AUTOMATICSOUNDFIELDEQUALIZATION_H
#define AUTOMATICSOUNDFIELDEQUALIZATION_H

#include <QWidget>

namespace Ui {
class AutomaticSoundFieldEqualization;
}

class AutomaticSoundFieldEqualization : public QWidget
{
    Q_OBJECT

public:
    explicit AutomaticSoundFieldEqualization(QWidget *parent = nullptr);
    ~AutomaticSoundFieldEqualization();

private:
    Ui::AutomaticSoundFieldEqualization *ui;
};

#endif // AUTOMATICSOUNDFIELDEQUALIZATION_H
