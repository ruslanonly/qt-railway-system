#include "addticketmodal.h"
#include "ui_addticketmodal.h"

#include <QMessageBox>

AddTicketModal::AddTicketModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTicketModal)
{
    ui->setupUi(this);

    QSqlQueryModel* passengersModel = queryModel->passengerSelectAllRaw();
    this->ui->passengerComboBox->setModel(passengersModel);
    this->ui->passengerComboBox->setModelColumn(1);

    QSqlQueryModel* scheduleModel = queryModel->scheduleSelectAllList();
    this->ui->scheduleComboBox->setModel(scheduleModel);
    this->ui->scheduleComboBox->setModelColumn(1);
}

AddTicketModal::~AddTicketModal()
{
    delete ui;
}

void AddTicketModal::on_addButton_clicked()
{

//    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
//    QAbstractItemModel* passengerModel = this->ui->passengerComboBox->model();
//    int seatNo = this->ui->seatNoComboBox->text();
//    int railcarNo = this->ui->nameInput->text();
//    int railcarClass = this->ui->railcarClassInput->text();
//    //QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
//    //QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);
//    int scheduleID = scheduleModel->data(scheduleModel->index(ui->scheduleComboBox->currentIndex(),0)).toInt();
//    int passengerID = passengerModel->data(passengerModel->index(ui->passengerComboBox->currentIndex(),0)).toInt();


//    QSqlQuery *query = new QSqlQuery;
//    query->prepare("SELECT add_ticket(:ScheduleID, :PassengerID, :SeatNo, :RailcarNo, :RailcarClass)");
//    query->bindValue(":ScheduleID", scheduleID);
//    query->bindValue(":PassengerID", passengerID);
//    query->bindValue(":SeatNo", name);
//    query->bindValue(":RailcarNo", DepartureStationID);
//    query->bindValue(":RailcarClass", ArrivalStationID);

//    if (query->exec()) {
//        this->close();
//    } else {
//        QMessageBox msg;
//        qDebug() << query->lastError().text();
//        msg.setText(query->lastError().text());
//        msg.exec();
//    }
}

void AddTicketModal::on_scheduleComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(index,0)).toInt();

    QSqlQueryModel* railcarsModel = queryModel->railcarsSelectAllNumbersForSchedule(scheduleID);
    this->ui->railCarNoComboBox->setModel(railcarsModel);
    this->ui->railCarNoComboBox->setModelColumn(1);
}

void AddTicketModal::on_railCarNoComboBox_currentIndexChanged(int index)
{
//    QAbstractItemModel* routeModel = this->ui->routeComboBox->model();
//    int routeID = routeModel->data(routeModel->index(index,0)).toInt();
//    qDebug() << routeID;
//    delete ui->trainComboBox->model();
//    this->seatNoModel = queryModel->trainSelectAllForRoute(routeID);
//    this->ui->trainComboBox->setModel(trainModel);
//    this->ui->trainComboBox->setModelColumn(0);
}




