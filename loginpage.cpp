#include "GlobalHelper.h"

#include "loginpage.h"
#include "ui_loginpage.h"
#include <iostream>

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(onLoginButtonClicked()));
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::onLoginButtonClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    // 执行登录操作，验证用户名和密码
    QSqlQuery query;
    query.prepare("SELECT * FROM Users WHERE Username = :username AND Password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();

    if (query.next()) {
        // 登录成功
        emit loginSuccessful(username);
        std::cout << "登录成功！" << std::endl;
    }
    else
    {
        // 登录失败
        // ui->statusLabel->setText("用户名密码不正确！");
        std::cout << "用户名密码不正确！" << std::endl;
    }

}

