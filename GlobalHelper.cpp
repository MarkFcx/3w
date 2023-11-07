#include "GlobalHelper.h"
#include "DatabaseManager.h"

GlobalHelper::GlobalHelper()
    : currentUserID(-1)
{
}

GlobalHelper::~GlobalHelper()
{
}

GlobalHelper& GlobalHelper::getInstance()
{
    static GlobalHelper instance;
    return instance;
}

bool GlobalHelper::getIsDevelopmentTesting() const
{
    return isDevelopmentTesting;
}

void GlobalHelper::setIsDevelopmentTesting(bool value)
{
    isDevelopmentTesting = value;
}

void GlobalHelper::setCurrentUsername(const QString& username)
{
    currentUsername = username;
    currentUserID = DatabaseManager::getInstance().findUser(username);
    currentUserProjectCount = DatabaseManager::getInstance().getProjectCount(currentUserID);
}

QString GlobalHelper::getCurrentUsername() const
{
    return currentUsername;
}

int GlobalHelper::getCurrentUserID() const
{
    return currentUserID;
}

int GlobalHelper::getProjectCount()
{
    currentUserProjectCount = DatabaseManager::getInstance().getProjectCount(currentUserID);
    return currentUserProjectCount;
}

void GlobalHelper::setCurrentProject(const QString& projectName)
{
    currentProjectName = projectName;
    currentProjectID = DatabaseManager::getInstance().findProject(projectName);
    m_speakerCount = DatabaseManager::getInstance().findSpeakerCount(projectName);
    m_speakerDescription = DatabaseManager::getInstance().findSpeakerDescription(projectName);
    m_modeCount = DatabaseManager::getInstance().findModeCount(projectName);
}

QString GlobalHelper::getCurrentProjectName() const
{
    return currentProjectName;
}

int GlobalHelper::getCurrentProjectID() const
{
    return currentProjectID;
}

void GlobalHelper::setSpeakerCount(const int count)
{
    m_speakerCount = count;
}

int GlobalHelper::getSpeakerCount() const
{
    return m_speakerCount;
}

void GlobalHelper::setSpeakerDescription(const QString &description)
{
    m_speakerDescription = description;
}

QString GlobalHelper::getSpeakerDescription() const
{
    return m_speakerDescription;
}

int GlobalHelper::getModeCount() const
{
    return m_modeCount;
}

// *******************************

bool GlobalHelper::projectExists(const QString& projectName) const
{
    // 查询当前用户的项目是否存在
    int userID = getCurrentUserID();

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) AS ProjectCount FROM Projects WHERE UserID = :userID AND ProjectName = :projectName");
    query.bindValue(":userID", userID);
    query.bindValue(":projectName", projectName);
    query.exec();

    if (query.next()) {
        int projectCount = query.value("ProjectCount").toInt();
        return projectCount > 0;
    } 

    return false;
}

void GlobalHelper::createLoudspeakers(const QString& projectName)
{
    // 查询项目ID
    QSqlQuery projectQuery;
    projectQuery.prepare("SELECT ProjectID FROM Projects WHERE ProjectName = :projectName");
    projectQuery.bindValue(":projectName", projectName);
    projectQuery.exec();

    if (projectQuery.next()) {
        int projectID = projectQuery.value("ProjectID").toInt();

        // 插入扬声器数据，根据m_speakerCount循环插入
        QSqlQuery loudspeakerQuery;
        loudspeakerQuery.prepare("INSERT INTO Loudspeakers (ProjectID, LoudspeakerName, Pitch, Yaw, AttitudePitch, AttitudeYaw) "
                                 "VALUES (:projectID, :loudspeakerName, '', '', '', '')");
        loudspeakerQuery.bindValue(":projectID", projectID);

        for (int i = 0; i < m_speakerCount; i++) {
            QString loudspeakerName = QString::number(i);
            loudspeakerQuery.bindValue(":loudspeakerName", loudspeakerName);

            if (loudspeakerQuery.exec()) {
                qDebug() << "扬声器数据已成功插入数据库";
            } else {
                qDebug() << "插入扬声器数据失败";
            }
        }
    } else {
        qDebug() << "找不到对应的项目ID";
    }
}

void GlobalHelper::setLoudspeaker(const QString& loudspeakerName, double pitch, double yaw, double attitudePitch, double attitudeYaw)
{

    int projectID = getCurrentUserID();

    // 更新扬声器数据
    QSqlQuery loudspeakerQuery;
    loudspeakerQuery.prepare("UPDATE Loudspeakers SET Pitch = :pitch, Yaw = :yaw, AttitudePitch = :attitudePitch, AttitudeYaw = :attitudeYaw "
                                "WHERE ProjectID = :projectID AND LoudspeakerName = :loudspeakerName");
    loudspeakerQuery.bindValue(":pitch", pitch);
    loudspeakerQuery.bindValue(":yaw", yaw);
    loudspeakerQuery.bindValue(":attitudePitch", attitudePitch);
    loudspeakerQuery.bindValue(":attitudeYaw", attitudeYaw);
    loudspeakerQuery.bindValue(":projectID", projectID);
    loudspeakerQuery.bindValue(":loudspeakerName", loudspeakerName);

    if (loudspeakerQuery.exec()) {
        qDebug() << "扬声器数据已成功更新";
    } else {
        qDebug() << "更新扬声器数据失败";
    }
    
}

QVector<LoudspeakerData> GlobalHelper::getLoudspeakersByProject(const QString& projectName) const
{
    QVector<LoudspeakerData> loudspeakers;

    int projectID = getCurrentProjectID();

    loudspeakers = DatabaseManager::getInstance().findLoudspeakers(projectID);

    return loudspeakers;

}

