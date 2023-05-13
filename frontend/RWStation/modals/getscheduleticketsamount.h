#ifndef GETSCHEDULETICKETSAMOUNT_H
#define GETSCHEDULETICKETSAMOUNT_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetScheduleTicketsAmount;
}

class GetScheduleTicketsAmount : public QWidget
{
    Q_OBJECT

public:
    explicit GetScheduleTicketsAmount(QWidget *parent = nullptr);
    ~GetScheduleTicketsAmount();

private slots:
    void on_updateTicketsTableViewButton_clicked();

    void on_percentageSpinBox_valueChanged(int arg1);

private:
    Ui::GetScheduleTicketsAmount *ui;

    QueryModel* queryModel;

    QSqlQueryModel* ticketsAmountQueryModel;
};

#endif // GETSCHEDULETICKETSAMOUNT_H
