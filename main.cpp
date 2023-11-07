#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    // 隐藏标题栏
    mainWindow.setWindowFlags(Qt::FramelessWindowHint);
    mainWindow.show();
    return app.exec();
}
