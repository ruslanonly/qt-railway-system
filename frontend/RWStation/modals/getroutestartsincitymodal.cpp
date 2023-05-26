#include "getroutestartsincitymodal.h"
#include "ui_getroutestartsincitymodal.h"

GetRouteStartsInCityModal::GetRouteStartsInCityModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetRouteStartsInCityModal)
{
    ui->setupUi(this);
}

GetRouteStartsInCityModal::~GetRouteStartsInCityModal()
{
    delete ui;
}

void GetRouteStartsInCityModal::on_updateTableViewButton_clicked()
{
    QString cityName = ui->cityNameInput->text();
    ui->tableView->setModel(queryModel->getRoutesThatStartsInCity(cityName));
}

