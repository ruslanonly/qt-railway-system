#ifndef UPDATEPASSENGERMODAL_H
#define UPDATEPASSENGERMODAL_H

#include <QWidget>

namespace Ui {
class UpdatePassengerModal;
}

class UpdatePassengerModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdatePassengerModal(int passengerID, QWidget *parent = nullptr);
    ~UpdatePassengerModal();

private:
    void fillData();
    Ui::UpdatePassengerModal *ui;

    int passengerID;
};

#endif // UPDATEPASSENGERMODAL_H
