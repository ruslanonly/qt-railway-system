#ifndef UPDATESCHEDULEMODAL_H
#define UPDATESCHEDULEMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class UpdateScheduleModal;
}

class UpdateScheduleModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateScheduleModal(int scheduleID, QWidget *parent = nullptr);
    ~UpdateScheduleModal();

private slots:
    void on_addButton_clicked();

    void on_routeComboBox_currentIndexChanged(int index);

private:
    void fillData();
    Ui::UpdateScheduleModal *ui;

    int scheduleID;
    QueryModel* queryModel;
    QSqlQueryModel* trainModel;
};

#endif // UPDATESCHEDULEMODAL_H
