#include "FrequencyDivisionConfiguration.h"
#include "ui/ui_FrequencyDivisionConfiguration.h"

FrequencyDivisionConfiguration::FrequencyDivisionConfiguration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrequencyDivisionConfiguration)
{
    ui->setupUi(this);
}

FrequencyDivisionConfiguration::~FrequencyDivisionConfiguration()
{
    delete ui;
}
