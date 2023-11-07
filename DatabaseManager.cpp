#include "DatabaseManager.h"

DatabaseManager::DatabaseManager()
{
}

DatabaseManager::~DatabaseManager()
{
    if (m_database.isOpen()) {
        m_database.close();
    }
}

DatabaseManager& DatabaseManager::getInstance()
{
    static DatabaseManager instance;
    return instance;
}

bool DatabaseManager::initialize()
{
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("../db/database.db");

    if (!m_database.open()) {
        qDebug() << "Failed to open the database";
        return false;
    }

    return true;
}

bool DatabaseManager::createTables()
{
    if (!createUsersTable()) {
        return false;
    }

    if (!createProjectsTable()) {
        return false;
    }

    if (!createLoudspeakersTable()) {
        return false;
    }

    return true;
}

bool DatabaseManager::createUsersTable()
{
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS Users ("
               "UserID INTEGER PRIMARY KEY AUTOINCREMENT, "
               "Username TEXT, Password TEXT, ProjectCount INTEGER DEFAULT 0)");

    if (query.lastError().isValid()) {
        qDebug() << "Failed to create Users table:" << query.lastError().text();
        return false;
    }

    return true;
}

bool DatabaseManager::createProjectsTable()
{
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS Projects ("
               "ProjectID INTEGER PRIMARY KEY AUTOINCREMENT, "
               "UserID INTEGER, "
               "ProjectName TEXT, "
               "LoudspeakerCount INTEGER, "
               "LoudspeakerDescription TEXT, "
               "ModeCount INTEGER, "
               "UpdateTime DATETIME, "
               "FOREIGN KEY(UserID) REFERENCES Users(UserID))");

    if (query.lastError().isValid()) {
        qDebug() << "Failed to create Projects table:" << query.lastError().text();
        return false;
    }

    return true;
}

bool DatabaseManager::createLoudspeakersTable()
{
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS Loudspeakers ("
               "LoudspeakerID INTEGER PRIMARY KEY AUTOINCREMENT, "
               "ProjectID INTEGER, "
               "LoudspeakerName TEXT, "
               "Distance REAL, "
               "Pitch REAL, "
               "Yaw REAL, "
               "AttitudePitch REAL, "
               "AttitudeYaw REAL, "
               "ColumnCount ARRAY, "
               "Volume REAL, "
               "Ball1X REAL, Ball1Y REAL, Ball1Q REAL, "
               "Ball2X REAL, Ball2Y REAL, Ball2Q REAL, "
               "Ball3X REAL, Ball3Y REAL, Ball3Q REAL, "
               "Ball4X REAL, Ball4Y REAL, Ball4Q REAL, "
               "Ball5X REAL, Ball5Y REAL, Ball5Q REAL, "
               "Ball6X REAL, Ball6Y REAL, Ball6Q REAL, "
               "CrossoverRowCount INTEGER, "
               "ModeNames ARRAY, "
               "Delay REAL, "
               "FOREIGN KEY(ProjectID) REFERENCES Projects(ProjectID))");

    if (query.lastError().isValid()) {
        qDebug() << "Failed to create Loudspeakers table:" << query.lastError().text();
        return false;
    }

    return true;
}

bool DatabaseManager::addUser(const QString& username, const QString& password, int projectCount)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Users (Username, Password, ProjectCount) VALUES (:username, :password, :projectCount)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":projectCount", projectCount);
    if (!query.exec()) {
        qDebug() << "Failed to add user:" << query.lastError().text();
        return false;
    }

    return true;
}

int DatabaseManager::findUser(const QString& username)
{
    QSqlQuery query;
    query.prepare("SELECT UserID FROM Users WHERE Username = :username");
    query.bindValue(":username", username);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find user:" << query.lastError().text();
        return -1;
    }

    return query.value(0).toInt();
}

bool DatabaseManager::authenticateUser(const QString& username, const QString& password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Users WHERE Username = :username AND Password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        return false;
    }

    return query.next();
}

