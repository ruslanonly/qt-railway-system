#include <QSqlQueryModel>

#include "database/databaseManager.h"

#ifndef QUERYMODEL_H
#define QUERYMODEL_H




class QueryModel
{
public:
    QueryModel(DatabaseManager* dbManager);
    QSqlQueryModel* stationSelectAll();
    QSqlQueryModel* routeSelectAll();
    QSqlQueryModel* trainSelectAll();
    QSqlQueryModel* ticketSelectAll();
    QSqlQueryModel* passengerSelectAll();

    QSqlQuery* stationSelectOne(int stationID);

private:
    DatabaseManager* dbManager;
};

#endif // QUERYMODEL_H
