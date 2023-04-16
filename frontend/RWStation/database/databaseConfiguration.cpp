#include <QString>

#include "databaseConfiguration.h"

DatabaseConfiguration::DatabaseConfiguration(
    const QString& dbDriver,
    const QString& host,
    const int port,
    const QString& dbName,
    const QString& username,
    const QString& password
) {
    this->dbDriver = dbDriver;
    this->dbName = dbName;
    this->host = host;
    this->port = port;
    this->username = username;
    this->password = password;
}
