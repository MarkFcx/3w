#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class PersonalPage;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;

private:
    PersonalPage* personalPage;
};

#endif // MAINWINDOW_H