bool DatabaseManager::updateUser(const QString& username, const QString& newPassword)
{
    QSqlQuery query;
    query.prepare("UPDATE Users SET Password = :newPassword WHERE Username = :username");
    query.bindValue(":newPassword", newPassword);
    query.bindValue(":username", username);
    if (!query.exec()) {
        qDebug() << "Failed to update user:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::deleteUser(const QString& username)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Users WHERE Username = :username");
    query.bindValue(":username", username);
    if (!query.exec()) {
        qDebug() << "Failed to delete user:" << query.lastError().text();
        return false;
    }
    return true;
}

int DatabaseManager::getProjectCount(int userID)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Projects WHERE UserID = :userID");
    query.bindValue(":userID", userID);
    if (!query.exec()) {
        qDebug() << "Failed to get project count:" << query.lastError().text();
        return -1; // 返回错误值
    }
    if (query.next()) {
        return query.value(0).toInt(); // 返回项目数量
    }
    return 0; // 默认返回0
}

int DatabaseManager::addProject(int userID, const QString& projectName, int loudspeakerCount,
                                 const QString& loudspeakerDescription, int modeCount, const QString& updateTime)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Projects (UserID, ProjectName, LoudspeakerCount, LoudspeakerDescription, "
                  "ModeCount, UpdateTime) VALUES (:userID, :projectName, :loudspeakerCount, :loudspeakerDescription, "
                  ":modeCount, :updateTime)");
    query.bindValue(":userID", userID);
    query.bindValue(":projectName", projectName);
    query.bindValue(":loudspeakerCount", loudspeakerCount);
    query.bindValue(":loudspeakerDescription", loudspeakerDescription);
    query.bindValue(":modeCount", modeCount);
    query.bindValue(":updateTime", updateTime);
    if (!query.exec()) {
        qDebug() << "Failed to add project:" << query.lastError().text();
        return false;
    }
    return query.lastInsertId().toInt();
}

int DatabaseManager::findProject(const QString& projectName)
{
    QSqlQuery query;
    query.prepare("SELECT ProjectID FROM Projects WHERE ProjectName = :projectName");
    query.bindValue(":projectName", projectName);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find project:" << query.lastError().text();
        return false;
    }
    return query.value(0).toInt();
}

QList<QString> DatabaseManager::findProjects(int userID)
{
    QList<QString> projects;

    QSqlQuery query;
    query.prepare("SELECT ProjectName FROM Projects WHERE UserID = :userID");
    query.bindValue(":userID", userID);
    if (!query.exec()) {
        qDebug() << "Failed to find projects:" << query.lastError().text();
        return projects;
    }

    while (query.next()) {
        QString projectName = query.value(0).toString();
        projects.append(projectName);
    }

    return projects;
}

int DatabaseManager::findSpeakerCount(const QString& projectName)
{
    QSqlQuery query;
    query.prepare("SELECT LoudspeakerCount FROM Projects WHERE ProjectName = :projectName");
    query.bindValue(":projectName", projectName);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find speaker count:" << query.lastError().text();
        return -1; // 返回一个合适的错误码或默认值
    }
    return query.value(0).toInt();
}

QString DatabaseManager::findSpeakerDescription(const QString& projectName)
{
    QSqlQuery query;
    query.prepare("SELECT LoudspeakerDescription FROM Projects WHERE ProjectName = :projectName");
    query.bindValue(":projectName", projectName);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find speaker description:" << query.lastError().text();
        return QString(); // 返回一个合适的错误值或默认值
    }
    return query.value(0).toString();
}

int DatabaseManager::findModeCount(const QString& projectName)
{
    QSqlQuery query;
    query.prepare("SELECT ModeCount FROM Projects WHERE ProjectName = :projectName");
    query.bindValue(":projectName", projectName);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find mode count:" << query.lastError().text();
        return -1; // 返回一个合适的错误码或默认值
    }
    return query.value(0).toInt();
}

