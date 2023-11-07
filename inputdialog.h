#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTcpSocket>

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = nullptr);
    ~InputDialog();

private:
    Ui::InputDialog *ui;
    int speaker = 0;
    QString description = "";
    void setLabelAfterConnectsuccessful();

private slots:
    void on_ok_clicked();
    void on_cancel_clicked();
    void on_connect_clicked();
};

#endif // INPUTDIALOG_H
