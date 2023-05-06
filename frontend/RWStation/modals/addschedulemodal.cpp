#include "addschedulemodal.h"
#include "ui_addschedulemodal.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

#include "utils.h"

AddScheduleModal::AddScheduleModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddScheduleModal)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);

    QSqlQueryModel* routeModel = queryModel->routeSelectAllRaw();
    this->ui->routeComboBox->setModel(routeModel);
    this->ui->routeComboBox->setModelColumn(1);
}

AddScheduleModal::~AddScheduleModal()
{
    delete ui;
}

void AddScheduleModal::on_addButton_clicked()
{
    QAbstractItemModel* routeModel = this->ui->routeComboBox->model();
    QAbstractItemModel* trainModel = this->ui->trainComboBox->model();

    QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);
    int routeID = routeModel->data(routeModel->index(ui->routeComboBox->currentIndex(),0)).toInt();
    int trainID = trainModel->data(trainModel->index(ui->trainComboBox->currentIndex(),0)).toInt();

    QSqlQuery query;
    QString preparedQueryString = QString("CALL add_schedule_transaction(%1, %2, %3, %4)")
                                      .arg(routeID)
                                      .arg(trainID)
                                      .arg(departureDateTime)
                                      .arg(arrivalDateTime);
//    query.prepare("SELECT add_schedule(:RouteID, :TrainID, :DepartureDate, :ArrivalDate)");
//    query.bindValue(":RouteID", routeID);
//    query.bindValue(":TrainID", trainID);
//    query.bindValue(":DepartureDate", departureDateTime);
//    query.bindValue(":ArrivalDate", arrivalDateTime);

    if (query.exec(preparedQueryString)) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось добавить рейс");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}


void AddScheduleModal::on_routeComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* routeModel = this->ui->routeComboBox->model();
    int routeID = routeModel->data(routeModel->index(index,0)).toInt();
    qDebug() << routeID;
    delete ui->trainComboBox->model();
    this->trainModel = queryModel->trainSelectAllForRoute(routeID);
    this->ui->trainComboBox->setModel(trainModel);
    this->ui->trainComboBox->setModelColumn(2);
}

