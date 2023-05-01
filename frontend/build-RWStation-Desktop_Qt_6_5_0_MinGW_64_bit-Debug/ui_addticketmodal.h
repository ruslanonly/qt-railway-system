/********************************************************************************
** Form generated from reading UI file 'addticketmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTICKETMODAL_H
#define UI_ADDTICKETMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTicketModal
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_9;
    QLabel *passengerLabel;
    QComboBox *passengerComboBox;
    QVBoxLayout *inputGroup_10;
    QLabel *seatNoLabel;
    QComboBox *seatNoComboBox;
    QVBoxLayout *inputGroup_11;
    QLabel *railcarNoLabel;
    QComboBox *railCarNoComboBox;
    QVBoxLayout *inputGroup_12;
    QLabel *railcarClassLabel;
    QSpinBox *railcarClassInput;
    QVBoxLayout *inputGroup_7;
    QLabel *scheduleLabel;
    QComboBox *scheduleComboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddTicketModal)
    {
        if (AddTicketModal->objectName().isEmpty())
            AddTicketModal->setObjectName("AddTicketModal");
        AddTicketModal->resize(450, 308);
        AddTicketModal->setMinimumSize(QSize(450, 300));
        AddTicketModal->setMaximumSize(QSize(450, 308));
        verticalLayout_2 = new QVBoxLayout(AddTicketModal);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(AddTicketModal);
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
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        passengerLabel = new QLabel(AddTicketModal);
        passengerLabel->setObjectName("passengerLabel");

        inputGroup_9->addWidget(passengerLabel);

        passengerComboBox = new QComboBox(AddTicketModal);
        passengerComboBox->setObjectName("passengerComboBox");

        inputGroup_9->addWidget(passengerComboBox);


        gridLayout->addLayout(inputGroup_9, 0, 0, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        seatNoLabel = new QLabel(AddTicketModal);
        seatNoLabel->setObjectName("seatNoLabel");

        inputGroup_10->addWidget(seatNoLabel);

        seatNoComboBox = new QComboBox(AddTicketModal);
        seatNoComboBox->setObjectName("seatNoComboBox");

        inputGroup_10->addWidget(seatNoComboBox);


        gridLayout->addLayout(inputGroup_10, 3, 1, 1, 1);

        inputGroup_11 = new QVBoxLayout();
        inputGroup_11->setSpacing(5);
        inputGroup_11->setObjectName("inputGroup_11");
        railcarNoLabel = new QLabel(AddTicketModal);
        railcarNoLabel->setObjectName("railcarNoLabel");

        inputGroup_11->addWidget(railcarNoLabel);

        railCarNoComboBox = new QComboBox(AddTicketModal);
        railCarNoComboBox->setObjectName("railCarNoComboBox");

        inputGroup_11->addWidget(railCarNoComboBox);


        gridLayout->addLayout(inputGroup_11, 3, 0, 1, 1);

        inputGroup_12 = new QVBoxLayout();
        inputGroup_12->setSpacing(5);
        inputGroup_12->setObjectName("inputGroup_12");
        railcarClassLabel = new QLabel(AddTicketModal);
        railcarClassLabel->setObjectName("railcarClassLabel");

        inputGroup_12->addWidget(railcarClassLabel);

        railcarClassInput = new QSpinBox(AddTicketModal);
        railcarClassInput->setObjectName("railcarClassInput");
        railcarClassInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        railcarClassInput->setMinimum(1);
        railcarClassInput->setMaximum(2);
        railcarClassInput->setValue(2);

        inputGroup_12->addWidget(railcarClassInput);


        gridLayout->addLayout(inputGroup_12, 0, 1, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        scheduleLabel = new QLabel(AddTicketModal);
        scheduleLabel->setObjectName("scheduleLabel");

        inputGroup_7->addWidget(scheduleLabel);

        scheduleComboBox = new QComboBox(AddTicketModal);
        scheduleComboBox->setObjectName("scheduleComboBox");

        inputGroup_7->addWidget(scheduleComboBox);


        gridLayout->addLayout(inputGroup_7, 1, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(AddTicketModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddTicketModal);

        QMetaObject::connectSlotsByName(AddTicketModal);
    } // setupUi

    void retranslateUi(QWidget *AddTicketModal)
    {
        AddTicketModal->setWindowTitle(QCoreApplication::translate("AddTicketModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddTicketModal", "\320\221\320\270\320\273\320\265\321\202", nullptr));
        passengerLabel->setText(QCoreApplication::translate("AddTicketModal", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200", nullptr));
        seatNoLabel->setText(QCoreApplication::translate("AddTicketModal", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\265\321\201\321\202\320\260", nullptr));
        railcarNoLabel->setText(QCoreApplication::translate("AddTicketModal", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\260\320\263\320\276\320\275\320\260", nullptr));
        railcarClassLabel->setText(QCoreApplication::translate("AddTicketModal", "\320\232\320\273\320\260\321\201\321\201 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        scheduleLabel->setText(QCoreApplication::translate("AddTicketModal", "\320\240\320\265\320\271\321\201", nullptr));
        addButton->setText(QCoreApplication::translate("AddTicketModal", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTicketModal: public Ui_AddTicketModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTICKETMODAL_H