bool DatabaseManager::updateProject(int projectID, const QString& projectName, int loudspeakerCount,
                                    const QString& loudspeakerDescription, int modeCount, const QString& updateTime)
{
    QSqlQuery query;
    query.prepare("UPDATE Projects SET ProjectName = :projectName, LoudspeakerCount = :loudspeakerCount, "
                  "LoudspeakerDescription = :loudspeakerDescription, ModeCount = :modeCount, "
                  "UpdateTime = :updateTime WHERE ProjectID = :projectID");
    query.bindValue(":projectName", projectName);
    query.bindValue(":loudspeakerCount", loudspeakerCount);
    query.bindValue(":loudspeakerDescription", loudspeakerDescription);
    query.bindValue(":modeCount", modeCount);
    query.bindValue(":updateTime", updateTime);
    query.bindValue(":projectID", projectID);
    if (!query.exec()) {
        qDebug() << "Failed to update project:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::deleteProject(int projectID)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Projects WHERE ProjectID = :projectID");
    query.bindValue(":projectID", projectID);
    if (!query.exec()) {
        qDebug() << "Failed to delete project:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::addLoudspeaker(int projectID, const QString& loudspeakerName, double distance, double pitch,
                                     double yaw, double attitudePitch, double attitudeYaw,
                                     const QStringList& columnCount, double volume,
                                     const QList<QVariantMap>& balls, int crossoverRowCount,
                                     const QStringList& modeNames, double delay)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Loudspeakers (ProjectID, LoudspeakerName, Distance, Pitch, Yaw, "
                  "AttitudePitch, AttitudeYaw, ColumnCount, Volume, "
                  "Ball1X, Ball1Y, Ball1Q, "
                  "Ball2X, Ball2Y, Ball2Q, "
                  "Ball3X, Ball3Y, Ball3Q, "
                  "Ball4X, Ball4Y, Ball4Q, "
                  "Ball5X, Ball5Y, Ball5Q, "
                  "Ball6X, Ball6Y, Ball6Q, "
                  "CrossoverRowCount, ModeNames, Delay) "
                  "VALUES (:projectID, :loudspeakerName, :distance, :pitch, :yaw, "
                  ":attitudePitch, :attitudeYaw, :columnCount, :volume, "
                  ":ball1X, :ball1Y, :ball1Q, "
                  ":ball2X, :ball2Y, :ball2Q, "
                  ":ball3X, :ball3Y, :ball3Q, "
                  ":ball4X, :ball4Y, :ball4Q, "
                  ":ball5X, :ball5Y, :ball5Q, "
                  ":ball6X, :ball6Y, :ball6Q, "
                  ":crossoverRowCount, :modeNames, :delay)");
    
    query.bindValue(":projectID", projectID);
    query.bindValue(":loudspeakerName", loudspeakerName);
    query.bindValue(":distance", distance);
    query.bindValue(":pitch", pitch);
    query.bindValue(":yaw", yaw);
    query.bindValue(":attitudePitch", attitudePitch);
    query.bindValue(":attitudeYaw", attitudeYaw);
    query.bindValue(":columnCount", columnCount);
    query.bindValue(":volume", volume);

    qDebug() << "断点检查  2" << balls[0]["x"];

    query.bindValue(":ball1X", balls[0]["x"]);
    query.bindValue(":ball1Y", balls[0]["y"]);
    query.bindValue(":ball1Q", balls[0]["q"]);
    query.bindValue(":ball2X", balls[1]["x"]);
    query.bindValue(":ball2Y", balls[1]["y"]);
    query.bindValue(":ball2Q", balls[1]["q"]);
    query.bindValue(":ball3X", balls[2]["x"]);
    query.bindValue(":ball3Y", balls[2]["y"]);
    query.bindValue(":ball3Q", balls[2]["q"]);
    query.bindValue(":ball4X", balls[3]["x"]);
    query.bindValue(":ball4Y", balls[3]["y"]);
    query.bindValue(":ball4Q", balls[3]["q"]);
    query.bindValue(":ball5X", balls[4]["x"]);
    query.bindValue(":ball5Y", balls[4]["y"]);
    query.bindValue(":ball5Q", balls[4]["q"]);
    query.bindValue(":ball6X", balls[5]["x"]);
    query.bindValue(":ball6Y", balls[5]["y"]);
    query.bindValue(":ball6Q", balls[5]["q"]);

    qDebug() << "断点检查  3";

    query.bindValue(":crossoverRowCount", crossoverRowCount);
    query.bindValue(":modeNames", modeNames);
    query.bindValue(":delay", delay);

    qDebug() << "断点检查  4";

    if (!query.exec()) {
        qDebug() << "Failed to add loudspeaker:" << query.lastError().text();
        return false;
    }
    return true;
}

