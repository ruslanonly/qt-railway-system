#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMenu>
#include <QMessageBox>

#include "modals/updatestationmodal.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "utils.h"


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
    loadTicketTable();

}

void MainWindow::on_trainPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(2);
    loadTrainTable();
}

void MainWindow::on_passengerPageButton_clicked() {
    this->ui->pagesWidget->setCurrentIndex(3);
    loadPassengerTable();
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

void MainWindow::on_miscPageButton_clicked()
{
    this->ui->pagesWidget->setCurrentIndex(7);
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

void MainWindow::on_backMiscPageButton_clicked()
{
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
    qDebug() << queryModel->ticketSelectAll()->lastError().text();
    this->ui->ticketsTableView->setModel(queryModel->ticketSelectAll());
}

void MainWindow::loadPassengerTable() {
    QTableView* tableView= this->ui->passengersTableView;
    delete tableView->model();
    qDebug() << "passenger" <<  queryModel->passengerSelectAll()->lastError().text();
    this->ui->passengersTableView->setModel(queryModel->passengerSelectAll());
}

void MainWindow::loadScheduleTable() {
    QTableView* tableView= this->ui->scheduleTableView;
    delete tableView->model();
    qDebug() << queryModel->scheduleSelectAll()->lastError().text();
    this->ui->scheduleTableView->setModel(queryModel->scheduleSelectAll());
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

void MainWindow::on_addScheduleButton_clicked()
{
    this->addScheduleModal = new AddScheduleModal();
    this->addScheduleModal->show();
}

void MainWindow::on_addPassengerButton_clicked()
{
    this->addPassengerModal = new AddPassengerModal();
    this->addPassengerModal->show();
}

void MainWindow::on_addTicketButton_clicked()
{
    this->addTicketModal = new AddTicketModal();
    this->addTicketModal->show();
}

void MainWindow::on_bookTicketButton_clicked()
{
    this->bookTicketModal = new BookTicketModal();
    this->bookTicketModal->show();
}

void MainWindow::on_getScheduleRevenueButton_clicked()
{
    this->getScheduleRevenueModal = new GetScheduleRevenueModal();
    this->getScheduleRevenueModal->show();
}

void MainWindow::on_getScheduleTicketsAmount_clicked()
{
    this->getScheduleTicketsAmount = new GetScheduleTicketsAmount();
    this->getScheduleTicketsAmount->show();
}

void MainWindow::on_passengerAdditionalButton_clicked()
{
    this->getPassengerAdditionalModal = new GetPassengerAdditionalModal();
    this->getPassengerAdditionalModal->show();
}

void MainWindow::on_scheduleViewButton_clicked()
{
    this->scheduleViewModal = new ScheduleViewModal();
    this->scheduleViewModal->show();
}

void MainWindow::on_routeGetThatStartsInTownButton_clicked()
{
    this->getRouteStartsInCityModal = new GetRouteStartsInCityModal();
    this->getRouteStartsInCityModal->show();
}

void MainWindow::on_correlatedQueriesButton_clicked()
{
    this->getCorrelatedQueriesModal = new GetCorrelatedQueriesModal();
    this->getCorrelatedQueriesModal->show();
}

void MainWindow::on_routeScheduleStatusButton_clicked()
{
    this->getRouteAllQueryModal = new GetRouteAllQueryModal();
    this->getRouteAllQueryModal->show();
}


void MainWindow::on_logoutButton_clicked()
{
    this->dbManager->closeConnection();
    this->close();
    emit logoutSignal();
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

void MainWindow::on_scheduleTableView_customContextMenuRequested(const QPoint &pos)
{
    showCustomContextMenu(pos, ui->scheduleTableView, TableViewVariant::schedule);
}







QString mapTableVariantToName(TableViewVariant tableVariant) {
    switch(tableVariant) {
    case station:
        return "station";
        break;
    case route:
        return "route";
        break;
    case train:
        return "train";
        break;
    case schedule:
        return "schedule";
        break;
    case ticket:
        return "ticket";
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
        case train: {
            updateTrainModal = new UpdateTrainModal(selectedID);
            updateTrainModal->show();
            break;
        }
        case schedule: {
            updateScheduleModal = new UpdateScheduleModal(selectedID);
            updateScheduleModal->show();
            break;
        }
        case ticket:{
            updateTicketModal = new UpdateTicketModal(selectedID);
            updateTicketModal->show();
            break;
        }
        case passenger: {
            updatePassengerModal = new UpdatePassengerModal(selectedID);
            updatePassengerModal->show();
            break;
        }
    }
}

void MainWindow::DeleteRequestedAction(int selectedID, TableViewVariant selectedTable) {
    QString table = mapTableVariantToName(selectedTable);

    QSqlQuery query;
    query.prepare("SELECT delete_" + table + "(:ID)");
    query.bindValue(":ID", selectedID);

    if (query.exec()){
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
            case schedule:
                loadScheduleTable();
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
        msg.setText("Не получилось удалить элемент таблицы");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}


