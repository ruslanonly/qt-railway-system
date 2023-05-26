#include "getcorrelatedqueriesmodal.h"
#include "ui_getcorrelatedqueriesmodal.h"

GetCorrelatedQueriesModal::GetCorrelatedQueriesModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetCorrelatedQueriesModal)
{
    ui->setupUi(this);
}

GetCorrelatedQueriesModal::~GetCorrelatedQueriesModal()
{
    delete ui;
}

void GetCorrelatedQueriesModal::on_showRouteMaxPriceButton_clicked()
{
    ui->tableView->setModel(queryModel->getCorrelatedMaxRouteFirstClassPrice());
}


void GetCorrelatedQueriesModal::on_showTicketForPassengerNameButton_clicked()
{
    QString passengerName = ui->passengerNameInput->text();
    ui->tableView->setModel(queryModel->getCorrelatedTicketForPassengerName(passengerName));
}


void GetCorrelatedQueriesModal::on_showPassengersWaitingScheduleButton_clicked()
{
    ui->tableView->setModel(queryModel->getCorrelatedPassengersWaitingForSchedule());
}

