#include <QSqlDatabase>
#include <string>

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

class DatabaseManager
{
private:
    QSqlDatabase db;
public:
    DatabaseManager();
    ~DatabaseManager();
    bool openConnection();
    QSqlDatabase* database();
};

#endif // DATABASEMANAGER_H
