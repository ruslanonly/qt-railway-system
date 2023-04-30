/********************************************************************************
** Form generated from reading UI file 'updatepassengermodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPASSENGERMODAL_H
#define UI_UPDATEPASSENGERMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdatePassengerModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_11;
    QLabel *pSerialNoLabel;
    QSpinBox *pSerialNoInput;
    QVBoxLayout *inputGroup_10;
    QLabel *pCodeLabel;
    QSpinBox *pCodeInput;
    QVBoxLayout *inputGroup_6;
    QLabel *lastNameLabel;
    QLineEdit *lastNameInput;
    QVBoxLayout *inputGroup_9;
    QLabel *firstNameLabel;
    QLineEdit *firstNameInput;
    QVBoxLayout *inputGroup_12;
    QLabel *middleNameLabel;
    QLineEdit *middleNameInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *UpdatePassengerModal)
    {
        if (UpdatePassengerModal->objectName().isEmpty())
            UpdatePassengerModal->setObjectName("UpdatePassengerModal");
        UpdatePassengerModal->resize(500, 300);
        UpdatePassengerModal->setMinimumSize(QSize(500, 300));
        UpdatePassengerModal->setMaximumSize(QSize(500, 308));
        verticalLayout = new QVBoxLayout(UpdatePassengerModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UpdatePassengerModal);
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
        gridLayout->setHorizontalSpacing(40);
        inputGroup_11 = new QVBoxLayout();
        inputGroup_11->setSpacing(5);
        inputGroup_11->setObjectName("inputGroup_11");
        pSerialNoLabel = new QLabel(UpdatePassengerModal);
        pSerialNoLabel->setObjectName("pSerialNoLabel");

        inputGroup_11->addWidget(pSerialNoLabel);

        pSerialNoInput = new QSpinBox(UpdatePassengerModal);
        pSerialNoInput->setObjectName("pSerialNoInput");
        pSerialNoInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pSerialNoInput->setMinimum(1000);
        pSerialNoInput->setMaximum(9999);
        pSerialNoInput->setValue(9999);

        inputGroup_11->addWidget(pSerialNoInput);


        gridLayout->addLayout(inputGroup_11, 0, 1, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        pCodeLabel = new QLabel(UpdatePassengerModal);
        pCodeLabel->setObjectName("pCodeLabel");

        inputGroup_10->addWidget(pCodeLabel);

        pCodeInput = new QSpinBox(UpdatePassengerModal);
        pCodeInput->setObjectName("pCodeInput");
        pCodeInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pCodeInput->setMinimum(100000);
        pCodeInput->setMaximum(999999);
        pCodeInput->setValue(999999);

        inputGroup_10->addWidget(pCodeInput);


        gridLayout->addLayout(inputGroup_10, 1, 1, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        lastNameLabel = new QLabel(UpdatePassengerModal);
        lastNameLabel->setObjectName("lastNameLabel");

        inputGroup_6->addWidget(lastNameLabel);

        lastNameInput = new QLineEdit(UpdatePassengerModal);
        lastNameInput->setObjectName("lastNameInput");
        lastNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_6->addWidget(lastNameInput);


        gridLayout->addLayout(inputGroup_6, 0, 0, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        firstNameLabel = new QLabel(UpdatePassengerModal);
        firstNameLabel->setObjectName("firstNameLabel");

        inputGroup_9->addWidget(firstNameLabel);

        firstNameInput = new QLineEdit(UpdatePassengerModal);
        firstNameInput->setObjectName("firstNameInput");
        firstNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_9->addWidget(firstNameInput);


        gridLayout->addLayout(inputGroup_9, 1, 0, 1, 1);

        inputGroup_12 = new QVBoxLayout();
        inputGroup_12->setSpacing(5);
        inputGroup_12->setObjectName("inputGroup_12");
        middleNameLabel = new QLabel(UpdatePassengerModal);
        middleNameLabel->setObjectName("middleNameLabel");

        inputGroup_12->addWidget(middleNameLabel);

        middleNameInput = new QLineEdit(UpdatePassengerModal);
        middleNameInput->setObjectName("middleNameInput");
        middleNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_12->addWidget(middleNameInput);


        gridLayout->addLayout(inputGroup_12, 2, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(UpdatePassengerModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdatePassengerModal);

        QMetaObject::connectSlotsByName(UpdatePassengerModal);
    } // setupUi

    void retranslateUi(QWidget *UpdatePassengerModal)
    {
        UpdatePassengerModal->setWindowTitle(QCoreApplication::translate("UpdatePassengerModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200", nullptr));
        pSerialNoLabel->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        pCodeLabel->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\230\320\274\321\217", nullptr));
        middleNameLabel->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        addButton->setText(QCoreApplication::translate("UpdatePassengerModal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdatePassengerModal: public Ui_UpdatePassengerModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPASSENGERMODAL_H
