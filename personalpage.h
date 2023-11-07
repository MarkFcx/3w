#ifndef PERSONALPAGE_H
#define PERSONALPAGE_H

#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QMenu>
#include <QtSql>

class MeasurementPage;

namespace Ui {
class PersonalPage;
}

class PersonalPage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonalPage(QWidget *parent = nullptr);
    ~PersonalPage();
    void loadProjects(const QString& username);
    void renameProject(QPushButton* button, const QString& projectName);
    void deleteProject(QPushButton* button, const QString& projectName);
    void openProject(const QString& projectName);
    void showProjectContextMenu(QPushButton* button);
    void createProjectButton(const QString& projectName);

    void decorateButton(QPushButton* button, const QString& projectName);
    void updateProjectNameLabel(QPushButton* button, const QString& newName);
    void updateUpdateTimeLabel(QPushButton* button, const QString& updateTime);

private:
    Ui::PersonalPage *ui;

private slots:
    void on_project_button_clicked(const QString& projectName);
    void on_create_new_project_clicked();


private:
    MeasurementPage* measurementPage;
    int projectIndex = 0;
    int maxColumns = 7;  
    QString buttonStyle = "QPushButton {"
            "    min-width: 150px;"
            "    max-width: 150px;"
            "    max-height: 150px;"
            "    min-height: 150px;"
            "    background: rgb(245, 245, 245);"
            "    border-radius: 10px;"
            "    font-size: 14px;"
            "    font-weight: 400;"
            "    text-align: center;"
            "    color: #111111;"
            "    line-height: 32px;"
            "}"
            "QPushButton:pressed {"
            "    background: rgb(200, 200, 200);"
            "}";
};

#endif // PERSONALPAGE_H
