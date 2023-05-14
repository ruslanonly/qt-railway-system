#ifndef GETPASSENGERADDITIONALMODAL_H
#define GETPASSENGERADDITIONALMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetPassengerAdditionalModal;
}

class GetPassengerAdditionalModal : public QWidget
{
    Q_OBJECT

public:
    explicit GetPassengerAdditionalModal(QWidget *parent = nullptr);
    ~GetPassengerAdditionalModal();

private slots:
    void on_showSelectButton_clicked();

    void on_showAnyButton_clicked();

private:
    Ui::GetPassengerAdditionalModal *ui;

    QueryModel* queryModel;
    QSqlQueryModel* tableViewQueryModel;
};

#endif // GETPASSENGERADDITIONALMODAL_H
