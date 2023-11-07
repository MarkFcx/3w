#include "progress_frame.h"

ProgressFrame::ProgressFrame(QWidget *parent) : QWidget(parent)
{
    ui.setupUi(this);
}

void ProgressFrame::setProgress(double percentage)
{
    int scaledPercentage = static_cast<int>((percentage * 100.0)) % 25;
    int index = scaledPercentage * (25 / 19);

    qDebug() << " scaledPercentage " << scaledPercentage;
    qDebug() << " index " << index;

    for (int i = 0; i < index; ++i)
    {
        QLabel *label = findChild<QLabel *>(QString("progress_label_%1").arg(i + 1));
        if (label)
            label->setStyleSheet("QLabel { background: qlineargradient(spread:pad, x1:0.0149254, y1:0.0113636, x2:0.9801, y2:0.971591, stop:0 rgba(67, 203, 255, 255), stop:1 rgba(151, 8, 204, 255)); }");
    }
}
