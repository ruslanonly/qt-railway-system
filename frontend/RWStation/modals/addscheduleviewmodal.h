#ifndef ADDSCHEDULEVIEWMODAL_H
#define ADDSCHEDULEVIEWMODAL_H

#include <QWidget>

namespace Ui {
class AddScheduleViewModal;
}

class AddScheduleViewModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddScheduleViewModal(QWidget *parent = nullptr);
    ~AddScheduleViewModal();

private:
    Ui::AddScheduleViewModal *ui;
};

#endif // ADDSCHEDULEVIEWMODAL_H
