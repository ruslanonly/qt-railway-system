#include "bookticketmodal.h"
#include "ui_bookticketmodal.h"

#include <QMessageBox>
#include <QComboBox>
#include <QSqlQuery>
#include <QSqlError>

#include "utils.h"

BookTicketModal::BookTicketModal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookTicketModal)
{
    ui->setupUi(this);

    QSqlQueryModel* scheduleModel = queryModel->scheduleSelectAllList();
    this->ui->scheduleComboBox->setModel(scheduleModel);
    this->ui->scheduleComboBox->setModelColumn(1);
}

BookTicketModal::~BookTicketModal()
{
    delete ui;
}

void BookTicketModal::on_addButton_clicked()
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    QAbstractItemModel* railcarNoModel = this->ui->railCarNoComboBox->model();
    QAbstractItemModel* seatNoModel = this->ui->seatNoComboBox->model();

    QString firstName = this->ui->firstNameInput->text();
    QString lastName = this->ui->lastNameInput->text();
    QString middleName = this->ui->middleNameInput->text();
    int passportSerialNo = this->ui->pSerialNoInput->value();
    int passportCode = this->ui->pCodeInput->value();

    int seatNo = seatNoModel->data(seatNoModel->index(ui->seatNoComboBox->currentIndex(),0)).toInt();
    int railcarNo = railcarNoModel->data(railcarNoModel->index(ui->railCarNoComboBox->currentIndex(),0)).toInt();
    int railcarClass = this->ui->railcarClassInput->value();
    int scheduleID = scheduleModel->data(scheduleModel->index(ui->scheduleComboBox->currentIndex(),0)).toInt();


    QSqlQuery query;
    QString preparedQueryString = QString("CALL book_ticket_transaction('%1', '%2', '%3', %4::smallint, %5, %6, %7, %8::smallint, %9::smallint)")
                          .arg(firstName)
                          .arg(middleName)
                          .arg(lastName)
                          .arg(passportSerialNo)
                          .arg(passportCode)
                          .arg(scheduleID)
                          .arg(seatNo)
                          .arg(railcarNo)
                          .arg(railcarClass);


    if (query.exec(preparedQueryString)) {
        this->close();
    } else {
        QMessageBox msg;
        msg.setText("Не получилось добавить билет");
        msg.setIcon(QMessageBox::Critical);
        msg.setDetailedText(Utils::mapErrorMessage(query.lastError().text()));
        msg.exec();
        qDebug() << query.lastError().text();
    }
}


void BookTicketModal::on_scheduleComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(index,0)).toInt();

    QSqlQueryModel* railcarsModel = queryModel->railcarsSelectAllNumbersForSchedule(scheduleID);
    this->ui->railCarNoComboBox->setModel(railcarsModel);
    this->ui->railCarNoComboBox->setModelColumn(0);
}


void BookTicketModal::on_railCarNoComboBox_currentIndexChanged(int index)
{
    QAbstractItemModel* scheduleModel = this->ui->scheduleComboBox->model();
    int scheduleID = scheduleModel->data(scheduleModel->index(ui->scheduleComboBox->currentIndex(),0)).toInt();

    QAbstractItemModel* railcarModel = this->ui->railCarNoComboBox->model();
    int railcarNo = railcarModel->data(railcarModel->index(index,0)).toInt();

    delete ui->seatNoComboBox->model();
    this->seatNoModel = queryModel->seatsSelectAllForScheduleAndRailcar(scheduleID, railcarNo);
    this->ui->seatNoComboBox->setModel(seatNoModel);
    this->ui->seatNoComboBox->setModelColumn(0);
}

