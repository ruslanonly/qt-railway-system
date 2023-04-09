#include <QString>

#include "databaseConfiguration.h"

DatabaseConfiguration::DatabaseConfiguration(const QString& host, const int port, const QString& dbName, const QString& username, const QString& password) {
    this->dbName = dbName;
    this->host = host;
    this->port = port;
    this->username = username;
    this->password = password;
}
