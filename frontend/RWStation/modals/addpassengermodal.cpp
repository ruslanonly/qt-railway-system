#include "addpassengermodal.h"
#include "ui_addpassengermodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

AddPassengerModal::AddPassengerModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddPassengerModal)
{
    ui->setupUi(this);
}

AddPassengerModal::~AddPassengerModal()
{
    delete ui;
}

void AddPassengerModal::on_addButton_clicked()
{
    QString firstName = this->ui->firstNameInput->text();
    QString lastName = this->ui->lastNameInput->text();
    QString middleName = this->ui->middleNameInput->text();
    int passportSerialNo = this->ui->pSerialNoInput->value();
    int passportCode = this->ui->pCodeInput->value();

    QSqlQuery query;
    query.prepare("SELECT add_passenger(:FirstName, :MiddleName, :LastName, :PassportSerialNo, :PassportCode)");
    query.bindValue(":FirstName", firstName);
    query.bindValue(":MiddleName", middleName);
    query.bindValue(":LastName", lastName);
    query.bindValue(":PassportSerialNo", passportSerialNo);
    query.bindValue(":PassportCode", passportCode);

    if (query.exec()) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText(query.lastError().text());
        msg.exec();
    }
}

