#include "addschedulemodal.h"
#include "ui_addschedulemodal.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

AddScheduleModal::AddScheduleModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddScheduleModal)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);

    QSqlQueryModel* routeModel = queryModel->routeSelectAllRaw();
    this->ui->routeComboBox->setModel(routeModel);
    this->ui->routeComboBox->setModelColumn(1);

    QSqlQueryModel* trainModel = queryModel->trainSelectAllRaw();
    this->ui->trainComboBox->setModel(trainModel);
    this->ui->trainComboBox->setModelColumn(2);
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

    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT add_schedule(:RouteID, :TrainID, :DepartureDate, :ArrivalDate)");
    query->bindValue(":RouteID", routeID);
    query->bindValue(":TrainID", trainID);
    query->bindValue(":DepartureDate", departureDateTime);
    query->bindValue(":ArrivalDate", arrivalDateTime);

    if (query->exec()) {
        this->close();
    } else {
        QMessageBox msg;
        qDebug() << query->lastError().text();
        msg.setText(query->lastError().text());
        msg.exec();
    }
}


void AddScheduleModal::on_routeComboBox_currentIndexChanged(int index)
{

}

