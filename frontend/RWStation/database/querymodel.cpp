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
    model->setQuery("SELECT id, schedule_id, passenger_id, seat_no, railcar_no, railcar_class FROM ticket");
    return model;
}

QSqlQueryModel* QueryModel::passengerSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, first_name, middle_name, last_name, passport_serial_no, passport_code FROM passenger");
    return model;
}

QSqlQueryModel* QueryModel::scheduleSelectAllRaw() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, route_id, train_id, departure_date, arrival_date FROM schedule");
    return model;
}





QSqlQueryModel* QueryModel::stationSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, name as Имя, city as Город, country Страна FROM station ORDER BY id");
    return model;
}

QSqlQueryModel* QueryModel::routeSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT r.id, r.name AS Название, "
                    "s1.name AS \"Станция Отправления\", s2.name AS \"Станция Прибытия\" FROM route r "
                    "INNER JOIN station s1 ON s1.id = departure_station_id "
                    "INNER JOIN station s2 ON s2.id = arrival_station_id ORDER BY r.id");
    return model;
}

QSqlQueryModel* QueryModel::trainSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT t.id, t.name as Название, r.name as Маршрут, t.type as \"Тип поезда\", "
                    "t.railcar_capacity as Вместимость, t.railcars_amount as \"Количество вагонов\", "
                    "t.first_class_price as \"Цена(1 класс)\", t.second_class_price as \"Цена(1 класс)\" FROM train t "
                    "INNER JOIN route r ON route_id = r.id ORDER BY t.id");
    return model;
}

QSqlQueryModel* QueryModel::scheduleSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT s.id, r.name as Маршрут, t.name as Поезд, get_travel_time(s.id) as \"Время в пути\", "
                    "status as Статус, s.departure_date as \"Время Отправления\", s.arrival_date as \"Время Прибытия\" FROM schedule s "
                    "INNER JOIN route r ON s.route_id = r.id "
                    "INNER JOIN train t ON s.train_id = t.id ORDER BY s.id");
    return model;
}


QSqlQueryModel* QueryModel::passengerSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, CONCAT(first_name, ' ', LEFT(last_name, 1), '. ',  LEFT(middle_name, 1), '. ') as ФИО, "
                    "passport_serial_no as \"Номер серии паспорта\", passport_code as \"Номер паспорта\" FROM passenger ORDER BY id");
    return model;
}

QSqlQueryModel* QueryModel::ticketSelectAll() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT tk.id, r.name as Маршрут, t.name as Поезд, s.departure_date as \"Время Отправления\", s.arrival_date as \"Время Прибытия\", "
                    "CONCAT(p.first_name, ' ', p.last_name, ' ',  p.middle_name) as Пассажир, "
                    "tk.seat_no as \"Номер места\", tk.railcar_no as \"Номер вагона\", tk.railcar_class as \"Класс обслуживания\" FROM ticket tk "
                    "INNER JOIN schedule s ON tk.schedule_id = s.id "
                    "INNER JOIN passenger p ON tk.passenger_id = p.id "
                    "INNER JOIN route r ON s.route_id = r.id "
                    "INNER JOIN train t ON s.train_id = t.id ORDER BY tk.id");
    return model;
}



QSqlQueryModel* QueryModel::scheduleSelectAllList() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT s.id, CONCAT(r.name, ' | ', t.name, ' | ',  s.departure_date, ' -> ', s.arrival_date) FROM schedule s "
                    "INNER JOIN route r ON s.route_id = r.id "
                    "INNER JOIN train t ON s.train_id = t.id ORDER BY s.id");
    return model;
}

QSqlQueryModel* QueryModel::passengerSelectAllList() {
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id, CONCAT(first_name, ' ', LEFT(last_name, 1), '. ',  LEFT(middle_name, 1), '. | ', passport_serial_no, ' ', passport_code) "
                    "FROM passenger ORDER BY id");
    return model;
}




QSqlQueryModel* QueryModel::trainSelectAllForRoute(int routeID) {
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT id, route_id, name, type, railcar_capacity, railcars_amount, "
                  "first_class_price, second_class_price FROM train WHERE route_id = :ID");
    query.bindValue(":ID", routeID);
    if (!query.exec()) {
        qDebug() << query.lastError().text();
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* QueryModel::railcarsSelectAllNumbersForSchedule(int scheduleID) {
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT get_all_railcar_numbers(:ScheduleID)");
    query.bindValue(":ScheduleID", scheduleID);
    if (!query.exec()) {
        qDebug() << query.lastError().text();
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* QueryModel::seatsSelectAllForScheduleAndRailcar(int scheduleID, int railcarNo) {
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT get_available_seats(:ScheduleID, :RailcarNo)");
    query.bindValue(":ScheduleID", scheduleID);
    query.bindValue(":RailcarNo", railcarNo);
    if (!query.exec()) {
        qDebug() << query.lastError().text();
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* QueryModel::selectSchedulesRevenue() {
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT * FROM get_schedule_revenue()");
    if (!query.exec()) {
        qDebug() << query.lastError().text();
    }
    model->setQuery(query);
    return model;
}


QSqlQueryModel* QueryModel::selectScheduleTicketsAmount(int percentage) {
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT * FROM get_sch_tickets_amount(:Percentage)");
    query.bindValue(":Percentage", percentage);
    if (!query.exec()) {
        qDebug() << query.lastError().text();
    }
    model->setQuery(query);
    return model;
}

