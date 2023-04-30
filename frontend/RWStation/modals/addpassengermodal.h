#ifndef ADDPASSENGERMODAL_H
#define ADDPASSENGERMODAL_H

#include <QWidget>

namespace Ui {
class AddPassengerModal;
}

class AddPassengerModal : public QWidget
{
    Q_OBJECT

public:
    explicit AddPassengerModal(QWidget *parent = nullptr);
    ~AddPassengerModal();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddPassengerModal *ui;
};

#endif // ADDPASSENGERMODAL_H
