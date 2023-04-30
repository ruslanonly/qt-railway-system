#ifndef UPDATETRAINMODAL_H
#define UPDATETRAINMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class UpdateTrainModal;
}

class UpdateTrainModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateTrainModal(int trainID, QWidget *parent = nullptr);
    ~UpdateTrainModal();


private slots:
    void on_updateButton_clicked();

private:
    void fillData();
    Ui::UpdateTrainModal *ui;

    QueryModel* queryModel;
    int trainID;
};

#endif // UPDATETRAINMODAL_H
