#include "updatescheduleviewmodal.h"
#include "ui_updatescheduleviewmodal.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "utils.h"

UpdateScheduleViewModal::UpdateScheduleViewModal(int scheduleID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateScheduleViewModal)
{
    ui->setupUi(this);

    this->scheduleID = scheduleID;

    QSqlQueryModel* routeModel = queryModel->routeSelectAllRaw();
    this->ui->routeNameComboBox->setModel(routeModel);
    this->ui->routeNameComboBox->setModelColumn(1);

    fillData();
}

UpdateScheduleViewModal::~UpdateScheduleViewModal()
{
    delete ui;
}

void UpdateScheduleViewModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT route_name, train_name, train_type, train_first_class_price, train_second_class_price, "
                  "schedule_departure_date, schedule_arrival_date FROM schedule_view WHERE schedule_id = :ID");
    query.bindValue(":ID", this->scheduleID);
    qDebug() << query.lastError().text();
    if (query.exec()) {
        query.next();
        QString routeName = query.value(0).toString();
        QString trainName = query.value(1).toString();
        int trainFirstClassPrice = query.value(3).toInt();
        int trainSecondClassPrice = query.value(4).toInt();
        ui->depDateInput->setDateTime(QDateTime::fromString(query.value(5).toString(), Qt::ISODate));
        ui->arrDateInput->setDateTime(QDateTime::fromString(query.value(6).toString(), Qt::ISODate));

        ui->firstClassPriceInput->setValue(trainFirstClassPrice);
        ui->secondPriceClassInput->setValue(trainSecondClassPrice);

        QComboBox* routeBox = ui->routeNameComboBox;
        for (int i = 0; i < routeBox->count(); i++) {
            QString rowRouteName = routeBox->model()->data(routeBox->model()->index(i,1)).toString();
            if (rowRouteName == routeName) {
                routeBox->setCurrentIndex(i);
                break;
            }
        }

        QComboBox* trainBox = ui->trainNameComboBox;
        for (int i = 0; i < trainBox->count(); i++) {
            QString rowTrainName = trainBox->model()->data(trainBox->model()->index(i,2)).toString();
            if (rowTrainName == trainName) {
                trainBox->setCurrentIndex(i);
                break;
            }
        }

    }

}

void UpdateScheduleViewModal::on_saveChangesButton_clicked()
{
    QAbstractItemModel* routeModel = this->ui->routeNameComboBox->model();
    QAbstractItemModel* trainModel = this->ui->trainNameComboBox->model();
    QAbstractItemModel* trainTypesModel = ui->trainTypeComboBox->model();

    QString departureDateTime = this->ui->depDateInput->dateTime().toString(Qt::ISODate);
    QString arrivalDateTime = this->ui->arrDateInput->dateTime().toString(Qt::ISODate);

    QString routeName = routeModel->data(routeModel->index(ui->routeNameComboBox->currentIndex(),1)).toString();
    QString trainName = trainModel->data(trainModel->index(ui->trainNameComboBox->currentIndex(),2)).toString();
    QString trainType = trainTypesModel->data(trainTypesModel->index(ui->trainTypeComboBox->currentIndex(),0)).toString();

    int trainFirstClassPrice = ui->firstClassPriceInput->value();
    int trainSecondClassPrice = ui->secondPriceClassInput->value();

    QSqlQuery query;
    QString preparedQueryString = QString("UPDATE schedule_view SET route_name = '%1', train_name = '%2', train_type = '%3', "
                                          "train_first_class_price = %4, train_second_class_price = %5, "
                                          "schedule_departure_date = '%6', schedule_arrival_date = '%7' WHERE schedule_id = %8")
                                  .arg(routeName)
                                  .arg(trainName)
                                  .arg(trainType)
                                  .arg(trainFirstClassPrice)
                                  .arg(trainSecondClassPrice)
                                  .arg(departureDateTime)
                                  .arg(arrivalDateTime)
                                  .arg(this->scheduleID);
//    query.prepare("UPDATE schedule SET route_name = :RouteName, train_name = :TrainName, train_type = :TrainType, "
//                  "train_first_class_price = :TrainFirstClassPrice, train_second_class_price = :TrainSecondClassPrice, "
//                  "departure_date = :DepartureDate, arrival_date = :ArrivalDate WHERE schedule_id = :ID");
//    query.bindValue(":ID", this->scheduleID);
//    query.bindValue(":RouteName", routeName);
//    query.bindValue(":TrainName", trainName);
//    query.bindValue(":TrainType", trainType);
//    query.bindValue(":TrainFirstClassPrice", trainFirstClassPrice);
//    query.bindValue(":TrainSecondClassPrice", trainSecondClassPrice);
//    query.bindValue(":DepartureDate", departureDateTime);
//    query.bindValue(":ArrivalDate", arrivalDateTime);

    if (query.exec(preparedQueryString))
    {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось изменить данные");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }

}


void UpdateScheduleViewModal::on_routeNameComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* routeModel = this->ui->routeNameComboBox->model();
    QString routeName = routeModel->data(routeModel->index(index,1)).toString();

    delete ui->trainNameComboBox->model();
    this->trainModel = queryModel->trainSelectAllForRouteName(routeName);
    this->ui->trainNameComboBox->setModel(trainModel);
    this->ui->trainNameComboBox->setModelColumn(2);
}


void UpdateScheduleViewModal::on_trainNameComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* trainModel = this->ui->trainNameComboBox->model();
    QString trainType = trainModel->data(trainModel->index(index,3)).toString();

    QComboBox* trainTypeBox = ui->trainTypeComboBox;
    for (int i = 0; i < trainTypeBox->count(); i++) {
        QString rowTrainType = trainTypeBox->model()->data(trainTypeBox->model()->index(i,0)).toString();
        qDebug() << rowTrainType << trainType;
        if (trainType == rowTrainType) {
            trainTypeBox->setCurrentIndex(i);
            break;
        }
    }
}

