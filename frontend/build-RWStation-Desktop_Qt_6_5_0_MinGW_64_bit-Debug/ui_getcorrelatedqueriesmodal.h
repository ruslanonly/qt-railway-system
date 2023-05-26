/********************************************************************************
** Form generated from reading UI file 'getcorrelatedqueriesmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETCORRELATEDQUERIESMODAL_H
#define UI_GETCORRELATEDQUERIESMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetCorrelatedQueriesModal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *showRouteMaxPriceButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *passengerNameInput;
    QPushButton *showTicketForPassengerNameButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *showPassengersWaitingScheduleButton;

    void setupUi(QWidget *GetCorrelatedQueriesModal)
    {
        if (GetCorrelatedQueriesModal->objectName().isEmpty())
            GetCorrelatedQueriesModal->setObjectName("GetCorrelatedQueriesModal");
        GetCorrelatedQueriesModal->resize(600, 500);
        GetCorrelatedQueriesModal->setMinimumSize(QSize(600, 500));
        GetCorrelatedQueriesModal->setMaximumSize(QSize(600, 500));
        horizontalLayout = new QHBoxLayout(GetCorrelatedQueriesModal);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetCorrelatedQueriesModal);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        tableView = new QTableView(GetCorrelatedQueriesModal);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(GetCorrelatedQueriesModal);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        horizontalLayout_4->addWidget(label_4);

        showRouteMaxPriceButton = new QPushButton(GetCorrelatedQueriesModal);
        showRouteMaxPriceButton->setObjectName("showRouteMaxPriceButton");

        horizontalLayout_4->addWidget(showRouteMaxPriceButton);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(GetCorrelatedQueriesModal);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        horizontalLayout_5->addWidget(label_5);

        passengerNameInput = new QLineEdit(GetCorrelatedQueriesModal);
        passengerNameInput->setObjectName("passengerNameInput");

        horizontalLayout_5->addWidget(passengerNameInput);

        showTicketForPassengerNameButton = new QPushButton(GetCorrelatedQueriesModal);
        showTicketForPassengerNameButton->setObjectName("showTicketForPassengerNameButton");

        horizontalLayout_5->addWidget(showTicketForPassengerNameButton);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GetCorrelatedQueriesModal);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        showPassengersWaitingScheduleButton = new QPushButton(GetCorrelatedQueriesModal);
        showPassengersWaitingScheduleButton->setObjectName("showPassengersWaitingScheduleButton");

        horizontalLayout_3->addWidget(showPassengersWaitingScheduleButton);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetCorrelatedQueriesModal);

        QMetaObject::connectSlotsByName(GetCorrelatedQueriesModal);
    } // setupUi

    void retranslateUi(QWidget *GetCorrelatedQueriesModal)
    {
        GetCorrelatedQueriesModal->setWindowTitle(QCoreApplication::translate("GetCorrelatedQueriesModal", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\232\320\276\321\200\321\200\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\267\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\206\320\265\320\275\320\260 \320\261\320\270\320\273\320\265\321\202\320\260 \320\275\320\260 \320\274\320\265\321\201\321\202\320\276 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\272\320\273\320\260\321\201\321\201\320\260 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        showRouteMaxPriceButton->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\221\320\270\320\273\320\265\321\202\321\213 \320\264\320\273\321\217 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\320\260 \321\201 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \320\270\320\274\320\265\320\275\320\265\320\274 (\320\274\320\276\320\266\320\275\320\276 \320\275\320\265 \320\264\320\276\320\277\320\270\321\201\321\213\320\262\320\260\321\202\321\214 \321\201\320\273\320\276\320\262\320\276, \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\270\321\211\320\265\321\202 \321\201\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\321\217)", nullptr));
        showTicketForPassengerNameButton->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\222\321\201\320\265 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213, \320\276\320\266\320\270\320\264\320\260\321\216\321\211\320\270\320\265 \321\200\320\265\320\271\321\201", nullptr));
        showPassengersWaitingScheduleButton->setText(QCoreApplication::translate("GetCorrelatedQueriesModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetCorrelatedQueriesModal: public Ui_GetCorrelatedQueriesModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETCORRELATEDQUERIESMODAL_H
