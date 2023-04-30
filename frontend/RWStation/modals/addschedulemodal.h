#ifndef ADDSCHEDULEMODAL_H
#define ADDSCHEDULEMODAL_H

#include <QWidget>

namespace Ui {
class AddScheduleModal;
}

class AddScheduleModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddScheduleModal(QWidget *parent = nullptr);
    ~AddScheduleModal();

private:
    Ui::AddScheduleModal *ui;
};

#endif // ADDSCHEDULEMODAL_H
