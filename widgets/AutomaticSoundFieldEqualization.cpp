#include "AutomaticSoundFieldEqualization.h"
#include "ui/ui_AutomaticSoundFieldEqualization.h"

AutomaticSoundFieldEqualization::AutomaticSoundFieldEqualization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AutomaticSoundFieldEqualization)
{
    ui->setupUi(this);
}

AutomaticSoundFieldEqualization::~AutomaticSoundFieldEqualization()
{
    delete ui;
}
