/********************************************************************************
** Form generated from reading UI file 'getpassengeradditionalmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPASSENGERADDITIONALMODAL_H
#define UI_GETPASSENGERADDITIONALMODAL_H

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

class Ui_GetPassengerAdditionalModal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *passengerTableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *showSelectButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *showAnyButton;

    void setupUi(QWidget *GetPassengerAdditionalModal)
    {
        if (GetPassengerAdditionalModal->objectName().isEmpty())
            GetPassengerAdditionalModal->setObjectName("GetPassengerAdditionalModal");
        GetPassengerAdditionalModal->resize(592, 474);
        horizontalLayout = new QHBoxLayout(GetPassengerAdditionalModal);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetPassengerAdditionalModal);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        passengerTableView = new QTableView(GetPassengerAdditionalModal);
        passengerTableView->setObjectName("passengerTableView");

        verticalLayout_2->addWidget(passengerTableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(GetPassengerAdditionalModal);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        horizontalLayout_4->addWidget(label_4);

        showSelectButton = new QPushButton(GetPassengerAdditionalModal);
        showSelectButton->setObjectName("showSelectButton");

        horizontalLayout_4->addWidget(showSelectButton);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GetPassengerAdditionalModal);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        showAnyButton = new QPushButton(GetPassengerAdditionalModal);
        showAnyButton->setObjectName("showAnyButton");

        horizontalLayout_3->addWidget(showAnyButton);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetPassengerAdditionalModal);

        QMetaObject::connectSlotsByName(GetPassengerAdditionalModal);
    } // setupUi

    void retranslateUi(QWidget *GetPassengerAdditionalModal)
    {
        GetPassengerAdditionalModal->setWindowTitle(QCoreApplication::translate("GetPassengerAdditionalModal", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetPassengerAdditionalModal", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\320\260\321\205", nullptr));
        label_4->setText(QCoreApplication::translate("GetPassengerAdditionalModal", "\320\222\321\201\320\265 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213 \321\201 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\261\320\270\320\273\320\265\321\202\320\276\320\262 (select)", nullptr));
        showSelectButton->setText(QCoreApplication::translate("GetPassengerAdditionalModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("GetPassengerAdditionalModal", "\320\222\321\201\320\265 \320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213, \321\203 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\272\321\203\320\277\320\273\320\265\320\275\320\276 \320\261\320\276\320\273\321\214\321\210\320\265 \320\276\320\264\320\275\320\276\320\263\320\276 \320\261\320\270\320\273\320\265\321\202\320\260 (any)", nullptr));
        showAnyButton->setText(QCoreApplication::translate("GetPassengerAdditionalModal", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetPassengerAdditionalModal: public Ui_GetPassengerAdditionalModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPASSENGERADDITIONALMODAL_H
