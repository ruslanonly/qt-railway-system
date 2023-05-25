#ifndef UPDATESCHEDULEVIEWMODAL_H
#define UPDATESCHEDULEVIEWMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class UpdateScheduleViewModal;
}

class UpdateScheduleViewModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateScheduleViewModal(int scheduleID, QWidget *parent = nullptr);
    ~UpdateScheduleViewModal();

private slots:
    void on_saveChangesButton_clicked();

    void on_routeNameComboBox_currentIndexChanged(int index);

    void on_trainNameComboBox_currentIndexChanged(int index);

private:
    void fillData();
    Ui::UpdateScheduleViewModal *ui;

    int scheduleID;
    QueryModel* queryModel;
    QSqlQueryModel* trainModel;
};

#endif // UPDATESCHEDULEVIEWMODAL_H
