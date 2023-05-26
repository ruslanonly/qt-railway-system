#ifndef GETCORRELATEDQUERIESMODAL_H
#define GETCORRELATEDQUERIESMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetCorrelatedQueriesModal;
}

class GetCorrelatedQueriesModal : public QWidget
{
    Q_OBJECT

public:
    explicit GetCorrelatedQueriesModal(QWidget *parent = nullptr);
    ~GetCorrelatedQueriesModal();

private slots:
    void on_showRouteMaxPriceButton_clicked();

    void on_showTicketForPassengerNameButton_clicked();

    void on_showPassengersWaitingScheduleButton_clicked();

private:
    Ui::GetCorrelatedQueriesModal *ui;

    QueryModel* queryModel;
};

#endif // GETCORRELATEDQUERIESMODAL_H
