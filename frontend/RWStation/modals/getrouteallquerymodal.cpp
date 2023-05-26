#include "getrouteallquerymodal.h"
#include "ui_getrouteallquerymodal.h"

GetRouteAllQueryModal::GetRouteAllQueryModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetRouteAllQueryModal)
{
    ui->setupUi(this);
}

GetRouteAllQueryModal::~GetRouteAllQueryModal()
{
    delete ui;
}

void GetRouteAllQueryModal::on_statusComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* statusModel = this->ui->statusComboBox->model();

    QString status = statusModel->data(statusModel->index(ui->statusComboBox->currentIndex(),0)).toString();
    ui->tableView->setModel(queryModel->selectAllRoutesWhereAllSchedulesWithStatus(status));
}

