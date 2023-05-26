#ifndef ADDSCHEDULEVIEWMODAL_H
#define ADDSCHEDULEVIEWMODAL_H

#include <QWidget>

#include "database/querymodel.h"


namespace Ui {
class AddScheduleViewModal;
}

class AddScheduleViewModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddScheduleViewModal(QWidget *parent = nullptr);
    ~AddScheduleViewModal();

private slots:
    void on_addButton_clicked();

    void on_routeNameComboBox_currentIndexChanged(int index);

private:
    Ui::AddScheduleViewModal *ui;

    QSqlQueryModel* trainModel;

    QueryModel* queryModel;
};

#endif // ADDSCHEDULEVIEWMODAL_H
