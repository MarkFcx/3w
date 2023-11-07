#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>

class DatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager();

    bool initialize();
    bool addUser(const QString& username, const QString& password);
    bool addProject(const QString& username, const QString& projectName);
    // Add more methods for database operations as needed

private:
    bool createTables();
    bool executeQuery(const QString& query);
    int getUserId(const QString& username);

private:
    QSqlDatabase m_database;
};

#endif // DATABASEMANAGER_H