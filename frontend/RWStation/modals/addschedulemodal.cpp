#include "addschedulemodal.h"
#include "ui_addschedulemodal.h"

AddScheduleModal::AddScheduleModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddScheduleModal)
{
    ui->setupUi(this);
}

AddScheduleModal::~AddScheduleModal()
{
    delete ui;
}
