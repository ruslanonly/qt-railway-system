#include <QSqlQueryModel>

#include "database/databaseManager.h"

#ifndef QUERYMODEL_H
#define QUERYMODEL_H




class QueryModel
{
public:
    QueryModel(DatabaseManager* dbManager);
    QSqlQueryModel* stationSelectAllRaw();
    QSqlQueryModel* routeSelectAllRaw();
    QSqlQueryModel* trainSelectAllRaw();
    QSqlQueryModel* ticketSelectAllRaw();
    QSqlQueryModel* passengerSelectAllRaw();
    QSqlQueryModel* scheduleSelectAllRaw();

    QSqlQueryModel* stationSelectAll();
    QSqlQueryModel* routeSelectAll();
    QSqlQueryModel* trainSelectAll();
    QSqlQueryModel* scheduleSelectAll();
    QSqlQueryModel* passengerSelectAll();
    QSqlQueryModel* ticketSelectAll();

    QSqlQueryModel* scheduleSelectAllList();
    QSqlQueryModel* passengerSelectAllList();

    QSqlQueryModel* trainSelectAllForRoute(int routeID);
    QSqlQueryModel* seatsSelectAllForScheduleAndRailcar(int scheduleID, int railcarNo);
    QSqlQueryModel* railcarsSelectAllNumbersForSchedule(int scheduleID);

private:
    DatabaseManager* dbManager;
};

#endif // QUERYMODEL_H
