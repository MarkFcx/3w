#include "inputdialog.h"
#include "ui_inputdialog.h"

#include "GlobalHelper.h"

InputDialog::InputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputDialog)
{
    ui->setupUi(this);

    connect(ui->OKButton, &QPushButton::clicked, this, &InputDialog::on_ok_clicked);
    connect(ui->CancelButton, &QPushButton::clicked, this, &InputDialog::on_cancel_clicked);
    connect(ui->connectButton, &QPushButton::clicked, this, &InputDialog::on_connect_clicked);
}

InputDialog::~InputDialog()
{
    delete ui;
}

void InputDialog::on_connect_clicked()
{
    QString ipAddress = ui->ipLineEdit->text();
    quint16 port = ui->portLineEdit->text().toUShort();

    // 创建 QTcpSocket 对象
    QTcpSocket* socket = new QTcpSocket(this);

    // 连接到服务器
    socket->connectToHost(ipAddress, port);

    // 等待连接成功
    if (socket->waitForConnected()) {
        // 连接成功后设置按钮文本为 "连接成功"
        ui->connectButton->setText("连接成功");

        // 发送 "getSpeaker" 给下位机
        QString request = "{\"msg\":\"getSpeaker\"}@@@@@";
        socket->write(request.toUtf8());

        // 监听下位机数据
        connect(socket, &QTcpSocket::readyRead, [socket, this]() {
            QByteArray data = socket->readAll();

            // 解析数据
            QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
            if (!jsonDoc.isNull() && jsonDoc.isObject()) {
                QJsonObject jsonObj = jsonDoc.object();

                if (jsonObj.contains("data") && jsonObj["data"].isObject()) {
                    QJsonObject dataObj = jsonObj["data"].toObject();

                    if (dataObj.contains("speaker") && dataObj.contains("description")) {
                        speaker = dataObj["speaker"].toInt();
                        description = dataObj["description"].toString();

                        // 在这里使用 speaker 和 description 的值
                        qDebug() << "Speaker:" << speaker << "Description:" << description;

                        GlobalHelper::getInstance().setSpeakerCount(speaker);
                        GlobalHelper::getInstance().setSpeakerDescription(description);

                        // 调用函数设置 UI 元素状态和文本
                        setLabelAfterConnectsuccessful();
                    }
                }
            }
        });
    } else {
        // 连接失败
        qDebug() << "连接失败";
    }
}

void InputDialog::setLabelAfterConnectsuccessful()
{
    if (description == "7.1") {
        ui->radioButton_71->setCheckable(true);
        ui->radioButton_71->setChecked(true);
    } else if (description == "7.1.2") {
        ui->radioButton_712->setCheckable(true);
        ui->radioButton_712->setChecked(true);
    } else if (description == "7.1.4") {
        ui->radioButton_714->setCheckable(true);
        ui->radioButton_714->setChecked(true);
    } else if (description == "5.1") {
        ui->radioButton_51->setCheckable(true);
        ui->radioButton_51->setChecked(true);
    } else if (description == "5.1.2") {
        ui->radioButton_512->setCheckable(true);
        ui->radioButton_512->setChecked(true);
    } else if (description == "5.1.4") {
        ui->radioButton_514->setCheckable(true);
        ui->radioButton_514->setChecked(true);
    }

    ui->speakerNumLabel->setText("speaker: " + QString::number(speaker));
    ui->connectSuccessLabel->setStyleSheet("QLabel { "
        "min-width: 10px;"
        "max-width: 10px;"
        "max-height: 10px;"
        "min-height: 10px;"
        "background: rgb(44, 216, 164); "
        "border-radius: 5px;"
        "}");
}

void InputDialog::on_ok_clicked()
{
    if(speaker == 0)
    {
        reject();
    }
    else{
        accept();
    }
}

void InputDialog::on_cancel_clicked()
{
    reject();
}
