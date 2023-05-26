#include "FrequencyResponseOfSoundField.h"
#include "ui/ui_frequencyresponseofsoundfield.h"

FrequencyResponseOfSoundField::FrequencyResponseOfSoundField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrequencyResponseOfSoundField)
{
    ui->setupUi(this);
}

FrequencyResponseOfSoundField::~FrequencyResponseOfSoundField()
{
    delete ui;
}
