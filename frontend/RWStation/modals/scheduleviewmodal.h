#ifndef SCHEDULEVIEWMODAL_H
#define SCHEDULEVIEWMODAL_H

#include <QWidget>

#include "database/querymodel.h"

#include <QTableView>

#include "modals/updatescheduleviewmodal.h"
#include "modals/addscheduleviewmodal.h"

namespace Ui {
class ScheduleViewModal;
}

class ScheduleViewModal : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleViewModal(QWidget *parent = nullptr);
    ~ScheduleViewModal();

private slots:
    void on_updateScheduleViewTableView_clicked();

    void ModifyRequestedAction(int selectedID);
    void DeleteRequestedAction(int selectedID);

    void on_scheduleViewTableView_customContextMenuRequested(const QPoint &pos);

    void on_addNeweButton_clicked();

private:
    void showCustomContextMenu(const QPoint &pos, QTableView *tableView);

    void loadTable();

    UpdateScheduleViewModal* updateScheduleViewModal;

    Ui::ScheduleViewModal *ui;
    QueryModel* queryModel;
};

#endif // SCHEDULEVIEWMODAL_H
