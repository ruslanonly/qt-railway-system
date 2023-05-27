#ifndef CURSORUPDATESCHEDULETRAINMODAL_H
#define CURSORUPDATESCHEDULETRAINMODAL_H

#include <QWidget>

#include "database/querymodel.h"

namespace Ui {
class CursorUpdateScheduleTrainModal;
}

class CursorUpdateScheduleTrainModal : public QWidget
{
    Q_OBJECT

public:
    explicit CursorUpdateScheduleTrainModal(QWidget *parent = nullptr);
    ~CursorUpdateScheduleTrainModal();

private slots:
    void on_replaceButton_clicked();

private:
    Ui::CursorUpdateScheduleTrainModal *ui;

    QueryModel *queryModel;
};

#endif // CURSORUPDATESCHEDULETRAINMODAL_H
