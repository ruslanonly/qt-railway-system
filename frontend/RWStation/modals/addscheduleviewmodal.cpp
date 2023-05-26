#include "addscheduleviewmodal.h"
#include "ui_addscheduleviewmodal.h"

#include <QSqlQueryModel>
#include <QAbstractItemModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#include "utils.h"

AddScheduleViewModal::AddScheduleViewModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddScheduleViewModal)
{
    ui->setupUi(this);

    QSqlQueryModel* routeModel = queryModel->routeSelectAllRaw();
    this->ui->routeNameComboBox->setModel(routeModel);
    this->ui->routeNameComboBox->setModelColumn(1);
}

AddScheduleViewModal::~AddScheduleViewModal()
{
    delete ui;
}

void AddScheduleViewModal::on_addButton_clicked()
{
    QAbstractItemModel* routeModel = this->ui->routeNameComboBox->model();
    QAbstractItemModel* trainModel = this->ui->trainNameComboBox->model();

    QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);
    int routeID = routeModel->data(routeModel->index(ui->routeNameComboBox->currentIndex(),0)).toInt();
    int trainID = trainModel->data(trainModel->index(ui->trainNameComboBox->currentIndex(),0)).toInt();
    QString routeName = ui->routeNameComboBox->currentText();
    QString trainName = ui->trainNameComboBox->currentText();

    qDebug() << routeName << trainName;

    QSqlQuery query;
    QString preparedQueryString = QString("INSERT INTO schedule_view(route_name, train_name, schedule_departure_date, schedule_arrival_date) "
                                          "VALUES ('%1', '%2', '%3', '%4')")
                                          .arg(routeName)
                                          .arg(trainName)
                                          .arg(departureDateTime)
                                          .arg(arrivalDateTime);

    if (query.exec(preparedQueryString)) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось добавить рейс");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}

void AddScheduleViewModal::on_routeNameComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* routeModel = this->ui->routeNameComboBox->model();
    int routeID = routeModel->data(routeModel->index(index,0)).toInt();
    qDebug() << routeID;
    delete ui->trainNameComboBox->model();
    this->trainModel = queryModel->trainSelectAllForRoute(routeID);
    this->ui->trainNameComboBox->setModel(trainModel);
    this->ui->trainNameComboBox->setModelColumn(2);
}

