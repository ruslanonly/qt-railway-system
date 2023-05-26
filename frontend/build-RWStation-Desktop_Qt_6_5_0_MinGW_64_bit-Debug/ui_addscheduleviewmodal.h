/********************************************************************************
** Form generated from reading UI file 'addscheduleviewmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCHEDULEVIEWMODAL_H
#define UI_ADDSCHEDULEVIEWMODAL_H

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

class Ui_AddScheduleViewModal
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout_3;
    QVBoxLayout *inputGroup_12;
    QLabel *arrDateLabel;
    QDateTimeEdit *arrDateInput;
    QVBoxLayout *inputGroup_16;
    QLabel *depDateLabel;
    QDateTimeEdit *depDateInput;
    QVBoxLayout *inputGroup_6;
    QLabel *routeNameLabel;
    QComboBox *routeNameComboBox;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_7;
    QLabel *trainNameLabel;
    QComboBox *trainNameComboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddScheduleViewModal)
    {
        if (AddScheduleViewModal->objectName().isEmpty())
            AddScheduleViewModal->setObjectName("AddScheduleViewModal");
        AddScheduleViewModal->resize(538, 434);
        verticalLayout_2 = new QVBoxLayout(AddScheduleViewModal);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(AddScheduleViewModal);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-weight: 600; font-size: 10pt; color: black;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QVBoxLayout();
        formLayout->setSpacing(20);
        formLayout->setObjectName("formLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3->setHorizontalSpacing(40);
        inputGroup_12 = new QVBoxLayout();
        inputGroup_12->setSpacing(5);
        inputGroup_12->setObjectName("inputGroup_12");
        arrDateLabel = new QLabel(AddScheduleViewModal);
        arrDateLabel->setObjectName("arrDateLabel");

        inputGroup_12->addWidget(arrDateLabel);

        arrDateInput = new QDateTimeEdit(AddScheduleViewModal);
        arrDateInput->setObjectName("arrDateInput");
        arrDateInput->setCalendarPopup(true);

        inputGroup_12->addWidget(arrDateInput);


        gridLayout_3->addLayout(inputGroup_12, 1, 1, 1, 1);

        inputGroup_16 = new QVBoxLayout();
        inputGroup_16->setSpacing(5);
        inputGroup_16->setObjectName("inputGroup_16");
        depDateLabel = new QLabel(AddScheduleViewModal);
        depDateLabel->setObjectName("depDateLabel");

        inputGroup_16->addWidget(depDateLabel);

        depDateInput = new QDateTimeEdit(AddScheduleViewModal);
        depDateInput->setObjectName("depDateInput");
        depDateInput->setCalendarPopup(true);

        inputGroup_16->addWidget(depDateInput);


        gridLayout_3->addLayout(inputGroup_16, 1, 0, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        routeNameLabel = new QLabel(AddScheduleViewModal);
        routeNameLabel->setObjectName("routeNameLabel");

        inputGroup_6->addWidget(routeNameLabel);

        routeNameComboBox = new QComboBox(AddScheduleViewModal);
        routeNameComboBox->setObjectName("routeNameComboBox");
        routeNameComboBox->setEditable(true);

        inputGroup_6->addWidget(routeNameComboBox);


        gridLayout_3->addLayout(inputGroup_6, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        trainNameLabel = new QLabel(AddScheduleViewModal);
        trainNameLabel->setObjectName("trainNameLabel");

        inputGroup_7->addWidget(trainNameLabel);

        trainNameComboBox = new QComboBox(AddScheduleViewModal);
        trainNameComboBox->setObjectName("trainNameComboBox");
        trainNameComboBox->setEditable(true);

        inputGroup_7->addWidget(trainNameComboBox);


        gridLayout->addLayout(inputGroup_7, 1, 0, 1, 1);


        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(AddScheduleViewModal);
        addButton->setObjectName("addButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setFlat(false);

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddScheduleViewModal);

        addButton->setDefault(false);


        QMetaObject::connectSlotsByName(AddScheduleViewModal);
    } // setupUi

    void retranslateUi(QWidget *AddScheduleViewModal)
    {
        AddScheduleViewModal->setWindowTitle(QCoreApplication::translate("AddScheduleViewModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\217 (view)", nullptr));
        arrDateLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        depDateLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        routeNameLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        trainNameLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        addButton->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddScheduleViewModal: public Ui_AddScheduleViewModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCHEDULEVIEWMODAL_H
