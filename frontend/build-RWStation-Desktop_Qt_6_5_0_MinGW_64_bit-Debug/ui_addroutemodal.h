/********************************************************************************
** Form generated from reading UI file 'addroutemodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROUTEMODAL_H
#define UI_ADDROUTEMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRouteModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_8;
    QLabel *arrivalStationLabel;
    QComboBox *arrStationComboBox;
    QVBoxLayout *inputGroup_9;
    QLabel *arrivalDateLabel;
    QDateTimeEdit *arrDateInput;
    QVBoxLayout *inputGroup_10;
    QLabel *departureDateLabel;
    QDateTimeEdit *depDateInput;
    QVBoxLayout *inputGroup_7;
    QLabel *departureStationLabel;
    QComboBox *depStationComboBox;
    QVBoxLayout *inputGroup_6;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddRouteModal)
    {
        if (AddRouteModal->objectName().isEmpty())
            AddRouteModal->setObjectName("AddRouteModal");
        AddRouteModal->resize(450, 350);
        AddRouteModal->setMinimumSize(QSize(450, 350));
        AddRouteModal->setMaximumSize(QSize(450, 350));
        verticalLayout = new QVBoxLayout(AddRouteModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddRouteModal);
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
        arrivalStationLabel = new QLabel(AddRouteModal);
        arrivalStationLabel->setObjectName("arrivalStationLabel");

        inputGroup_8->addWidget(arrivalStationLabel);

        arrStationComboBox = new QComboBox(AddRouteModal);
        arrStationComboBox->setObjectName("arrStationComboBox");

        inputGroup_8->addWidget(arrStationComboBox);


        gridLayout->addLayout(inputGroup_8, 1, 1, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        arrivalDateLabel = new QLabel(AddRouteModal);
        arrivalDateLabel->setObjectName("arrivalDateLabel");

        inputGroup_9->addWidget(arrivalDateLabel);

        arrDateInput = new QDateTimeEdit(AddRouteModal);
        arrDateInput->setObjectName("arrDateInput");

        inputGroup_9->addWidget(arrDateInput);


        gridLayout->addLayout(inputGroup_9, 2, 1, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        departureDateLabel = new QLabel(AddRouteModal);
        departureDateLabel->setObjectName("departureDateLabel");

        inputGroup_10->addWidget(departureDateLabel);

        depDateInput = new QDateTimeEdit(AddRouteModal);
        depDateInput->setObjectName("depDateInput");

        inputGroup_10->addWidget(depDateInput);


        gridLayout->addLayout(inputGroup_10, 2, 0, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        departureStationLabel = new QLabel(AddRouteModal);
        departureStationLabel->setObjectName("departureStationLabel");

        inputGroup_7->addWidget(departureStationLabel);

        depStationComboBox = new QComboBox(AddRouteModal);
        depStationComboBox->setObjectName("depStationComboBox");

        inputGroup_7->addWidget(depStationComboBox);


        gridLayout->addLayout(inputGroup_7, 1, 0, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        nameLabel = new QLabel(AddRouteModal);
        nameLabel->setObjectName("nameLabel");

        inputGroup_6->addWidget(nameLabel);

        nameInput = new QLineEdit(AddRouteModal);
        nameInput->setObjectName("nameInput");
        nameInput->setEchoMode(QLineEdit::Password);

        inputGroup_6->addWidget(nameInput);


        gridLayout->addLayout(inputGroup_6, 0, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(AddRouteModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddRouteModal);

        QMetaObject::connectSlotsByName(AddRouteModal);
    } // setupUi

    void retranslateUi(QWidget *AddRouteModal)
    {
        AddRouteModal->setWindowTitle(QCoreApplication::translate("AddRouteModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddRouteModal", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        arrivalStationLabel->setText(QCoreApplication::translate("AddRouteModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        arrivalDateLabel->setText(QCoreApplication::translate("AddRouteModal", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        departureDateLabel->setText(QCoreApplication::translate("AddRouteModal", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        departureStationLabel->setText(QCoreApplication::translate("AddRouteModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddRouteModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        addButton->setText(QCoreApplication::translate("AddRouteModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddRouteModal: public Ui_AddRouteModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROUTEMODAL_H
