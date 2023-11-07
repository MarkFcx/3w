#include "LoudnessGainSingleWidget.h"
#include "ui/ui_LoudnessGainSingleWidget.h"

LoudnessGainSingleWidget::LoudnessGainSingleWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudnessGainSingleWidget)
{
    ui->setupUi(this);
}

LoudnessGainSingleWidget::~LoudnessGainSingleWidget()
{
    delete ui;
}
