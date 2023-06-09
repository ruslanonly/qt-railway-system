
#ifndef DATABASECONFIGURATION_H
#define DATABASECONFIGURATION_H

class DatabaseConfiguration {
public:
    DatabaseConfiguration(
        const QString& dbDriver,
        const QString& host,
        const int port,
        const QString& dbName,
        const QString& username,
        const QString& password
    );
    QString dbDriver;
    QString host;
    int port;
    QString dbName;
    QString username;
    QString password;
};

#endif // DATABASECONFIGURATION_H
