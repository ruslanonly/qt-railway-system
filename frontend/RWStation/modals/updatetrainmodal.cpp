#include "updatetrainmodal.h"
#include "ui_updatetrainmodal.h"

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

UpdateTrainModal::UpdateTrainModal(int trainID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateTrainModal)
{
    ui->setupUi(this);
    this->trainID = trainID;

    QSqlQueryModel* routesModel = queryModel->routeSelectAllRaw();
    this->ui->routeComboBox->setModel(routesModel);
    this->ui->routeComboBox->setModelColumn(1);

    fillData();
}

UpdateTrainModal::~UpdateTrainModal()
{
    delete ui;
}

void UpdateTrainModal::fillData() {
    QSqlQuery query;
    query.prepare("SELECT id, route_id, name, type, railcar_capacity, railcars_amount, first_class_price, second_class_price FROM train WHERE id = :ID");
    query.bindValue(":ID", this->trainID);
    if (query.exec()) {
        query.next();
        int routeID = query.value(1).toInt();
        QString trainType = query.value(3).toString();
        ui->nameInput->setText(query.value(2).toString());
        ui->railcarCapInput->setValue(query.value(4).toInt());
        ui->railcarAmountInput->setValue(query.value(5).toInt());
        ui->firstClassInput->setValue(query.value(6).toInt());
        ui->secondClassInput->setValue(query.value(7).toInt());

        QComboBox* routeBox = ui->routeComboBox;
        for (int i = 0; i < routeBox->count(); i++) {
            int rowID = routeBox->model()->data(routeBox->model()->index(i,0)).toInt();
            if (routeID == rowID) {
                routeBox->setCurrentIndex(i);
                break;
            }
        }

        QComboBox* trainTypeBox = ui->trainTypeComboBox;
        for (int i = 0; i < trainTypeBox->count(); i++) {
            QString rowType = trainTypeBox->model()->data(trainTypeBox->model()->index(i,0)).toString();
            qDebug() << rowType;
            if (trainType == rowType) {
                trainTypeBox->setCurrentIndex(i);
                break;
            }
        }
    }
}

void UpdateTrainModal::on_updateButton_clicked()
{
    QAbstractItemModel* routesModel = ui->routeComboBox->model();
    QAbstractItemModel* trainTypesModel = ui->trainTypeComboBox->model();


    QString name = ui->nameInput->text();
    QString trainType = trainTypesModel->data(trainTypesModel->index(ui->trainTypeComboBox->currentIndex(),0)).toString();
    int railcarCapacity = ui->railcarCapInput->value();
    int railcarsAmount = ui->railcarAmountInput->value();
    int firstClassPrice = ui->firstClassInput->value();
    int secondClassPrice = ui->secondClassInput->value();
    int routeID = routesModel->data(routesModel->index(ui->routeComboBox->currentIndex(),0)).toInt();
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT update_train(:ID, :RouteID, :Name, :Type, :RailcarCapacity, :RailcarsAmount, :FirstClassPrice, :SecondClassPrice)");
    query->bindValue(":ID", this->trainID);
    query->bindValue(":RouteID", routeID);
    query->bindValue(":Name", name);
    query->bindValue(":Type", trainType);
    query->bindValue(":RailcarCapacity", railcarCapacity);
    query->bindValue(":RailcarsAmount", railcarsAmount);
    query->bindValue(":FirstClassPrice", firstClassPrice);
    query->bindValue(":SecondClassPrice", secondClassPrice);

    qDebug() << railcarCapacity << railcarsAmount << firstClassPrice << secondClassPrice;

    if (query->exec()) {
        this->close();
    } else {
        QMessageBox msg;
        qDebug() << "error" << query->lastError().text();
        msg.setText(query->lastError().text());
        msg.exec();
    }
}

