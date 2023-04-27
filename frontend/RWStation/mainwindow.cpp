#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>

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


void MainWindow::loadStationTable() {
    QTableView* tableView= this->ui->stationsTableView;
    delete tableView->model();
    this->ui->stationsTableView->setModel(queryModel->stationSelectAll());
}

void MainWindow::loadRouteTable() {
    QTableView* tableView= this->ui->routesTableView;
    if (tableView->model() != NULL) {
        qDebug() << "hello";
    }
    delete tableView->model();
    this->ui->routesTableView->setModel(queryModel->routeSelectAll());
}

void MainWindow::loadTrainTable() {
    QTableView* tableView= this->ui->trainsTableView;
    delete tableView->model();
    this->ui->trainsTableView->setModel(queryModel->trainSelectAll());
}

void MainWindow::loadTicketTable() {
    QTableView* tableView= this->ui->ticketsTableView;
    delete tableView->model();
    this->ui->ticketsTableView->setModel(queryModel->ticketSelectAll());
}

void MainWindow::loadPassengerTable() {
    QTableView* tableView= this->ui->passengersTableView;
    delete tableView->model();
    this->ui->passengersTableView->setModel(queryModel->passengerSelectAll());
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


void MainWindow::on_addStationButton_clicked()
{
    this->addStationModal = new AddStationModal(this->dbManager);
    this->addStationModal->show();
}

