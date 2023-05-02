#ifndef UPDATETICKETMODAL_H
#define UPDATETICKETMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class UpdateTicketModal;
}

class UpdateTicketModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateTicketModal(int ticketID, QWidget *parent = nullptr);
    ~UpdateTicketModal();

private slots:
    void on_scheduleComboBox_currentIndexChanged(int index);

    void on_railCarNoComboBox_currentIndexChanged(int index);

    void on_updateButton_clicked();

private:
    void fillData();

    Ui::UpdateTicketModal *ui;
    QueryModel* queryModel;
    QSqlQueryModel* seatNoModel;
    int ticketID;
};

#endif // UPDATETICKETMODAL_H
