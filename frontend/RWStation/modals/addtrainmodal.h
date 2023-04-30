#ifndef ADDTRAINMODAL_H
#define ADDTRAINMODAL_H

#include <QWidget>
#include "database/querymodel.h"

namespace Ui {
class AddTrainModal;
}

class AddTrainModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddTrainModal(QWidget *parent = nullptr);
    ~AddTrainModal();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddTrainModal *ui;
    QueryModel* queryModel;
};

#endif // ADDTRAINMODAL_H
