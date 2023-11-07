#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include <QSqlError>
#include "widgets/data.h"

class DatabaseManager
{
public:
    static DatabaseManager& getInstance();
    ~DatabaseManager();

    bool initialize();
    // void closeDatabase();

    bool createTables();
    bool createUsersTable();
    bool createProjectsTable();
    bool createLoudspeakersTable();

    bool addUser(const QString& username, const QString& password, int projectCount);
    bool updateUser(const QString& username, const QString& newPassword);
    int findUser(const QString& username);
    bool authenticateUser(const QString& username, const QString& password);
    bool deleteUser(const QString& username);

    int getProjectCount(int userID);

    int addProject(int userID, const QString& projectName, int loudspeakerCount, const QString& loudspeakerDescription,
                    int modeCount, const QString& updateTime);
    int findProject(const QString& projectName);
    QList<QString> findProjects(int userID);
    int findSpeakerCount(const QString& projectName);
    QString findSpeakerDescription(const QString& projectName);
    int findModeCount(const QString& projectName);
    bool updateProject(int projectID, const QString& projectName, int loudspeakerCount, const QString& loudspeakerDescription,
                       int modeCount, const QString& updateTime);

    bool deleteProject(int projectID);

    bool addLoudspeaker(int projectID, const QString& loudspeakerName, double distance, double pitch, double yaw,
                        double attitudePitch, double attitudeYaw, const QStringList& columnCount,
                        double volume, const QList<QVariantMap>& balls, int crossoverRowCount,
                        const QStringList& modeNames, double delay);
    int findLoudspeaker(const QString& loudspeakerName);
    QVector<LoudspeakerData> findLoudspeakers(int projectID);
    bool updateLoudspeaker(int loudspeakerID, const QString& loudspeakerName, double distance, double pitch, double yaw,
                           double attitudePitch, double attitudeYaw, const QStringList& columnCount,
                           double volume, const QList<QVariantMap>& balls, int crossoverRowCount,
                           const QStringList& modeNames, double delay);
    bool deleteLoudspeaker(int loudspeakerID);

private:
    DatabaseManager();

    QSqlDatabase m_database;
};

#endif // DATABASEMANAGER_H
