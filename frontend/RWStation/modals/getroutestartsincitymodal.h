#ifndef GETROUTESTARTSINCITYMODAL_H
#define GETROUTESTARTSINCITYMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetRouteStartsInCityModal;
}

class GetRouteStartsInCityModal : public QWidget
{
    Q_OBJECT

public:
    explicit GetRouteStartsInCityModal(QWidget *parent = nullptr);
    ~GetRouteStartsInCityModal();

private slots:
    void on_updateTableViewButton_clicked();

private:
    Ui::GetRouteStartsInCityModal *ui;
    QueryModel* queryModel;
};

#endif // GETROUTESTARTSINCITYMODAL_H
