#ifndef ADDSTATIONMODAL_H
#define ADDSTATIONMODAL_H

#include <QWidget>

#include "database/databaseManager.h"
#include "database/querymodel.h"

namespace Ui {
class AddStationModal;
}

class AddStationModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddStationModal(QWidget *parent = nullptr);
    ~AddStationModal();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddStationModal *ui;
    QueryModel* queryModel;
};

#endif // ADDSTATIONMODAL_H
