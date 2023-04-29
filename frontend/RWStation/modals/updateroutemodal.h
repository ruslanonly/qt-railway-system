#ifndef UPDATEROUTEMODAL_H
#define UPDATEROUTEMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class UpdateRouteModal;
}

class UpdateRouteModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateRouteModal(int routeID, QWidget *parent = nullptr);
    ~UpdateRouteModal();

private slots:
    void on_updateButton_clicked();

private:
    void fillData();

    Ui::UpdateRouteModal *ui;
    QueryModel* queryModel;
    int routeID;
};

#endif // UPDATEROUTEMODAL_H
