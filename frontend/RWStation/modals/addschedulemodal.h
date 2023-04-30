#ifndef ADDSCHEDULEMODAL_H
#define ADDSCHEDULEMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class AddScheduleModal;
}

class AddScheduleModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddScheduleModal(QWidget *parent = nullptr);
    ~AddScheduleModal();

private slots:
    void on_addButton_clicked();

    void on_routeComboBox_currentIndexChanged(int index);

private:
    Ui::AddScheduleModal *ui;

    QueryModel* queryModel;
    QSqlQueryModel trainModel;
};

#endif // ADDSCHEDULEMODAL_H
