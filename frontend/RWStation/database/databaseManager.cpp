#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>

#include "databaseManager.h"
#include "databaseConfiguration.h"

DatabaseManager::DatabaseManager()
{

}

DatabaseManager::~DatabaseManager() {
    this->db.close();
}

bool DatabaseManager::openConnection() {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort(5436);
    db.setDatabaseName("railway");
    db.setUserName("rw_user");
    db.setPassword("rw_pwd");

    bool connected = db.open();
    if (!connected) {
        qWarning() << db.lastError().text();
        return connected;
    }

    this->db = db;
    return connected;
}

QSqlDatabase* DatabaseManager::database() {
    return &this->db;
}
