#include "updatestationmodal.h"
#include "ui_updatestationmodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

UpdateStationModal::UpdateStationModal(int stationID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateStationModal)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->stationID = stationID;

    fillData();

}

UpdateStationModal::~UpdateStationModal()
{
    delete ui;
}

void UpdateStationModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, name, city, country FROM station WHERE id = :ID");
    query.bindValue(":ID", this->stationID);
    if (query.exec())
    {
        query.next();
        ui->nameInput->setText(query.value(1).toString());
        ui->cityInput->setText(query.value(2).toString());
        ui->countryInput->setText(query.value(3).toString());
    }

}

void UpdateStationModal::on_addButton_clicked() {
    QSqlQuery query;
    query.prepare("SELECT update_station(:ID, :Name, :City, :Country)");
    query.bindValue(":ID", this->stationID);
    query.bindValue(":Name", ui->nameInput->text());
    query.bindValue(":City", ui->cityInput->text());
    query.bindValue(":Country", ui->countryInput->text());
    if (query.exec())
    {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText(query.lastError().text());
        msg.exec();
    }
}