int DatabaseManager::findLoudspeaker(const QString& loudspeakerName)
{
    QSqlQuery query;
    query.prepare("SELECT LoudspeakerID FROM Loudspeakers WHERE LoudspeakerName = :loudspeakerName");
    query.bindValue(":loudspeakerName", loudspeakerName);
    if (!query.exec() || !query.next()) {
        qDebug() << "Failed to find loudspeaker:" << query.lastError().text();
        return -1; // 返回一个表示失败的值，例如 -1
    }
    return query.value(0).toInt();
}

QVector<LoudspeakerData> DatabaseManager::findLoudspeakers(int projectID)
{
    QVector<LoudspeakerData> loudspeakers;

    QSqlQuery query;
    query.prepare("SELECT LoudspeakerName, Distance, Pitch, Yaw, AttitudePitch, AttitudeYaw, "
                  "ColumnCount, Volume, "
                  "Ball1X, Ball1Y, Ball1Q, "
                  "Ball2X, Ball2Y, Ball2Q, "
                  "Ball3X, Ball3Y, Ball3Q, "
                  "Ball4X, Ball4Y, Ball4Q, "
                  "Ball5X, Ball5Y, Ball5Q, "
                  "Ball6X, Ball6Y, Ball6Q, "
                  "CrossoverRowCount, ModeNames, Delay "
                  "FROM Loudspeakers "
                  "WHERE ProjectID = :projectID");
    query.bindValue(":projectID", projectID);
    if (!query.exec()) {
        qDebug() << "Failed to find loudspeakers:" << query.lastError().text();
        return loudspeakers;
    }

    while (query.next()) {
        LoudspeakerData loudspeaker;

        loudspeaker.name = query.value(0).toString();
        loudspeaker.distance = query.value(1).toDouble();
        loudspeaker.pitch = query.value(2).toDouble();
        loudspeaker.yaw = query.value(3).toDouble();
        loudspeaker.attitudePitch = query.value(4).toDouble();
        loudspeaker.attitudeYaw = query.value(5).toDouble();

        QStringList columnCountStrList = query.value(6).toString().split(',');
        for (const QString& columnCountStr : columnCountStrList) {
            loudspeaker.columnCount.append(columnCountStr.toInt());
        }

        loudspeaker.volume = query.value(7).toDouble();

        for (int i = 0; i < 6; ++i) {
            LoudspeakerData::BallData ball;
            ball.x = query.value(8 + i * 3).toDouble();
            ball.y = query.value(9 + i * 3).toDouble();
            ball.q = query.value(10 + i * 3).toDouble();
            loudspeaker.balls.append(ball);
        }

        loudspeaker.crossoverRowCount = query.value(24).toInt();

        QStringList modeNamesStrList = query.value(25).toString().split(',');
        for (const QString& modeName : modeNamesStrList) {
            loudspeaker.modeNames.append(modeName);
        }

        loudspeaker.delay = query.value(26).toDouble();

        loudspeakers.append(loudspeaker);
    }

    return loudspeakers;
}

