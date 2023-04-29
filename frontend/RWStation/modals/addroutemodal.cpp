#include "addroutemodal.h"
#include "ui_addroutemodal.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

AddRouteModal::AddRouteModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRouteModal)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);

    QSqlQueryModel* stationsModel = queryModel->stationSelectAll();
    this->ui->arrStationComboBox->setModel(stationsModel);
    this->ui->arrStationComboBox->setModelColumn(1);
    this->ui->depStationComboBox->setModel(stationsModel);
    this->ui->depStationComboBox->setModelColumn(1);
}

AddRouteModal::~AddRouteModal()
{
    delete this->ui->depStationComboBox->model();
    delete ui;
}

void AddRouteModal::on_addButton_clicked()
{
    QAbstractItemModel* model = this->ui->depStationComboBox->model();
    QString name = this->ui->nameInput->text();
    QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);
    int DepartureStationID = model->data(model->index(ui->depStationComboBox->currentIndex(),0)).toInt();
    int ArrivalStationID = model->data(model->index(ui->arrStationComboBox->currentIndex(),0)).toInt();;


    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT add_route(:Name, :DepartureStationID, :ArrivalStationID, :DepartureDate, :ArrivalDate)");
    query->bindValue(":Name", name);
    query->bindValue(":DepartureStationID", DepartureStationID);
    query->bindValue(":ArrivalStationID", ArrivalStationID);
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

