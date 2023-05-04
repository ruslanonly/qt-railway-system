#include "updatepassengermodal.h"
#include "ui_updatepassengermodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "utils.h"

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

void UpdatePassengerModal::on_addButton_clicked()
{
    QString firstName = this->ui->firstNameInput->text();
    QString lastName = this->ui->lastNameInput->text();
    QString middleName = this->ui->middleNameInput->text();
    int passportSerialNo = this->ui->pSerialNoInput->value();
    int passportCode = this->ui->pCodeInput->value();

    QSqlQuery query;
    query.prepare("SELECT update_passenger(:ID, :FirstName, :MiddleName, :LastName, :PassportSerialNo, :PassportCode)");
    query.bindValue(":ID", this->passengerID);
    query.bindValue(":FirstName", firstName);
    query.bindValue(":MiddleName", middleName);
    query.bindValue(":LastName", lastName);
    query.bindValue(":PassportSerialNo", passportSerialNo);
    query.bindValue(":PassportCode", passportCode);

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

