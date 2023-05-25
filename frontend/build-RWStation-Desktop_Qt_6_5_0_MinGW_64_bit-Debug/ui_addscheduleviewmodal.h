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
#include <QtWidgets/QSpinBox>
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
    QVBoxLayout *inputGroup_11;
    QLabel *firstClassPriceLabel;
    QSpinBox *firstClassPriceInput;
    QVBoxLayout *inputGroup_10;
    QLabel *trainTypeLabel;
    QComboBox *trainTypeComboBox;
    QVBoxLayout *inputGroup_13;
    QLabel *secondPriceClassLabel;
    QSpinBox *secondPriceClassInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *saveChangesButton;
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

        inputGroup_11 = new QVBoxLayout();
        inputGroup_11->setSpacing(5);
        inputGroup_11->setObjectName("inputGroup_11");
        firstClassPriceLabel = new QLabel(AddScheduleViewModal);
        firstClassPriceLabel->setObjectName("firstClassPriceLabel");

        inputGroup_11->addWidget(firstClassPriceLabel);

        firstClassPriceInput = new QSpinBox(AddScheduleViewModal);
        firstClassPriceInput->setObjectName("firstClassPriceInput");
        firstClassPriceInput->setMinimum(1);
        firstClassPriceInput->setMaximum(20000);
        firstClassPriceInput->setSingleStep(100);
        firstClassPriceInput->setValue(100);

        inputGroup_11->addWidget(firstClassPriceInput);


        gridLayout->addLayout(inputGroup_11, 2, 0, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        trainTypeLabel = new QLabel(AddScheduleViewModal);
        trainTypeLabel->setObjectName("trainTypeLabel");

        inputGroup_10->addWidget(trainTypeLabel);

        trainTypeComboBox = new QComboBox(AddScheduleViewModal);
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->setObjectName("trainTypeComboBox");

        inputGroup_10->addWidget(trainTypeComboBox);


        gridLayout->addLayout(inputGroup_10, 1, 1, 1, 1);

        inputGroup_13 = new QVBoxLayout();
        inputGroup_13->setSpacing(5);
        inputGroup_13->setObjectName("inputGroup_13");
        secondPriceClassLabel = new QLabel(AddScheduleViewModal);
        secondPriceClassLabel->setObjectName("secondPriceClassLabel");

        inputGroup_13->addWidget(secondPriceClassLabel);

        secondPriceClassInput = new QSpinBox(AddScheduleViewModal);
        secondPriceClassInput->setObjectName("secondPriceClassInput");
        secondPriceClassInput->setMinimum(1);
        secondPriceClassInput->setMaximum(20000);
        secondPriceClassInput->setSingleStep(100);
        secondPriceClassInput->setValue(100);

        inputGroup_13->addWidget(secondPriceClassInput);


        gridLayout->addLayout(inputGroup_13, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        saveChangesButton = new QPushButton(AddScheduleViewModal);
        saveChangesButton->setObjectName("saveChangesButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveChangesButton->sizePolicy().hasHeightForWidth());
        saveChangesButton->setSizePolicy(sizePolicy);
        saveChangesButton->setCursor(QCursor(Qt::PointingHandCursor));
        saveChangesButton->setFlat(false);

        formLayout->addWidget(saveChangesButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddScheduleViewModal);

        saveChangesButton->setDefault(false);


        QMetaObject::connectSlotsByName(AddScheduleViewModal);
    } // setupUi

    void retranslateUi(QWidget *AddScheduleViewModal)
    {
        AddScheduleViewModal->setWindowTitle(QCoreApplication::translate("AddScheduleViewModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        arrDateLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        depDateLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        routeNameLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        trainNameLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        firstClassPriceLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\272\320\273\320\260\321\201\321\201\320\260", nullptr));
        trainTypeLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\242\320\270\320\277 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        trainTypeComboBox->setItemText(0, QCoreApplication::translate("AddScheduleViewModal", "\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));
        trainTypeComboBox->setItemText(1, QCoreApplication::translate("AddScheduleViewModal", "\321\201\320\272\320\276\321\200\321\213\320\271-\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));
        trainTypeComboBox->setItemText(2, QCoreApplication::translate("AddScheduleViewModal", "\321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\275\320\276\320\271-\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));

        secondPriceClassLabel->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\272\320\273\320\260\321\201\321\201\320\260", nullptr));
        saveChangesButton->setText(QCoreApplication::translate("AddScheduleViewModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddScheduleViewModal: public Ui_AddScheduleViewModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCHEDULEVIEWMODAL_H
