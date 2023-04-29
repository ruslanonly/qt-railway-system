/********************************************************************************
** Form generated from reading UI file 'updateroutemodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEROUTEMODAL_H
#define UI_UPDATEROUTEMODAL_H

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

class Ui_UpdateRouteModal
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
    QPushButton *updateButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *UpdateRouteModal)
    {
        if (UpdateRouteModal->objectName().isEmpty())
            UpdateRouteModal->setObjectName("UpdateRouteModal");
        UpdateRouteModal->resize(450, 350);
        UpdateRouteModal->setMinimumSize(QSize(450, 350));
        UpdateRouteModal->setMaximumSize(QSize(450, 350));
        verticalLayout = new QVBoxLayout(UpdateRouteModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UpdateRouteModal);
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
        arrivalStationLabel = new QLabel(UpdateRouteModal);
        arrivalStationLabel->setObjectName("arrivalStationLabel");

        inputGroup_8->addWidget(arrivalStationLabel);

        arrStationComboBox = new QComboBox(UpdateRouteModal);
        arrStationComboBox->setObjectName("arrStationComboBox");

        inputGroup_8->addWidget(arrStationComboBox);


        gridLayout->addLayout(inputGroup_8, 1, 1, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        arrivalDateLabel = new QLabel(UpdateRouteModal);
        arrivalDateLabel->setObjectName("arrivalDateLabel");

        inputGroup_9->addWidget(arrivalDateLabel);

        arrDateInput = new QDateTimeEdit(UpdateRouteModal);
        arrDateInput->setObjectName("arrDateInput");

        inputGroup_9->addWidget(arrDateInput);


        gridLayout->addLayout(inputGroup_9, 2, 1, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        departureDateLabel = new QLabel(UpdateRouteModal);
        departureDateLabel->setObjectName("departureDateLabel");

        inputGroup_10->addWidget(departureDateLabel);

        depDateInput = new QDateTimeEdit(UpdateRouteModal);
        depDateInput->setObjectName("depDateInput");

        inputGroup_10->addWidget(depDateInput);


        gridLayout->addLayout(inputGroup_10, 2, 0, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        departureStationLabel = new QLabel(UpdateRouteModal);
        departureStationLabel->setObjectName("departureStationLabel");

        inputGroup_7->addWidget(departureStationLabel);

        depStationComboBox = new QComboBox(UpdateRouteModal);
        depStationComboBox->setObjectName("depStationComboBox");

        inputGroup_7->addWidget(depStationComboBox);


        gridLayout->addLayout(inputGroup_7, 1, 0, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        nameLabel = new QLabel(UpdateRouteModal);
        nameLabel->setObjectName("nameLabel");

        inputGroup_6->addWidget(nameLabel);

        nameInput = new QLineEdit(UpdateRouteModal);
        nameInput->setObjectName("nameInput");
        nameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_6->addWidget(nameInput);


        gridLayout->addLayout(inputGroup_6, 0, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        updateButton = new QPushButton(UpdateRouteModal);
        updateButton->setObjectName("updateButton");
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(updateButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateRouteModal);

        QMetaObject::connectSlotsByName(UpdateRouteModal);
    } // setupUi

    void retranslateUi(QWidget *UpdateRouteModal)
    {
        UpdateRouteModal->setWindowTitle(QCoreApplication::translate("UpdateRouteModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("UpdateRouteModal", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        arrivalStationLabel->setText(QCoreApplication::translate("UpdateRouteModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        arrivalDateLabel->setText(QCoreApplication::translate("UpdateRouteModal", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        departureDateLabel->setText(QCoreApplication::translate("UpdateRouteModal", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        departureStationLabel->setText(QCoreApplication::translate("UpdateRouteModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("UpdateRouteModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateRouteModal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateRouteModal: public Ui_UpdateRouteModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEROUTEMODAL_H
