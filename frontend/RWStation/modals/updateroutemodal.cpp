#include "updateroutemodal.h"
#include "ui_updateroutemodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include "utils.h"

UpdateRouteModal::UpdateRouteModal(int routeID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateRouteModal)
{
    ui->setupUi(this);
    this->routeID = routeID;

    QSqlQueryModel* stationsModel = queryModel->stationSelectAllRaw();
    this->ui->arrStationComboBox->setModel(stationsModel);
    this->ui->arrStationComboBox->setModelColumn(1);
    this->ui->depStationComboBox->setModel(stationsModel);
    this->ui->depStationComboBox->setModelColumn(1);

    fillData();
}

UpdateRouteModal::~UpdateRouteModal()
{
    delete ui;
}

void UpdateRouteModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, name, departure_station_id, arrival_station_id FROM route WHERE id = :ID");
    query.bindValue(":ID", this->routeID);
    if (query.exec()) {
        query.next();
        ui->nameInput->setText(query.value(1).toString());
        int dStationID = query.value(2).toInt();
        int aStationID = query.value(3).toInt();
        //ui->depDateInput->setDateTime(QDateTime::fromString(query.value(4).toString(), Qt::ISODate));
        //ui->arrDateInput->setDateTime(QDateTime::fromString(query.value(5).toString(), Qt::ISODate));


        QComboBox* box = ui->depStationComboBox;
        for (int i = 0; i < box->count(); i++) {
            int rowID = box->model()->data(box->model()->index(i,0)).toInt();
            if (rowID == dStationID) {
                ui->depStationComboBox->setCurrentIndex(i);
            }
            if (rowID == aStationID) {
                ui->arrStationComboBox->setCurrentIndex(i);
            }
        }
    }
}

void UpdateRouteModal::on_updateButton_clicked()
{
    QAbstractItemModel* model = this->ui->depStationComboBox->model();
    QString name = this->ui->nameInput->text();
    //QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    //QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);
    int DepartureStationID = model->data(model->index(ui->depStationComboBox->currentIndex(),0)).toInt();
    int ArrivalStationID = model->data(model->index(ui->arrStationComboBox->currentIndex(),0)).toInt();;

    QSqlQuery query;
    query.prepare("SELECT update_route(:ID, :Name, :DepartureStationID, :ArrivalStationID)");
    query.bindValue(":ID", this->routeID);
    query.bindValue(":Name", name);
    query.bindValue(":DepartureStationID", DepartureStationID);
    query.bindValue(":ArrivalStationID", ArrivalStationID);
    if (query.exec())
    {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось изменить данные");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}

