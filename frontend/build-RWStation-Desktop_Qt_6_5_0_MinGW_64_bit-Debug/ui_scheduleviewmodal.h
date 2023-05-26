/********************************************************************************
** Form generated from reading UI file 'scheduleviewmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEVIEWMODAL_H
#define UI_SCHEDULEVIEWMODAL_H

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

class Ui_ScheduleViewModal
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *scheduleViewTableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateScheduleViewTableView;
    QPushButton *addNewButton;

    void setupUi(QWidget *ScheduleViewModal)
    {
        if (ScheduleViewModal->objectName().isEmpty())
            ScheduleViewModal->setObjectName("ScheduleViewModal");
        ScheduleViewModal->resize(886, 438);
        ScheduleViewModal->setMinimumSize(QSize(500, 400));
        horizontalLayout_2 = new QHBoxLayout(ScheduleViewModal);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ScheduleViewModal);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        scheduleViewTableView = new QTableView(ScheduleViewModal);
        scheduleViewTableView->setObjectName("scheduleViewTableView");
        scheduleViewTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        scheduleViewTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(scheduleViewTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateScheduleViewTableView = new QPushButton(ScheduleViewModal);
        updateScheduleViewTableView->setObjectName("updateScheduleViewTableView");

        horizontalLayout->addWidget(updateScheduleViewTableView);

        addNewButton = new QPushButton(ScheduleViewModal);
        addNewButton->setObjectName("addNewButton");

        horizontalLayout->addWidget(addNewButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(ScheduleViewModal);

        QMetaObject::connectSlotsByName(ScheduleViewModal);
    } // setupUi

    void retranslateUi(QWidget *ScheduleViewModal)
    {
        ScheduleViewModal->setWindowTitle(QCoreApplication::translate("ScheduleViewModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("ScheduleViewModal", "\320\240\320\265\320\271\321\201\321\213 (view)", nullptr));
        updateScheduleViewTableView->setText(QCoreApplication::translate("ScheduleViewModal", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addNewButton->setText(QCoreApplication::translate("ScheduleViewModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleViewModal: public Ui_ScheduleViewModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEVIEWMODAL_H
