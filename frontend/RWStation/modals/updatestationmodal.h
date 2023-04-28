#ifndef UPDATESTATIONMODAL_H
#define UPDATESTATIONMODAL_H

#include <QWidget>

namespace Ui {
class UpdateStationModal;
}

class UpdateStationModal : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateStationModal(int stationID, QWidget *parent = nullptr);
    ~UpdateStationModal();

private slots:
    void on_addButton_clicked();

private:
    void fillData();

    Ui::UpdateStationModal *ui;
    int stationID;
};

#endif // UPDATESTATIONMODAL_H
