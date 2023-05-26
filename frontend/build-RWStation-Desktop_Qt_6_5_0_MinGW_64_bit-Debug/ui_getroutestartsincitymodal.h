/********************************************************************************
** Form generated from reading UI file 'getroutestartsincitymodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETROUTESTARTSINCITYMODAL_H
#define UI_GETROUTESTARTSINCITYMODAL_H

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

class Ui_GetRouteStartsInCityModal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *cityNameInput;
    QPushButton *updateTableViewButton;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *GetRouteStartsInCityModal)
    {
        if (GetRouteStartsInCityModal->objectName().isEmpty())
            GetRouteStartsInCityModal->setObjectName("GetRouteStartsInCityModal");
        GetRouteStartsInCityModal->resize(600, 500);
        GetRouteStartsInCityModal->setMinimumSize(QSize(600, 500));
        GetRouteStartsInCityModal->setMaximumSize(QSize(600, 500));
        horizontalLayout = new QHBoxLayout(GetRouteStartsInCityModal);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetRouteStartsInCityModal);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        tableView = new QTableView(GetRouteStartsInCityModal);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GetRouteStartsInCityModal);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        cityNameInput = new QLineEdit(GetRouteStartsInCityModal);
        cityNameInput->setObjectName("cityNameInput");
        cityNameInput->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(cityNameInput);

        updateTableViewButton = new QPushButton(GetRouteStartsInCityModal);
        updateTableViewButton->setObjectName("updateTableViewButton");
        updateTableViewButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(updateTableViewButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetRouteStartsInCityModal);

        QMetaObject::connectSlotsByName(GetRouteStartsInCityModal);
    } // setupUi

    void retranslateUi(QWidget *GetRouteStartsInCityModal)
    {
        GetRouteStartsInCityModal->setWindowTitle(QCoreApplication::translate("GetRouteStartsInCityModal", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetRouteStartsInCityModal", "\320\237\320\276\320\270\321\201\320\272 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\275\320\260\321\207\320\270\320\275\320\260\320\265\321\202\321\201\321\217 \320\270\320\267 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\263\320\276\321\200\320\276\320\264\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("GetRouteStartsInCityModal", "\320\223\320\276\321\200\320\276\320\264 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\264\320\273\321\217 \320\270\321\211\321\203\321\211\320\265\320\263\320\276\321\201\321\217 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        updateTableViewButton->setText(QCoreApplication::translate("GetRouteStartsInCityModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetRouteStartsInCityModal: public Ui_GetRouteStartsInCityModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETROUTESTARTSINCITYMODAL_H
