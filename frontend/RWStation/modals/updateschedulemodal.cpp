#include "updateschedulemodal.h"
#include "ui_updateschedulemodal.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>
#include "utils.h"

UpdateScheduleModal::UpdateScheduleModal(int scheduleID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateScheduleModal)
{
    ui->setupUi(this);
    this->scheduleID = scheduleID;

    QSqlQueryModel* routeModel = queryModel->routeSelectAllRaw();
    this->ui->routeComboBox->setModel(routeModel);
    this->ui->routeComboBox->setModelColumn(1);

    fillData();
}

UpdateScheduleModal::~UpdateScheduleModal()
{
    delete ui;
}

void UpdateScheduleModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, route_id, train_id, departure_date, arrival_date FROM schedule WHERE id = :ID");
    query.bindValue(":ID", this->scheduleID);
    if (query.exec()) {
        query.next();
        int routeID = query.value(1).toInt();
        int trainID = query.value(2).toInt();
        ui->depDateInput->setDateTime(QDateTime::fromString(query.value(3).toString(), Qt::ISODate));
        ui->arrDateInput->setDateTime(QDateTime::fromString(query.value(4).toString(), Qt::ISODate));


        QComboBox* routeBox = ui->routeComboBox;
        for (int i = 0; i < routeBox->count(); i++) {
            int rowID = routeBox->model()->data(routeBox->model()->index(i,0)).toInt();
            if (rowID == routeID) {
                routeBox->setCurrentIndex(i);
                break;
            }
        }

        QComboBox* trainBox = ui->trainComboBox;
        for (int i = 0; i < trainBox->count(); i++) {
            int rowID = trainBox->model()->data(trainBox->model()->index(i,0)).toInt();
            if (rowID == trainID) {
                trainBox->setCurrentIndex(i);
                break;
            }
        }
    }
}

void UpdateScheduleModal::on_addButton_clicked()
{
    QAbstractItemModel* routeModel = this->ui->routeComboBox->model();
    QAbstractItemModel* trainModel = this->ui->trainComboBox->model();

    QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);

    int routeID = routeModel->data(routeModel->index(ui->routeComboBox->currentIndex(),0)).toInt();
    int trainID = trainModel->data(trainModel->index(ui->trainComboBox->currentIndex(),0)).toInt();

    QSqlQuery query;
    query.prepare("SELECT update_schedule(:ID, :RouteID, :TrainID, :DepartureDate, :ArrivalDate)");
    query.bindValue(":ID", this->scheduleID);
    query.bindValue(":RouteID", routeID);
    query.bindValue(":TrainID", trainID);
    query.bindValue(":DepartureDate", departureDateTime);
    query.bindValue(":ArrivalDate", arrivalDateTime);

    if (query.exec())
    {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось изменить данные");
        msg.setInformativeText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}


void UpdateScheduleModal::on_routeComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* routeModel = this->ui->routeComboBox->model();
    int routeID = routeModel->data(routeModel->index(index,0)).toInt();
    qDebug() << routeID;
    delete ui->trainComboBox->model();
    this->trainModel = queryModel->trainSelectAllForRoute(routeID);
    this->ui->trainComboBox->setModel(trainModel);
    this->ui->trainComboBox->setModelColumn(2);
}

