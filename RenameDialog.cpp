#include "RenameDialog.h"
#include "ui_RenameDialog.h"

RenameDialog::RenameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenameDialog)
{
    ui->setupUi(this);

    // 连接确定按钮的点击信号到槽函数
    connect(ui->okButton, &QPushButton::clicked, this, &RenameDialog::onOkButtonClicked);
}

RenameDialog::~RenameDialog()
{
    delete ui;
}

void RenameDialog::setInitialProjectName(const QString& projectName)
{
    ui->newNameLineEdit->setText(projectName);
}

QString RenameDialog::getNewProjectName() const
{
    return ui->newNameLineEdit->text();
}

void RenameDialog::onOkButtonClicked()
{
    // QString newName = getNewProjectName();
    // emit nameChanged(newName);
    accept();
}
