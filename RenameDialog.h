#ifndef RENAMEDIALOG_H
#define RENAMEDIALOG_H

#include <QDialog>

namespace Ui {
class RenameDialog;
}

class RenameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RenameDialog(QWidget *parent = nullptr);
    ~RenameDialog();

    // 设置初始项目名称
    void setInitialProjectName(const QString& projectName);

    // 获取用户输入的新项目名称
    QString getNewProjectName() const;

signals:
    // 新项目名称发生变化的信号
    void nameChanged(const QString& newName);

private slots:
    // 确定按钮点击的槽函数
    void onOkButtonClicked();

private:
    Ui::RenameDialog *ui;
};

#endif // RENAMEDIALOG_H
