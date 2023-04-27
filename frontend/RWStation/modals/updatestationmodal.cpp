#include "updatestationmodal.h"
#include "ui_updatestationmodal.h"

UpdateStationModal::UpdateStationModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateStationModal)
{
    ui->setupUi(this);
}

UpdateStationModal::~UpdateStationModal()
{
    delete ui;
}
