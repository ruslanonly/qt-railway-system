#ifndef GETROUTEALLQUERYMODAL_H
#define GETROUTEALLQUERYMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class GetRouteAllQueryModal;
}

class GetRouteAllQueryModal : public QWidget
{
    Q_OBJECT

public:
    explicit GetRouteAllQueryModal(QWidget *parent = nullptr);
    ~GetRouteAllQueryModal();

private slots:
    void on_statusComboBox_currentIndexChanged(int index);

private:
    Ui::GetRouteAllQueryModal *ui;

    QueryModel* queryModel;
};

#endif // GETROUTEALLQUERYMODAL_H
