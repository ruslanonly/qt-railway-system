#include "getschedulerevenuemodal.h"
#include "ui_getschedulerevenuemodal.h"

GetScheduleRevenueModal::GetScheduleRevenueModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetScheduleRevenueModal)
{
    ui->setupUi(this);
    this->on_updateRevenueTableViewButton_clicked();
}

GetScheduleRevenueModal::~GetScheduleRevenueModal()
{
    delete ui;
}

void GetScheduleRevenueModal::on_updateRevenueTableViewButton_clicked()
{
    this->revenueQueryModel = queryModel->selectSchedulesRevenue();
    this->ui->revenueTableView->setModel(this->revenueQueryModel);
}

