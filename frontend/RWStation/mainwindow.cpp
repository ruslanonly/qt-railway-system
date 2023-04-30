#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMenu>
#include <QMessageBox>

#include "modals/updatestationmodal.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(DatabaseManager* dbManager, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    this->dbManager = dbManager;
    ui->setupUi(this);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::showWindow() {
    this->show();
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_ticketPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(1);

}

void MainWindow::on_trainPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(2);
    loadTrainTable();
}

void MainWindow::on_passengerPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(3);
}

void MainWindow::on_routePageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(4);
    loadRouteTable();
}

void MainWindow::on_stationPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(5);
    loadStationTable();
}

void MainWindow::on_schedulePageButton_clicked()
{
    this->ui->pagesWidget->setCurrentIndex(6);
    loadScheduleTable();
}




void MainWindow::on_backPassengerButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_backRouteButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_backStationButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_backTicketButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_backTrainButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_backScheduleButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(0);
}


void MainWindow::loadStationTable() {
    QTableView* tableView= this->ui->stationsTableView;
    delete tableView->model();
    this->ui->stationsTableView->setModel(queryModel->stationSelectAll());
}

void MainWindow::loadRouteTable() {
    QTableView* tableView= this->ui->routesTableView;
    delete tableView->model();
    this->ui->routesTableView->setModel(queryModel->routeSelectAll());
}

void MainWindow::loadTrainTable() {
    QTableView* tableView= this->ui->trainsTableView;
    delete tableView->model();

    qDebug() << queryModel->trainSelectAll()->lastError().text();
    this->ui->trainsTableView->setModel(queryModel->trainSelectAll());
}

void MainWindow::loadTicketTable() {
    QTableView* tableView= this->ui->ticketsTableView;
    delete tableView->model();
    this->ui->ticketsTableView->setModel(queryModel->ticketSelectAllRaw());
}

void MainWindow::loadPassengerTable() {
    QTableView* tableView= this->ui->passengersTableView;
    delete tableView->model();
    this->ui->passengersTableView->setModel(queryModel->passengerSelectAllRaw());
}

void MainWindow::loadScheduleTable() {
    QTableView* tableView= this->ui->scheduleTableView;
    delete tableView->model();
    this->ui->scheduleTableView->setModel(queryModel->scheduleSelectAllRaw());
}



void MainWindow::on_refreshPassengerButton_clicked()
{
    loadPassengerTable();
}

void MainWindow::on_refreshRouteButton_clicked()
{
    loadRouteTable();
}

void MainWindow::on_refreshStationButton_clicked()
{
    loadStationTable();
}

void MainWindow::on_refreshTicketButton_clicked()
{
    loadTicketTable();
}

void MainWindow::on_refreshTrainButton_clicked()
{
    loadTrainTable();
}

void MainWindow::on_refreshScheduleButton_clicked()
{
    loadScheduleTable();
}


void MainWindow::on_addStationButton_clicked()
{
    this->addStationModal = new AddStationModal();
    this->addStationModal->show();
}

void MainWindow::on_addRouteButton_clicked()
{
    this->addRouteModal = new AddRouteModal();
    this->addRouteModal->show();
}

void MainWindow::on_addTrainButton_clicked()
{
    this->addTrainModal = new AddTrainModal();
    this->addTrainModal->show();
}




void MainWindow::on_stationsTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->stationsTableView, TableViewVariant::station);
}

void MainWindow::on_routesTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->routesTableView, TableViewVariant::route);
}

void MainWindow::on_trainsTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->trainsTableView, TableViewVariant::train);
}

void MainWindow::on_ticketsTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->ticketsTableView, TableViewVariant::ticket);
}

void MainWindow::on_passengersTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->passengersTableView, TableViewVariant::passenger);
}




QString mapTableVariantToName(TableViewVariant tableVariant) {
    switch(tableVariant) {
    case station:
        return "station";
        break;
    case route:
        return"route";
        break;
    case train:
        return"train";
        break;
    case ticket:
        return"ticket";
        break;
    case passenger:
        return "passenger";
        break;
    }
}

void MainWindow::showCustomContextMenu(const QPoint &pos, QTableView *tableView, TableViewVariant tableVariant) {
    QModelIndex index = tableView->currentIndex();
    int temp_ID = tableView->model()->data(tableView->model()->index(index.row(),0)).toInt();

    QString currentTable = mapTableVariantToName(tableVariant);

    //Создаём меню и два действия
    QMenu *menu = new QMenu(this);
    QAction *ModRec = new QAction("Изменить...", this);
    QAction *DelRec = new QAction("Удалить", this);
    //Соединяем действие с соответствующим сигналом и слотом

    connect(ModRec, &QAction::triggered, [=]() {
        ModifyRequestedAction(temp_ID, tableVariant);
    });
    connect(DelRec, &QAction::triggered, [=]() {
        DeleteRequestedAction(temp_ID, tableVariant);
    });

    //Добавление действий, созданных ранее
    menu->addAction(ModRec);
    menu->addAction(DelRec);
    menu->popup(tableView->viewport()->mapToGlobal(pos));
}

void MainWindow::ModifyRequestedAction(int selectedID, TableViewVariant selectedTable) {
    switch(selectedTable) {
        case station: {
            updateStationModal = new UpdateStationModal(selectedID);
            updateStationModal->show();
            break;
        }
        case route: {
            updateRouteModal = new UpdateRouteModal(selectedID);
            updateRouteModal->show();
            break;
        }
        case train:
            break;
        case ticket:
            break;
        case passenger:
            break;
    }
}

void MainWindow::DeleteRequestedAction(int selectedID, TableViewVariant selectedTable) {
    QString table = mapTableVariantToName(selectedTable);
    qDebug() << selectedID << " " << table;

    QSqlQuery *query = new QSqlQuery();
    query->prepare("SELECT delete_" + table + "(:ID)");
    query->bindValue(":ID", selectedID);
    if (query->exec()){
        switch(selectedTable) {
            case station:
                loadStationTable();
                break;
            case route:
                loadRouteTable();
                break;
            case train:
                loadTrainTable();
                break;
            case ticket:
                loadTicketTable();
                break;
            case passenger:
                loadPassengerTable();
                break;
            }
        }
    else {
        QMessageBox msg;
        msg.setText(query->lastError().text());
        msg.exec();
    }

}








