#include <QSqlQuery>
#include <QSqlError>

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(DatabaseManager* dbManager, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    this->dbManager = dbManager;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showWindow() {
    this->show();
}

