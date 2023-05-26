#include "ManualTuning.h"
#include "ui/ui_ManualTuning.h"

ManualTuning::ManualTuning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManualTuning)
{
    ui->setupUi(this);
}

ManualTuning::~ManualTuning()
{
    delete ui;
}
