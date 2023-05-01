#ifndef ADDTICKETMODAL_H
#define ADDTICKETMODAL_H

#include <QWidget>
#include <QSqlQueryModel>

#include "database/querymodel.h"

namespace Ui {
class AddTicketModal;
}

class AddTicketModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddTicketModal(QWidget *parent = nullptr);
    ~AddTicketModal();

private slots:
    void on_addButton_clicked();

    void on_railCarNoComboBox_currentIndexChanged(int index);

    void on_scheduleComboBox_currentIndexChanged(int index);

private:
    Ui::AddTicketModal *ui;

    QueryModel* queryModel;
    QSqlQueryModel* seatNoModel;
};

#endif // ADDTICKETMODAL_H
