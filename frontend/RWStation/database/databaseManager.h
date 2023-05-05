#include <QSqlDatabase>
#include <string>

#include "database/databaseConfiguration.h"

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

class DatabaseManager
{
private:
    QSqlDatabase db;
public:
    DatabaseManager(DatabaseConfiguration config);
    ~DatabaseManager();
    bool openConnection(QString username, QString password);
    void closeConnection();
    QSqlDatabase* database();
};

#endif // DATABASEMANAGER_H
