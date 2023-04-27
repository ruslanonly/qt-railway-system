#include "addstationmodal.h"
#include "ui_addstationmodal.h"
#include <QSqlQuery>
#include <QSqlError>

AddStationModal::AddStationModal(DatabaseManager* dbManager, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStationModal)
{
    ui->setupUi(this);
    this->dbManager = dbManager;
}

AddStationModal::~AddStationModal()
{
    delete ui;
}

void AddStationModal::on_addButton_clicked()
{
    QSqlDatabase db = *this->dbManager->database();
    QString name = this->ui->nameInput->text();
    QString city = this->ui->cityInput->text();
    QString country = this->ui->countryInput->text();

    QSqlQuery *query = new QSqlQuery(db);
    query->prepare("SELECT add_station(:Name, :City, :Country)");
    //query->prepare("INSERT INTO station(name, city, country) VALUES(:Name, :City, :Country)");
    query->bindValue(":Name", name);
    query->bindValue(":City", city);
    query->bindValue(":Country", country);
    if (query->exec()) {
        qDebug() << "Success";
    } else {
        qDebug() << query->lastError().text();
    }

}

