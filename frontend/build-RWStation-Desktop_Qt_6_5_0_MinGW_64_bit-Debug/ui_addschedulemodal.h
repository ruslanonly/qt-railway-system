/********************************************************************************
** Form generated from reading UI file 'addschedulemodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCHEDULEMODAL_H
#define UI_ADDSCHEDULEMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddScheduleModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_8;
    QLabel *trainLabel;
    QComboBox *trainComboBox;
    QVBoxLayout *inputGroup_9;
    QLabel *arrivalDateLabel;
    QDateTimeEdit *arrDateInput;
    QVBoxLayout *inputGroup_7;
    QLabel *routeLabel;
    QComboBox *routeComboBox;
    QVBoxLayout *inputGroup_10;
    QLabel *departureDateLabel;
    QDateTimeEdit *depDateInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddScheduleModal)
    {
        if (AddScheduleModal->objectName().isEmpty())
            AddScheduleModal->setObjectName("AddScheduleModal");
        AddScheduleModal->resize(400, 250);
        AddScheduleModal->setMinimumSize(QSize(400, 250));
        AddScheduleModal->setMaximumSize(QSize(400, 250));
        verticalLayout = new QVBoxLayout(AddScheduleModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddScheduleModal);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-weight: 600; font-size: 10pt; color: black;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QVBoxLayout();
        formLayout->setSpacing(20);
        formLayout->setObjectName("formLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        inputGroup_8 = new QVBoxLayout();
        inputGroup_8->setSpacing(5);
        inputGroup_8->setObjectName("inputGroup_8");
        trainLabel = new QLabel(AddScheduleModal);
        trainLabel->setObjectName("trainLabel");

        inputGroup_8->addWidget(trainLabel);

        trainComboBox = new QComboBox(AddScheduleModal);
        trainComboBox->setObjectName("trainComboBox");

        inputGroup_8->addWidget(trainComboBox);


        gridLayout->addLayout(inputGroup_8, 0, 1, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        arrivalDateLabel = new QLabel(AddScheduleModal);
        arrivalDateLabel->setObjectName("arrivalDateLabel");

        inputGroup_9->addWidget(arrivalDateLabel);

        arrDateInput = new QDateTimeEdit(AddScheduleModal);
        arrDateInput->setObjectName("arrDateInput");

        inputGroup_9->addWidget(arrDateInput);


        gridLayout->addLayout(inputGroup_9, 1, 1, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        routeLabel = new QLabel(AddScheduleModal);
        routeLabel->setObjectName("routeLabel");

        inputGroup_7->addWidget(routeLabel);

        routeComboBox = new QComboBox(AddScheduleModal);
        routeComboBox->setObjectName("routeComboBox");

        inputGroup_7->addWidget(routeComboBox);


        gridLayout->addLayout(inputGroup_7, 0, 0, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        departureDateLabel = new QLabel(AddScheduleModal);
        departureDateLabel->setObjectName("departureDateLabel");

        inputGroup_10->addWidget(departureDateLabel);

        depDateInput = new QDateTimeEdit(AddScheduleModal);
        depDateInput->setObjectName("depDateInput");

        inputGroup_10->addWidget(depDateInput);


        gridLayout->addLayout(inputGroup_10, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(AddScheduleModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddScheduleModal);

        QMetaObject::connectSlotsByName(AddScheduleModal);
    } // setupUi

    void retranslateUi(QWidget *AddScheduleModal)
    {
        AddScheduleModal->setWindowTitle(QCoreApplication::translate("AddScheduleModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddScheduleModal", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        trainLabel->setText(QCoreApplication::translate("AddScheduleModal", "\320\237\320\276\320\265\320\267\320\264", nullptr));
        arrivalDateLabel->setText(QCoreApplication::translate("AddScheduleModal", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        routeLabel->setText(QCoreApplication::translate("AddScheduleModal", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        departureDateLabel->setText(QCoreApplication::translate("AddScheduleModal", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        addButton->setText(QCoreApplication::translate("AddScheduleModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddScheduleModal: public Ui_AddScheduleModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCHEDULEMODAL_H
