#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QtSql>

#include <QMouseEvent>
#include <QPoint>

class PersonalPage;
class LoginPage;
class DatabaseManager;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initLoginPage();
    void loadDatabase();

private slots:
    void onLoginSuccessful(const QString& username);

private slots:
    void onExitButtonClicked();
    void onShowPersonalPage();

private:
    Ui::MainWindow *ui;

private:
    PersonalPage* personalPage;
    LoginPage* loginPage;
    DatabaseManager* m_databaseManager;

private:
    bool m_isMousePressed;
    QPoint m_mousePressPos;
    QPoint m_windowPos;

    void createNewUser(const QString& username, const QString& password);

private:
    void decorateButton(QPushButton* button, const QString& icon_url, const QString& text);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
};

#endif // MAINWINDOW_H
