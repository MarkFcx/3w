#include "personalpage.h"
#include "ui_personalpage.h"
#include "measurementpage.h"

PersonalPage::PersonalPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalPage)
{
    ui->setupUi(this);

    // 创建 MeasurementPage
    measurementPage = new MeasurementPage(this);

    // 创建一个垂直布局管理器，并将 PersonalPage 添加到布局中
    // QVBoxLayout* layout = new QVBoxLayout(ui->PersonalPage);
    ui->PersonalPageLayout->addWidget(measurementPage);

    // 隐藏 PersonalPage，只有在登录成功后才显示
    measurementPage->hide();

    connect(ui->button2, &QPushButton::clicked, this, &PersonalPage::on_button2_clicked);
}

PersonalPage::~PersonalPage()
{
    delete ui;
}

void PersonalPage::on_button2_clicked()
{
    ui->ManageWidget->hide();

    measurementPage->show();
}
