#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personalpage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建 PersonalPage
    personalPage = new PersonalPage(this);

    // 创建一个垂直布局管理器，并将 PersonalPage 添加到布局中
    QVBoxLayout* layout = new QVBoxLayout(ui->centralwidget);
    layout->addWidget(personalPage);

    // 隐藏 PersonalPage，只有在登录成功后才显示
    personalPage->hide();

    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    ui->LoginFrame->hide();

    // 在这里进行用户名和密码的验证
    // 如果验证成功，打开个人主页
    // PersonalPage personalPage(this);
    // personalPage.setName(username);
    personalPage->show();
    // close();
}
