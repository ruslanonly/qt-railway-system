#include "cursorupdatescheduletrainmodal.h"
#include "ui_cursorupdatescheduletrainmodal.h"

#include <QSqlQueryModel>
#include <QAbstractItemModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#include "utils.h"

CursorUpdateScheduleTrainModal::CursorUpdateScheduleTrainModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CursorUpdateScheduleTrainModal)
{
    ui->setupUi(this);

    QSqlQueryModel* trainModel = queryModel->trainSelectAllRaw();
    this->ui->newTrainComboBox->setModel(trainModel);
    this->ui->newTrainComboBox->setModelColumn(2);

    this->ui->oldTrainComboBox->setModel(trainModel);
    this->ui->oldTrainComboBox->setModelColumn(2);
}

CursorUpdateScheduleTrainModal::~CursorUpdateScheduleTrainModal()
{
    delete ui;
}

void CursorUpdateScheduleTrainModal::on_replaceButton_clicked()
{
    QAbstractItemModel* newTrainModel = this->ui->newTrainComboBox->model();
    QAbstractItemModel* oldTrainModel = this->ui->oldTrainComboBox->model();

    int oldTrainId = oldTrainModel->data(oldTrainModel->index(ui->oldTrainComboBox->currentIndex(),0)).toInt();
    int newTrainId = newTrainModel->data(newTrainModel->index(ui->newTrainComboBox->currentIndex(),0)).toInt();

    qDebug() << oldTrainId << newTrainId;

    QSqlQuery query;
    QString preparedQueryString = QString("SELECT update_schedule_train(%1, %2)")
                                .arg(oldTrainId)
                                .arg(newTrainId);

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

