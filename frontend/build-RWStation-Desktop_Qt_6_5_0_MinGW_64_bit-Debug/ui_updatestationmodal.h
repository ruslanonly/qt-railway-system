/********************************************************************************
** Form generated from reading UI file 'updatestationmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESTATIONMODAL_H
#define UI_UPDATESTATIONMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateStationModal
{
public:

    void setupUi(QWidget *UpdateStationModal)
    {
        if (UpdateStationModal->objectName().isEmpty())
            UpdateStationModal->setObjectName("UpdateStationModal");
        UpdateStationModal->resize(400, 300);

        retranslateUi(UpdateStationModal);

        QMetaObject::connectSlotsByName(UpdateStationModal);
    } // setupUi

    void retranslateUi(QWidget *UpdateStationModal)
    {
        UpdateStationModal->setWindowTitle(QCoreApplication::translate("UpdateStationModal", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateStationModal: public Ui_UpdateStationModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESTATIONMODAL_H
