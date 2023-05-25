#include "addscheduleviewmodal.h"
#include "ui_addscheduleviewmodal.h"

AddScheduleViewModal::AddScheduleViewModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddScheduleViewModal)
{
    ui->setupUi(this);
}

AddScheduleViewModal::~AddScheduleViewModal()
{
    delete ui;
}
