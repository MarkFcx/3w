#ifndef LOGINFRAME_H
#define LOGINFRAME_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void onLoginButtonClicked();

signals:
    void loginSuccessful(const QString& username);
    
private:
    Ui::LoginPage *ui;
};

#endif // LOGINFRAME_H
