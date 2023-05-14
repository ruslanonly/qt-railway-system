#include "getpassengeradditionalmodal.h"
#include "ui_getpassengeradditionalmodal.h"

GetPassengerAdditionalModal::GetPassengerAdditionalModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetPassengerAdditionalModal)
{
    ui->setupUi(this);
}

GetPassengerAdditionalModal::~GetPassengerAdditionalModal()
{
    delete ui;
}

void GetPassengerAdditionalModal::on_showSelectButton_clicked()
{
    this->tableViewQueryModel = queryModel->selectPassengersWithTicketsAmount();
    this->ui->passengerTableView->setModel(this->tableViewQueryModel);
}


void GetPassengerAdditionalModal::on_showAnyButton_clicked()
{
    this->tableViewQueryModel = queryModel->selectPassengerWithSeveralTickets();
    this->ui->passengerTableView->setModel(this->tableViewQueryModel);
}

