#include <QSqlQueryModel>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>

#include "querymodel.h"

QueryModel::QueryModel(DatabaseManager* dbManager)
{
    this->dbManager = dbManager;
}

QSqlQueryModel* QueryModel::stationSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name, city, country FROM station");
    return model;
}

QSqlQueryModel* QueryModel::routeSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name, departure_station_id, arrival_station_id FROM route");
    return model;
}

QSqlQueryModel* QueryModel::trainSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price FROM train");
    return model;
}

QSqlQueryModel* QueryModel::ticketSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, seat_no, railcar_no, railcar_class FROM ticket");
    return model;
}

QSqlQueryModel* QueryModel::passengerSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, first_name, middle_name, last_name, passport_serial_no, passport_code, birth_date, ticket_id FROM passenger");
    return model;
}

QSqlQueryModel* QueryModel::scheduleSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, train_id, departure_date, arrival_date FROM schedule");
    return model;
}





QSqlQueryModel* QueryModel::stationSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name as Имя, city as Город, country Страна FROM station");
    return model;
}

QSqlQueryModel* QueryModel::routeSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT r.id, r.name AS Название, "
                    "s1.name AS \"Станция Отправления\", s2.name AS \"Станция Прибытия\" FROM route r "
                    "INNER JOIN station s1 ON s1.id = departure_station_id "
                    "INNER JOIN station s2 ON s2.id = arrival_station_id");
    return model;
}

QSqlQueryModel* QueryModel::trainSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT t.id, t.name as Название, r.name as Маршрут, t.type as \"Тип поезда\", "
                    "t.railcar_capacity as Вместимость, t.railcars_amount as \"Количество вагонов\", "
                    "t.first_class_price as \"Цена(1 класс)\", t.second_class_price as \"Цена(1 класс)\" FROM train t "
                    "INNER JOIN route r ON route_id = r.id");
    return model;
}

QSqlQueryModel* QueryModel::scheduleSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, train_id, departure_date, arrival_date FROM schedule");
    return model;
}