bool DatabaseManager::updateLoudspeaker(int loudspeakerID, const QString& loudspeakerName, double distance,
                                        double pitch, double yaw, double attitudePitch, double attitudeYaw,
                                        const QStringList& columnCount, double volume,
                                        const QList<QVariantMap>& balls, int crossoverRowCount,
                                        const QStringList& modeNames, double delay)
{
    QSqlQuery query;
    query.prepare("UPDATE Loudspeakers SET LoudspeakerName = :loudspeakerName, Distance = :distance, "
                  "Pitch = :pitch, Yaw = :yaw, AttitudePitch = :attitudePitch, AttitudeYaw = :attitudeYaw, "
                  "ColumnCount = :columnCount, Volume = :volume, "
                  "Ball1X = :ball1X, Ball1Y = :ball1Y, Ball1Q = :ball1Q, "
                  "Ball2X = :ball2X, Ball2Y = :ball2Y, Ball2Q = :ball2Q, "
                  "Ball3X = :ball3X, Ball3Y = :ball3Y, Ball3Q = :ball3Q, "
                  "Ball4X = :ball4X, Ball4Y = :ball4Y, Ball4Q = :ball4Q, "
                  "Ball5X = :ball5X, Ball5Y = :ball5Y, Ball5Q = :ball5Q, "
                  "Ball6X = :ball6X, Ball6Y = :ball6Y, Ball6Q = :ball6Q, "
                  "CrossoverRowCount = :crossoverRowCount, ModeNames = :modeNames, Delay = :delay "
                  "WHERE LoudspeakerID = :loudspeakerID");
    query.bindValue(":loudspeakerName", loudspeakerName);
    query.bindValue(":distance", distance);
    query.bindValue(":pitch", pitch);
    query.bindValue(":yaw", yaw);
    query.bindValue(":attitudePitch", attitudePitch);
    query.bindValue(":attitudeYaw", attitudeYaw);
    query.bindValue(":columnCount", columnCount);
    query.bindValue(":volume", volume);
    query.bindValue(":ball1X", balls[0]["x"]);
    query.bindValue(":ball1Y", balls[0]["y"]);
    query.bindValue(":ball1Q", balls[0]["q"]);
    query.bindValue(":ball2X", balls[1]["x"]);
    query.bindValue(":ball2Y", balls[1]["y"]);
    query.bindValue(":ball2Q", balls[1]["q"]);
    query.bindValue(":ball3X", balls[2]["x"]);
    query.bindValue(":ball3Y", balls[2]["y"]);
    query.bindValue(":ball3Q", balls[2]["q"]);
    query.bindValue(":ball4X", balls[3]["x"]);
    query.bindValue(":ball4Y", balls[3]["y"]);
    query.bindValue(":ball4Q", balls[3]["q"]);
    query.bindValue(":ball5X", balls[4]["x"]);
    query.bindValue(":ball5Y", balls[4]["y"]);
    query.bindValue(":ball5Q", balls[4]["q"]);
    query.bindValue(":ball6X", balls[5]["x"]);
    query.bindValue(":ball6Y", balls[5]["y"]);
    query.bindValue(":ball6Q", balls[5]["q"]);
    query.bindValue(":crossoverRowCount", crossoverRowCount);
    query.bindValue(":modeNames", modeNames);
    query.bindValue(":delay", delay);
    query.bindValue(":loudspeakerID", loudspeakerID);
    if (!query.exec()) {
        qDebug() << "Failed to update loudspeaker:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::deleteLoudspeaker(int loudspeakerID)
{
    QSqlQuery query;
    query.prepare("DELETE FROM Loudspeakers WHERE LoudspeakerID = :loudspeakerID");
    query.bindValue(":loudspeakerID", loudspeakerID);
    if (!query.exec()) {
        qDebug() << "Failed to delete loudspeaker:" << query.lastError().text();
        return false;
    }
    return true;
}