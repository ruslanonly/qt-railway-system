#include "addtrainmodal.h"
#include "ui_addtrainmodal.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

#include "utils.h"

AddTrainModal::AddTrainModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTrainModal)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);

    QSqlQueryModel* routesModel = queryModel->routeSelectAllRaw();
    this->ui->routeComboBox->setModel(routesModel);
    this->ui->routeComboBox->setModelColumn(1);
}

AddTrainModal::~AddTrainModal()
{
    delete ui;
}

void AddTrainModal::on_addButton_clicked()
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

    QSqlQuery query;
    query.prepare("SELECT add_train(:RouteID, :Name, :Type, :RailcarCapacity, :RailcarsAmount, :FirstClassPrice, :SecondClassPrice)");
    query.bindValue(":RouteID", routeID);
    query.bindValue(":Name", name);
    query.bindValue(":Type", trainType);
    query.bindValue(":RailcarCapacity", railcarCapacity);
    query.bindValue(":RailcarsAmount", railcarsAmount);
    query.bindValue(":FirstClassPrice", firstClassPrice);
    query.bindValue(":SecondClassPrice", secondClassPrice);

    if (query.exec()) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось добавить поезд");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}

