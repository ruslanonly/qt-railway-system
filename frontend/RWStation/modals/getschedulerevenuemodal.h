#ifndef GETSCHEDULEREVENUEMODAL_H
#define GETSCHEDULEREVENUEMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetScheduleRevenueModal;
}

class GetScheduleRevenueModal : public QWidget
{
    Q_OBJECT

public:
    explicit GetScheduleRevenueModal(QWidget *parent = nullptr);
    ~GetScheduleRevenueModal();

private slots:
    void on_updateRevenueTableViewButton_clicked();

private:
    Ui::GetScheduleRevenueModal *ui;

    QueryModel* queryModel;

    QSqlQueryModel* revenueQueryModel;
};

#endif // GETSCHEDULEREVENUEMODAL_H
