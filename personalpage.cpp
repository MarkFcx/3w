#include <iostream>
#include "GlobalHelper.h"

#include "personalpage.h"
#include "ui_personalpage.h"
#include "ui_mainwindow.h"
#include "RenameDialog.h"
#include "measurementpage.h"
#include "inputdialog.h"
#include "DatabaseManager.h"

PersonalPage::PersonalPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalPage)
{
    ui->setupUi(this);

    connect(ui->CreateNewProjectButton, &QPushButton::clicked, this, &PersonalPage::on_create_new_project_clicked);
}

PersonalPage::~PersonalPage()
{
    delete ui;
}

void PersonalPage::on_project_button_clicked(const QString& projectName)
{
    openProject(projectName);
    ui->ManageWidget->hide();

    measurementPage = new MeasurementPage(this);
    ui->PersonalPageLayout->addWidget(measurementPage);
    measurementPage->loadData();
    measurementPage->show();
}

void PersonalPage::openProject(const QString& projectName)
{
    // 执行打开项目的逻辑
    qDebug() << "打开项目：" << projectName;

    // 设置当前项目名
    GlobalHelper::getInstance().setCurrentProject(projectName);
}

void PersonalPage::on_create_new_project_clicked()
{
    InputDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString projectName = "新项目";

        // 1. 从数据库查找项目的数量，在数量上自动叠加1，生成新项目名字
        int userID = GlobalHelper::getInstance().getCurrentUserID();

        int projectCount = GlobalHelper::getInstance().getProjectCount();
        QString newProjectName = projectName + QString::number(projectCount + 1);

        // 2. 将新项目加入对应数据库
        int loudspeakerCount = GlobalHelper::getInstance().getSpeakerCount();
        QString loudspeakerDescription = GlobalHelper::getInstance().getSpeakerDescription();
        int modeCount = 0;
        QString updateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        int projectID = DatabaseManager::getInstance().addProject(userID, newProjectName, loudspeakerCount, loudspeakerDescription, modeCount, updateTime);
        if (projectID == -1) {
            qDebug() << "Failed to add new project to the database.";
            return;
        }

        // 3. 根据GlobalHelper::getInstance().getSpeakerCount() 创建相应数量个扬声器表
        for (int i = 1; i <= loudspeakerCount; i++) {
            QString loudspeakerName = "扬声器" + QString::number(i);
            double distance = 0.0;
            double pitch = 0.0;
            double yaw = 0.0;
            double attitudePitch = 0.0;
            double attitudeYaw = 0.0;
            QStringList columnCount;
            double volume = 0.0;
            QList<QVariantMap> balls;
            for (int i = 0; i < 6; ++i) {
                QVariantMap ball;
                ball["x"] = 0;
                ball["y"] = 0;
                ball["q"] = 0;
                balls.append(ball);
            }
            int crossoverRowCount = 0;
            QStringList modeNames;
            double delay = 0.0;

            bool success = DatabaseManager::getInstance().addLoudspeaker(projectID, loudspeakerName, distance, pitch, yaw, attitudePitch, attitudeYaw,
                                                                    columnCount, volume, balls, crossoverRowCount, modeNames, delay);
            if (!success) {
                qDebug() << "Failed to add loudspeaker" << i << "to the database.";
                return;
            }
        }

        // 4. 创建项目按钮
        createProjectButton(newProjectName);

    }
}


