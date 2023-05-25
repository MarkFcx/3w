#include "LoudnessGain.h"
#include "ui/ui_LoudnessGain.h"

LoudnessGain::LoudnessGain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudnessGain)
{
    ui->setupUi(this);
}

LoudnessGain::~LoudnessGain()
{
    delete ui;
}
