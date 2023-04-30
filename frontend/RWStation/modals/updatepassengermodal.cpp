#include "updatepassengermodal.h"
#include "ui_updatepassengermodal.h"

#include <QSqlQuery>

UpdatePassengerModal::UpdatePassengerModal(int passengerID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdatePassengerModal)
{
    ui->setupUi(this);
    this->passengerID = passengerID;

    fillData();
}

UpdatePassengerModal::~UpdatePassengerModal()
{
    delete ui;
}

void UpdatePassengerModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, first_name, middle_name, last_name, passport_serial_no, passport_code FROM passenger WHERE id = :ID");
    query.bindValue(":ID", this->passengerID);
    if (query.exec())
    {
        query.next();
        ui->firstNameInput->setText(query.value(1).toString());
        ui->middleNameInput->setText(query.value(2).toString());
        ui->lastNameInput->setText(query.value(3).toString());
        ui->pSerialNoInput->setValue(query.value(4).toInt());
        ui->pCodeInput->setValue(query.value(5).toInt());
    }
}