void PersonalPage::loadProjects(const QString& username)
{
    // 1. 清空已有的按钮
    QLayoutItem* item;
    QGridLayout* gridLayout = qobject_cast<QGridLayout*>(ui->projectFrame->layout());
    while ((item = gridLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // 2. 根据用户名查找对应的用户ID
    int userId = DatabaseManager::getInstance().findUser(username);
    if (userId == -1) {
        qDebug() << "User not found";
        return;
    }

    // 3. 查找该用户名下的所有项目表
    QList<QString> projects = DatabaseManager::getInstance().findProjects(userId);
    if (projects.isEmpty()) {
        qDebug() << "No projects found";
        return;
    }

    // 4. 创建项目按钮
    for (const QString& projectName : projects) {
        createProjectButton(projectName);
    }
}

void PersonalPage::createProjectButton(const QString& projectName)
{
    // 创建按钮并设置文本
    QPushButton* button = new QPushButton();
    decorateButton(button, projectName);
    
    QGridLayout* gridLayout = qobject_cast<QGridLayout*>(ui->projectFrame->layout());

    projectIndex += 1;
    int currentRowCount = (projectIndex-1) / maxColumns;
    int currentColumnCount = (projectIndex-1) % maxColumns;
    qDebug() << "projectIndex:" << projectIndex;
    qDebug() << "currentRowCount:" << currentRowCount;
    qDebug() << "currentColumnCount:" << currentColumnCount;

    gridLayout->addWidget(button, currentRowCount, currentColumnCount);

    // 连接按钮的点击信号到槽函数，实现进入项目测量页等逻辑
    connect(button, &QPushButton::clicked, [this, projectName]() {
        on_project_button_clicked(projectName);
    });

    // // 设置右键菜单
    // button->setContextMenuPolicy(Qt::CustomContextMenu);
    // connect(button, &QPushButton::customContextMenuRequested, [this, button]() {
    //     showProjectContextMenu(button);
    // });

}

void PersonalPage::decorateButton(QPushButton* button, const QString& projectName)
{
    // 创建标签并设置样式和文本
    QLabel* iconLabel = new QLabel();
    iconLabel->setFixedSize(54, 54);
    iconLabel->setStyleSheet(
        "QLabel{"
        "    border-radius: 10px;"
	    "    border-image: url(:/icon/project_button_icon.png);"
        "}");

    QLabel* nameLabel = new QLabel(projectName);
    nameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
    nameLabel->setStyleSheet(
        "QLabel{"
        "    color: #343434;"
        "}");
    	

    QLabel* updateTimeLabel = new QLabel();
    updateTimeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

    // 创建网格布局，并添加标签
    QGridLayout* layout = new QGridLayout(button);
    layout->addWidget(iconLabel, 0, 0, 1, 1);
    layout->addWidget(nameLabel, 1, 0, 1, 1);
    layout->addWidget(updateTimeLabel, 2, 0, 1, 1);
    layout->setContentsMargins(0, 30, 0, 0);  // 设置上边距为30像素

    // 设置按钮的布局和样式
    button->setLayout(layout);
    button->setStyleSheet(buttonStyle);

    // 设置右键菜单
    button->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(button, &QPushButton::customContextMenuRequested, [this, button]() {
        showProjectContextMenu(button);
    });
}

void PersonalPage::updateProjectNameLabel(QPushButton* button, const QString& newName)
{
    // 查找按钮的布局并获取名称标签
    QGridLayout* layout = qobject_cast<QGridLayout*>(button->layout());
    if (layout)
    {
        QLabel* nameLabel = qobject_cast<QLabel*>(layout->itemAtPosition(1, 0)->widget());
        if (nameLabel)
        {
            nameLabel->setText(newName);
        }
    }
}

void PersonalPage::updateUpdateTimeLabel(QPushButton* button, const QString& updateTime)
{
    // 查找按钮的布局并获取更新时间标签
    QGridLayout* layout = qobject_cast<QGridLayout*>(button->layout());
    if (layout)
    {
        QLabel* updateTimeLabel = qobject_cast<QLabel*>(layout->itemAtPosition(2, 0)->widget());
        if (updateTimeLabel)
        {
            updateTimeLabel->setText(updateTime);
        }
    }
}

void PersonalPage::showProjectContextMenu(QPushButton* button)
{
    QMenu* menu = new QMenu(this);
    QAction* openAction = menu->addAction("打开");
    QAction* renameAction = menu->addAction("重命名");
    QAction* deleteAction = menu->addAction("删除");

    QString projectName = button->text();

    connect(openAction, &QAction::triggered, [this, projectName]() {
        on_project_button_clicked(projectName);
    });

    connect(renameAction, &QAction::triggered, [this, button, projectName]() {
        renameProject(button, projectName);
    });

    connect(deleteAction, &QAction::triggered, [this, button, projectName]() {
        deleteProject(button, projectName);
    });

    menu->popup(button->mapToGlobal(QPoint(0, button->height())));
}

void PersonalPage::renameProject(QPushButton* button, const QString& projectName)
{
    // 创建 RenameDialog 对象
    RenameDialog dialog(this);

    // 设置对话框的初始项目名称
    dialog.setInitialProjectName(projectName);

    // 显示对话框并检查返回结果
    if (dialog.exec() == QDialog::Accepted) {
        // 获取用户输入的新项目名称
        QString newProjectName = dialog.getNewProjectName();

        // 执行重命名操作
        if (!newProjectName.isEmpty()) {
            // 更新数据库中的项目名称
            QSqlQuery query;
            query.prepare("UPDATE Projects SET ProjectName = :newName WHERE ProjectName = :oldName");
            query.bindValue(":newName", newProjectName);
            query.bindValue(":oldName", projectName);
            if (query.exec()) {
                // 更新按钮的文本或其他操作
                // button->setText(newProjectName);
                updateProjectNameLabel(button, newProjectName);
                qDebug() << "重命名项目名，数据库更新成功";
            } else {
                qDebug() << "重命名项目失败";
            }
        }
    }
}

void PersonalPage::deleteProject(QPushButton* button, const QString& projectName)
{
    // 删除数据库中的项目
    QSqlQuery query;
    query.prepare("DELETE FROM Projects WHERE ProjectName = :name");
    query.bindValue(":name", projectName);
    if (query.exec()) {
        // 从布局中移除按钮
        ui->projectFrame->layout()->removeWidget(button);
        delete button;
        qDebug() << "删除项目：" << projectName;
        projectIndex -= 1;
    } else {
        qDebug() << "删除项目失败";
    }
}