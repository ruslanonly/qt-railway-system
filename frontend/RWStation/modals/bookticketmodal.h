#ifndef BOOKTICKETMODAL_H
#define BOOKTICKETMODAL_H

#include <QWidget>
#include <QSqlQueryModel>

#include "database/querymodel.h"

namespace Ui {
class BookTicketModal;
}

class BookTicketModal : public QWidget
{
    Q_OBJECT

public:
    explicit BookTicketModal(QWidget *parent = nullptr);
    ~BookTicketModal();

private slots:
    void on_addButton_clicked();

    void on_scheduleComboBox_currentIndexChanged(int index);

    void on_railCarNoComboBox_currentIndexChanged(int index);

private:
    Ui::BookTicketModal *ui;

    QueryModel* queryModel;
    QSqlQueryModel* seatNoModel;
};

#endif // BOOKTICKETMODAL_H
