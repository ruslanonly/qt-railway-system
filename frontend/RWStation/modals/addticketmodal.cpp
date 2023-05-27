#include "addticketmodal.h"
#include "ui_addticketmodal.h"

#include <QMessageBox>
#include <QComboBox>
#include <QSqlQuery>
#include <QSqlError>

#include "utils.h"

AddTicketModal::AddTicketModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTicketModal)
{
    ui->setupUi(this);

    QSqlQueryModel* passengersModel = queryModel->passengerSelectAllList();
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

    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    QAbstractItemModel* passengerModel = this->ui->passengerComboBox->model();
    QAbstractItemModel* railcarNoModel = this->ui->railCarNoComboBox->model();
    QAbstractItemModel* seatNoModel = this->ui->seatNoComboBox->model();

    int seatNo = seatNoModel->data(seatNoModel->index(ui->seatNoComboBox->currentIndex(),0)).toInt();
    int railcarNo = railcarNoModel->data(railcarNoModel->index(ui->railCarNoComboBox->currentIndex(),0)).toInt();
    int railcarClass = this->ui->railcarClassInput->value();
    int scheduleID = scheduleModel->data(scheduleModel->index(ui->scheduleComboBox->currentIndex(),0)).toInt();

    int passengerID = passengerModel->data(passengerModel->index(ui->passengerComboBox->currentIndex(),0)).toInt();


    QSqlQuery query;
//    QString qString = QString("CALL add_ticket_transaction(%1, %2, %3, %4::smallint, %5::smallint)")
//                          .arg(scheduleID)
//                          .arg(passengerID)
//                          .arg(seatNo)
//                          .arg(railcarNo)
//                          .arg(railcarClass);
    query.prepare("SELECT add_ticket(:ScheduleID, :PassengerID, :SeatNo, :RailcarNo, :RailcarClass)");
    query.bindValue(":ScheduleID", scheduleID);
    query.bindValue(":PassengerID", passengerID);
    query.bindValue(":SeatNo", seatNo);
    query.bindValue(":RailcarNo", railcarNo);
    query.bindValue(":RailcarClass", railcarClass);

    if (query.exec()) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось добавить билет");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}

void AddTicketModal::on_scheduleComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(index,0)).toInt();

    QSqlQueryModel* railcarsModel = queryModel->railcarsSelectAllNumbersForSchedule(scheduleID);
    this->ui->railCarNoComboBox->setModel(railcarsModel);
    this->ui->railCarNoComboBox->setModelColumn(0);
}

void AddTicketModal::on_railCarNoComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(ui->scheduleComboBox->currentIndex(),0)).toInt();

    QAbstractItemModel* railcarModel = this->ui->railCarNoComboBox->model();
    int railcarNo = railcarModel->data(railcarModel->index(index,0)).toInt();

    delete ui->seatNoComboBox->model();
    this->seatNoModel = queryModel->seatsSelectAllForScheduleAndRailcar(scheduleID, railcarNo);
    this->ui->seatNoComboBox->setModel(seatNoModel);
    this->ui->seatNoComboBox->setModelColumn(0);
}


