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

void MainWindow::on_pushButton_clicked()
{
    bool opened = this->dbManager->openConnection();
    if (!opened) {
        qWarning() << this->dbManager->database()->lastError().text();
    } else {
        qDebug() << "Opened";
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QSqlDatabase* db = this->dbManager->database();
    db->exec("SELECT * FROM test");

    QSqlQuery query("SELECT * FROM test");
    while (query.next()) {
        int val = query.value(0).toInt();
        qDebug() << val;
    }
}

