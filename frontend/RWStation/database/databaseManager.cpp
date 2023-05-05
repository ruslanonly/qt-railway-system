#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>

#include "databaseManager.h"
#include "databaseConfiguration.h"

DatabaseManager::DatabaseManager(DatabaseConfiguration config){}

DatabaseManager::~DatabaseManager() {
    this->db.close();
}

bool DatabaseManager::openConnection(QString username, QString password) {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort(5436);
    db.setDatabaseName("railway");
    //db.setUserName("rw_user");
    //db.setPassword("rw_pwd");

    db.setUserName(username);
    db.setPassword(password);

    bool connected = db.open();
    if (!connected) {
        qWarning() << db.lastError().text();
        return connected;
    }

    this->db = db;
    return connected;
}

void DatabaseManager::closeConnection() {
    this->db.close();
}

QSqlDatabase* DatabaseManager::database() {
    return &this->db;
}
