/********************************************************************************
** Form generated from reading UI file 'getpassengeranyallmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPASSENGERANYALLMODAL_H
#define UI_GETPASSENGERANYALLMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetPassengerAnyAllModal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *passengerTableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *showAnyButton;

    void setupUi(QWidget *GetPassengerAnyAllModal)
    {
        if (GetPassengerAnyAllModal->objectName().isEmpty())
            GetPassengerAnyAllModal->setObjectName("GetPassengerAnyAllModal");
        GetPassengerAnyAllModal->resize(638, 450);
        horizontalLayout = new QHBoxLayout(GetPassengerAnyAllModal);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetPassengerAnyAllModal);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        passengerTableView = new QTableView(GetPassengerAnyAllModal);
        passengerTableView->setObjectName("passengerTableView");

        verticalLayout_2->addWidget(passengerTableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GetPassengerAnyAllModal);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        showAnyButton = new QPushButton(GetPassengerAnyAllModal);
        showAnyButton->setObjectName("showAnyButton");

        horizontalLayout_3->addWidget(showAnyButton);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetPassengerAnyAllModal);

        QMetaObject::connectSlotsByName(GetPassengerAnyAllModal);
    } // setupUi

    void retranslateUi(QWidget *GetPassengerAnyAllModal)
    {
        GetPassengerAnyAllModal->setWindowTitle(QCoreApplication::translate("GetPassengerAnyAllModal", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetPassengerAnyAllModal", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\320\260\321\205", nullptr));
        label_3->setText(QCoreApplication::translate("GetPassengerAnyAllModal", "\320\222\321\201\320\265 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213, \321\203 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\272\321\203\320\277\320\273\320\265\320\275\320\276 \320\261\320\276\320\273\321\214\321\210\320\265 \320\276\320\264\320\275\320\276\320\263\320\276 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        showAnyButton->setText(QCoreApplication::translate("GetPassengerAnyAllModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetPassengerAnyAllModal: public Ui_GetPassengerAnyAllModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPASSENGERANYALLMODAL_H
