#include "scheduleviewmodal.h"
#include "ui_scheduleviewmodal.h"

#include <QSqlQuery>

#include <QMenu>

#include <QMessageBox>

#include <QSqlError>

#include "utils.h"

ScheduleViewModal::ScheduleViewModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScheduleViewModal)
{
    ui->setupUi(this);

    loadTable();
}

ScheduleViewModal::~ScheduleViewModal()
{
    delete ui;
}

void ScheduleViewModal::loadTable() {
    ui->scheduleViewTableView->setModel(queryModel->selectScheduleView());
}

void ScheduleViewModal::on_updateScheduleViewTableView_clicked()
{
    loadTable();
}

void ScheduleViewModal::on_scheduleViewTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->scheduleViewTableView);
}

void ScheduleViewModal::showCustomContextMenu(const QPoint &pos, QTableView *tableView) {
    QModelIndex index = tableView->currentIndex();
    int temp_ID = tableView->model()->data(tableView->model()->index(index.row(),0)).toInt();

    QMenu *menu = new QMenu(this);
    QAction *ModRec = new QAction("Изменить...", this);
    QAction *DelRec = new QAction("Удалить", this);

    connect(ModRec, &QAction::triggered, [=]() {
        ModifyRequestedAction(temp_ID);
    });
    connect(DelRec, &QAction::triggered, [=]() {
        DeleteRequestedAction(temp_ID);
    });

    menu->addAction(ModRec);
    menu->addAction(DelRec);
    menu->popup(tableView->viewport()->mapToGlobal(pos));
}

void ScheduleViewModal::ModifyRequestedAction(int selectedID) {
    updateScheduleViewModal = new UpdateScheduleViewModal(selectedID);
    updateScheduleViewModal->show();
}

void ScheduleViewModal::DeleteRequestedAction(int selectedID) {

    QSqlQuery query;
    query.prepare("DELETE FROM schedule_view WHERE schedule_id = :ID");
    query.bindValue(":ID", selectedID);

    if (query.exec()){
        loadTable();
    }
    else {
        QMessageBox msg;
        msg.setText("Не получилось удалить элемент таблицы");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}


void ScheduleViewModal::on_addNewButton_clicked()
{
    this->addScheduleViewModal = new AddScheduleViewModal();
    this->addScheduleViewModal->show();
}

