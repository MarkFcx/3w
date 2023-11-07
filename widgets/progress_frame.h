#ifndef PROGRESS_FRAME_H
#define PROGRESS_FRAME_H

#include <QWidget>
#include <QLabel>
#include "ui/ui_progress_frame.h"

class ProgressFrame : public QWidget
{
    Q_OBJECT

public:
    ProgressFrame(QWidget *parent = nullptr);

    void setProgress(double percentage);

private:
    Ui::ProgressFrame ui;
};

#endif // PROGRESS_FRAME_H
