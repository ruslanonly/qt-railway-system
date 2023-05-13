/********************************************************************************
** Form generated from reading UI file 'getscheduleticketsamount.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSCHEDULETICKETSAMOUNT_H
#define UI_GETSCHEDULETICKETSAMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetScheduleTicketsAmount
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *ticketAmountsTableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *percentageSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *updateTicketsTableViewButton;

    void setupUi(QWidget *GetScheduleTicketsAmount)
    {
        if (GetScheduleTicketsAmount->objectName().isEmpty())
            GetScheduleTicketsAmount->setObjectName("GetScheduleTicketsAmount");
        GetScheduleTicketsAmount->resize(559, 428);
        horizontalLayout = new QHBoxLayout(GetScheduleTicketsAmount);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetScheduleTicketsAmount);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        ticketAmountsTableView = new QTableView(GetScheduleTicketsAmount);
        ticketAmountsTableView->setObjectName("ticketAmountsTableView");

        verticalLayout_2->addWidget(ticketAmountsTableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GetScheduleTicketsAmount);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        percentageSpinBox = new QSpinBox(GetScheduleTicketsAmount);
        percentageSpinBox->setObjectName("percentageSpinBox");
        percentageSpinBox->setMinimumSize(QSize(50, 0));
        percentageSpinBox->setMaximumSize(QSize(100, 16777215));
        percentageSpinBox->setMaximum(100);
        percentageSpinBox->setSingleStep(10);
        percentageSpinBox->setValue(10);
        percentageSpinBox->setDisplayIntegerBase(10);

        horizontalLayout_3->addWidget(percentageSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        updateTicketsTableViewButton = new QPushButton(GetScheduleTicketsAmount);
        updateTicketsTableViewButton->setObjectName("updateTicketsTableViewButton");
        updateTicketsTableViewButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(updateTicketsTableViewButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetScheduleTicketsAmount);

        QMetaObject::connectSlotsByName(GetScheduleTicketsAmount);
    } // setupUi

    void retranslateUi(QWidget *GetScheduleTicketsAmount)
    {
        GetScheduleTicketsAmount->setWindowTitle(QCoreApplication::translate("GetScheduleTicketsAmount", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetScheduleTicketsAmount", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\321\203\320\277\320\273\320\265\320\275\320\275\321\213\321\205 \320\261\320\270\320\273\320\265\321\202\320\276\320\262 \320\275\320\260 \321\200\320\265\320\271\321\201\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("GetScheduleTicketsAmount", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \320\262\321\213\320\272\321\203\320\277\320\273\320\265\320\275\320\275\321\213\321\205 \320\261\320\270\320\273\320\265\321\202\320\276\320\262 (\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\321\203\320\277\320\273\320\265\320\275\320\275\321\213\321\205 \320\261\320\270\320\273\320\265\321\202\320\276\320\262 \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\261\320\276\320\273\321\214\321\210\320\265 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\271 \320\264\320\276\320\273\320\270 \320\276\321\202 \320\276\320\261\321\211\320\265\320\263\320\276 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \320\261\320\270\320\273\320\265\321\202\320\276\320\262 \320\275\320\260 \320\277\320\276\320\265\320\267\320\264)", nullptr));
        percentageSpinBox->setSuffix(QCoreApplication::translate("GetScheduleTicketsAmount", " %", nullptr));
        updateTicketsTableViewButton->setText(QCoreApplication::translate("GetScheduleTicketsAmount", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetScheduleTicketsAmount: public Ui_GetScheduleTicketsAmount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSCHEDULETICKETSAMOUNT_H
