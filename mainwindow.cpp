#include <iostream>
#include "GlobalHelper.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personalpage.h"
#include "loginpage.h"
#include "DatabaseManager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    decorateButton(ui->PersonalPageButton, "main_page_icon.svg", "主页");
    connect(ui->exit_button, &QPushButton::clicked, this, &MainWindow::onExitButtonClicked);
    connect(ui->PersonalPageButton, &QPushButton::clicked, this, &MainWindow::onShowPersonalPage);

    loadDatabase();
    initLoginPage();

    GlobalHelper::getInstance().setIsDevelopmentTesting(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadDatabase()
{
    m_databaseManager = &DatabaseManager::getInstance();
    if (!m_databaseManager->initialize()) {
        qDebug() << "Database initialization failed";
    }

    if (!m_databaseManager->createTables()) {
        qDebug() << "Failed to create database tables";
    }

    // 开发代码：
    this->createNewUser("admin", "123");
}

void MainWindow::initLoginPage()
{
    QVBoxLayout* layout = new QVBoxLayout(ui->centralwidget);
    layout->setContentsMargins(0,0,0,0);

    loginPage = new LoginPage(this);
    layout->addWidget(loginPage);
    loginPage->show();
    ui->barWidget->hide();

    personalPage = new PersonalPage(this);
    layout->addWidget(personalPage);
    personalPage->hide();

    connect(loginPage, SIGNAL(loginSuccessful(QString)), this, SLOT(onLoginSuccessful(QString)));
}

void MainWindow::onShowPersonalPage()
{
    if (ui->PersonalPageButton->isChecked())
    {   
        personalPage->show();
    }
    else{
        personalPage->hide();
    }
}

void MainWindow::onLoginSuccessful(const QString& username)
{
    personalPage->loadProjects(username);

    // 存储当前用户名和用户ID
    GlobalHelper::getInstance().setCurrentUsername(username);

    loginPage->hide();
    personalPage->show();
    ui->barWidget->show();
}

void MainWindow::createNewUser(const QString& username, const QString& password)
{
    int userId = m_databaseManager->findUser(username);
    if (userId != -1) {
        qDebug() << "User already exists";
        return;
    }

    bool success = m_databaseManager->addUser(username, password, 0);
    if (success) {
        qDebug() << "New user created:" << username;
    } else {
        qDebug() << "Failed to create user:" << username;
    }
}

void MainWindow::decorateButton(QPushButton* button, const QString& icon_url, const QString& text) 
{
    // 创建布局
    QHBoxLayout* layout = new QHBoxLayout(button);
    layout->setContentsMargins(14, 0, 0, 0);

    // 创建图标标签
    QLabel* icon_label = new QLabel(button);
    icon_label->setObjectName(QString("icon_label"));
    icon_label->setStyleSheet("QLabel {"
            "min-width: 16px;"
            "max-width: 16px;"
            "max-height: 14px;"
            "min-height: 14px;"
            "background: transparent;"
            "border-image: url(:/icon/" + icon_url + ");"
        "}");
    layout->addWidget(icon_label);

    // 创建文本标签
    QLabel* text_label = new QLabel(text, button);
    text_label->setObjectName(QString("text_label"));
    text_label->setStyleSheet(
        "font-family: 'Manrope';"
        "font-style: normal;"
        "font-weight: 500;"
        "font-size: 12px;"
        "line-height: 16px;"
        "color: #36373A;"
        "background: transparent;"
    );
    layout->addWidget(text_label);

    // 设置按钮的布局
    button->setLayout(layout);
}

void MainWindow::onExitButtonClicked()
{
    QApplication::quit(); // 关闭整个程序
}

void MainWindow::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_isMousePressed = true;
        m_mousePressPos = event->pos();
        m_windowPos = this->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
    if (m_isMousePressed) {
        QPoint diff = event->pos() - m_mousePressPos;
        this->move(m_windowPos + diff);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_isMousePressed = false;
    }
}