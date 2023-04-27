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
    explicit UpdateStationModal(QWidget *parent = nullptr);
    ~UpdateStationModal();

private:
    Ui::UpdateStationModal *ui;
};

#endif // UPDATESTATIONMODAL_H
