/********************************************************************************
** Form generated from reading UI file 'getschedulerevenuemodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSCHEDULEREVENUEMODAL_H
#define UI_GETSCHEDULEREVENUEMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetScheduleRevenueModal
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *revenueTableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateRevenueTableViewButton;

    void setupUi(QWidget *GetScheduleRevenueModal)
    {
        if (GetScheduleRevenueModal->objectName().isEmpty())
            GetScheduleRevenueModal->setObjectName("GetScheduleRevenueModal");
        GetScheduleRevenueModal->resize(586, 412);
        horizontalLayout_2 = new QHBoxLayout(GetScheduleRevenueModal);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(GetScheduleRevenueModal);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        revenueTableView = new QTableView(GetScheduleRevenueModal);
        revenueTableView->setObjectName("revenueTableView");

        verticalLayout->addWidget(revenueTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateRevenueTableViewButton = new QPushButton(GetScheduleRevenueModal);
        updateRevenueTableViewButton->setObjectName("updateRevenueTableViewButton");

        horizontalLayout->addWidget(updateRevenueTableViewButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(GetScheduleRevenueModal);

        QMetaObject::connectSlotsByName(GetScheduleRevenueModal);
    } // setupUi

    void retranslateUi(QWidget *GetScheduleRevenueModal)
    {
        GetScheduleRevenueModal->setWindowTitle(QCoreApplication::translate("GetScheduleRevenueModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("GetScheduleRevenueModal", "\320\222\321\213\321\200\321\203\321\207\320\272\320\260 \321\200\320\265\320\271\321\201\320\276\320\262", nullptr));
        updateRevenueTableViewButton->setText(QCoreApplication::translate("GetScheduleRevenueModal", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetScheduleRevenueModal: public Ui_GetScheduleRevenueModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSCHEDULEREVENUEMODAL_H
