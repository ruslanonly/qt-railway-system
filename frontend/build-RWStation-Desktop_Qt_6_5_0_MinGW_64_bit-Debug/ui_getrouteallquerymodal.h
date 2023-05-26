/********************************************************************************
** Form generated from reading UI file 'getrouteallquerymodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETROUTEALLQUERYMODAL_H
#define UI_GETROUTEALLQUERYMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetRouteAllQueryModal
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *statusComboBox;

    void setupUi(QWidget *GetRouteAllQueryModal)
    {
        if (GetRouteAllQueryModal->objectName().isEmpty())
            GetRouteAllQueryModal->setObjectName("GetRouteAllQueryModal");
        GetRouteAllQueryModal->resize(600, 500);
        GetRouteAllQueryModal->setMinimumSize(QSize(600, 500));
        GetRouteAllQueryModal->setMaximumSize(QSize(600, 500));
        horizontalLayout = new QHBoxLayout(GetRouteAllQueryModal);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(GetRouteAllQueryModal);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        tableView = new QTableView(GetRouteAllQueryModal);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(GetRouteAllQueryModal);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        horizontalLayout_4->addWidget(label_4);

        statusComboBox = new QComboBox(GetRouteAllQueryModal);
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->setObjectName("statusComboBox");
        statusComboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(statusComboBox);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GetRouteAllQueryModal);

        QMetaObject::connectSlotsByName(GetRouteAllQueryModal);
    } // setupUi

    void retranslateUi(QWidget *GetRouteAllQueryModal)
    {
        GetRouteAllQueryModal->setWindowTitle(QCoreApplication::translate("GetRouteAllQueryModal", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GetRouteAllQueryModal", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260\321\205", nullptr));
        label_4->setText(QCoreApplication::translate("GetRouteAllQueryModal", "\320\222\321\201\320\265 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\213, \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\262\321\201\320\265 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\270\320\274\320\265\321\216\321\202 \321\201\321\202\320\260\321\202\321\203\321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        statusComboBox->setItemText(0, QCoreApplication::translate("GetRouteAllQueryModal", "\320\275\320\265\321\202 \320\274\320\265\321\201\321\202", nullptr));
        statusComboBox->setItemText(1, QCoreApplication::translate("GetRouteAllQueryModal", "\320\265\321\201\321\202\321\214 \320\274\320\265\321\201\321\202\320\260", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GetRouteAllQueryModal: public Ui_GetRouteAllQueryModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETROUTEALLQUERYMODAL_H
