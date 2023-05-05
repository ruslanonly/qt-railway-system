#include "updateticketmodal.h"
#include "ui_updateticketmodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include "utils.h"

UpdateTicketModal::UpdateTicketModal(int ticketID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateTicketModal)
{
    ui->setupUi(this);
    this->ticketID = ticketID;

    QSqlQueryModel* passengersModel = queryModel->passengerSelectAllList();
    this->ui->passengerComboBox->setModel(passengersModel);
    this->ui->passengerComboBox->setModelColumn(1);

    QSqlQueryModel* scheduleModel = queryModel->scheduleSelectAllList();
    this->ui->scheduleComboBox->setModel(scheduleModel);
    this->ui->scheduleComboBox->setModelColumn(1);

    fillData();
}

UpdateTicketModal::~UpdateTicketModal()
{
    delete ui;
}

void UpdateTicketModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, schedule_id, passenger_id, seat_no, railcar_no, railcar_class FROM ticket WHERE id = :ID");
    query.bindValue(":ID", this->ticketID);
    if (query.exec()) {
        query.next();
        int scheduleID = query.value(1).toInt();
        int passengerID = query.value(2).toInt();
        int seatNo = query.value(3).toInt();
        int railcarNo = query.value(4).toInt();
        int railcarClass = query.value(5).toInt();

        ui->railcarClassInput->setValue(railcarClass);

        QComboBox* passengerBox = ui->passengerComboBox;
        for (int i = 0; i < passengerBox->count(); i++) {
            int rowID = passengerBox->model()->data(passengerBox->model()->index(i,0)).toInt();
            if (rowID == passengerID) {
                passengerBox->setCurrentIndex(i);
            }
        }

        QComboBox* scheduleBox = ui->scheduleComboBox;
        for (int i = 0; i < scheduleBox->count(); i++) {
            int rowID = scheduleBox->model()->data(scheduleBox->model()->index(i,0)).toInt();
            if (rowID == scheduleID) {
                scheduleBox->setCurrentIndex(i);
            }
        }

        QComboBox* railcarBox = ui->railCarNoComboBox;
        for (int i = 0; i < railcarBox->count(); i++) {
            int rowID = railcarBox->model()->data(railcarBox->model()->index(i,0)).toInt();
            if (rowID == railcarNo) {
                railcarBox->setCurrentIndex(i);
            }
        }

        QComboBox* seatNoBox = ui->seatNoComboBox;
        for (int i = 0; i < seatNoBox->count(); i++) {
            int rowID = seatNoBox->model()->data(seatNoBox->model()->index(i,0)).toInt();
            qDebug() << rowID << seatNo;
            if (rowID == seatNo) {
                seatNoBox->setCurrentIndex(i);
            }
        }
    }
}

void UpdateTicketModal::on_updateButton_clicked()
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
    query.prepare("SELECT update_ticket(:ID, :ScheduleID, :PassengerID, :SeatNo, :RailcarNo, :RailcarClass)");
    query.bindValue(":ID", this->ticketID);
    query.bindValue(":ScheduleID", scheduleID);
    query.bindValue(":PassengerID", passengerID);
    query.bindValue(":SeatNo", seatNo);
    query.bindValue(":RailcarNo", railcarNo);
    query.bindValue(":RailcarClass", railcarClass);

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

void UpdateTicketModal::on_scheduleComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(index,0)).toInt();

    QSqlQueryModel* railcarsModel = queryModel->railcarsSelectAllNumbersForSchedule(scheduleID);
    this->ui->railCarNoComboBox->setModel(railcarsModel);
    this->ui->railCarNoComboBox->setModelColumn(0);
}


void UpdateTicketModal::on_railCarNoComboBox_currentIndexChanged(int index)
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

