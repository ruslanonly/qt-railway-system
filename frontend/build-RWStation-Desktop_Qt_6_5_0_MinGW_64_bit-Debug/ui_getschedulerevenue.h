/********************************************************************************
** Form generated from reading UI file 'getschedulerevenue.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSCHEDULEREVENUE_H
#define UI_GETSCHEDULEREVENUE_H

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

class Ui_getScheduleRevenue
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *revenueTableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateRevenueTableViewButton;

    void setupUi(QWidget *getScheduleRevenue)
    {
        if (getScheduleRevenue->objectName().isEmpty())
            getScheduleRevenue->setObjectName("getScheduleRevenue");
        getScheduleRevenue->resize(613, 422);
        horizontalLayout_2 = new QHBoxLayout(getScheduleRevenue);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(getScheduleRevenue);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        revenueTableView = new QTableView(getScheduleRevenue);
        revenueTableView->setObjectName("revenueTableView");

        verticalLayout->addWidget(revenueTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateRevenueTableViewButton = new QPushButton(getScheduleRevenue);
        updateRevenueTableViewButton->setObjectName("updateRevenueTableViewButton");

        horizontalLayout->addWidget(updateRevenueTableViewButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(getScheduleRevenue);

        QMetaObject::connectSlotsByName(getScheduleRevenue);
    } // setupUi

    void retranslateUi(QWidget *getScheduleRevenue)
    {
        getScheduleRevenue->setWindowTitle(QCoreApplication::translate("getScheduleRevenue", "Form", nullptr));
        label->setText(QCoreApplication::translate("getScheduleRevenue", "\320\222\321\213\321\200\321\203\321\207\320\272\320\260 \321\200\320\265\320\271\321\201\320\276\320\262", nullptr));
        updateRevenueTableViewButton->setText(QCoreApplication::translate("getScheduleRevenue", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getScheduleRevenue: public Ui_getScheduleRevenue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSCHEDULEREVENUE_H
