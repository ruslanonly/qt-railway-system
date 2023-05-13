#include "getscheduleticketsamount.h"
#include "ui_getscheduleticketsamount.h"

GetScheduleTicketsAmount::GetScheduleTicketsAmount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetScheduleTicketsAmount)
{
    ui->setupUi(this);
    this->on_updateTicketsTableViewButton_clicked();
}

GetScheduleTicketsAmount::~GetScheduleTicketsAmount()
{
    delete ui;
}

void GetScheduleTicketsAmount::on_updateTicketsTableViewButton_clicked()
{
    int percentage = this->ui->percentageSpinBox->value();
    this->ticketsAmountQueryModel = queryModel->selectScheduleTicketsAmount(percentage);
    this->ui->ticketAmountsTableView->setModel(this->ticketsAmountQueryModel);
}


void GetScheduleTicketsAmount::on_percentageSpinBox_valueChanged(int arg1)
{
    QSqlQueryModel* prevModel = this->ticketsAmountQueryModel;
    this->ticketsAmountQueryModel = queryModel->selectScheduleTicketsAmount(arg1);
    this->ui->ticketAmountsTableView->setModel(this->ticketsAmountQueryModel);
    delete prevModel;
}

