#ifndef ADDROUTEMODAL_H
#define ADDROUTEMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class AddRouteModal;
}

class AddRouteModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddRouteModal(QWidget *parent = nullptr);
    ~AddRouteModal();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddRouteModal *ui;
    QueryModel* queryModel;
};

#endif // ADDROUTEMODAL_H
