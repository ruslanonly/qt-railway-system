#include <QSqlQueryModel>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>

#include "querymodel.h"

QueryModel::QueryModel(DatabaseManager* dbManager)
{
    this->dbManager = dbManager;
}

QSqlQueryModel* QueryModel::stationSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name, city, country FROM station");
    return model;
}

QSqlQueryModel* QueryModel::routeSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name, departure_station_id, arrival_station_id, departure_date, arrival_date FROM route");
    return model;
}

QSqlQueryModel* QueryModel::trainSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price FROM train");
    return model;
}

QSqlQueryModel* QueryModel::ticketSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, seat_no, railcar_no, railcar_class FROM ticket");
    return model;
}

QSqlQueryModel* QueryModel::passengerSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, first_name, middle_name, last_name, passport_serial_no, passport_code, birth_date, ticket_id FROM passenger");
    return model;
}
