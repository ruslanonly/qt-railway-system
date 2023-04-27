/********************************************************************************
** Form generated from reading UI file 'addstationmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTATIONMODAL_H
#define UI_ADDSTATIONMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStationModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QVBoxLayout *inputsLayout;
    QVBoxLayout *inputGroup_2;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QVBoxLayout *inputGroup_3;
    QLabel *cityLabel;
    QLineEdit *cityInput;
    QVBoxLayout *inputGroup;
    QLabel *countryLabel;
    QLineEdit *countryInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddStationModal)
    {
        if (AddStationModal->objectName().isEmpty())
            AddStationModal->setObjectName("AddStationModal");
        AddStationModal->resize(350, 302);
        AddStationModal->setMinimumSize(QSize(350, 300));
        AddStationModal->setMaximumSize(QSize(350, 302));
        verticalLayout = new QVBoxLayout(AddStationModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddStationModal);
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
        inputsLayout = new QVBoxLayout();
        inputsLayout->setSpacing(10);
        inputsLayout->setObjectName("inputsLayout");
        inputGroup_2 = new QVBoxLayout();
        inputGroup_2->setSpacing(5);
        inputGroup_2->setObjectName("inputGroup_2");
        nameLabel = new QLabel(AddStationModal);
        nameLabel->setObjectName("nameLabel");

        inputGroup_2->addWidget(nameLabel);

        nameInput = new QLineEdit(AddStationModal);
        nameInput->setObjectName("nameInput");
        nameInput->setEchoMode(QLineEdit::Password);

        inputGroup_2->addWidget(nameInput);


        inputsLayout->addLayout(inputGroup_2);

        inputGroup_3 = new QVBoxLayout();
        inputGroup_3->setSpacing(5);
        inputGroup_3->setObjectName("inputGroup_3");
        cityLabel = new QLabel(AddStationModal);
        cityLabel->setObjectName("cityLabel");

        inputGroup_3->addWidget(cityLabel);

        cityInput = new QLineEdit(AddStationModal);
        cityInput->setObjectName("cityInput");

        inputGroup_3->addWidget(cityInput);


        inputsLayout->addLayout(inputGroup_3);

        inputGroup = new QVBoxLayout();
        inputGroup->setSpacing(5);
        inputGroup->setObjectName("inputGroup");
        countryLabel = new QLabel(AddStationModal);
        countryLabel->setObjectName("countryLabel");

        inputGroup->addWidget(countryLabel);

        countryInput = new QLineEdit(AddStationModal);
        countryInput->setObjectName("countryInput");

        inputGroup->addWidget(countryInput);


        inputsLayout->addLayout(inputGroup);


        formLayout->addLayout(inputsLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(AddStationModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddStationModal);

        QMetaObject::connectSlotsByName(AddStationModal);
    } // setupUi

    void retranslateUi(QWidget *AddStationModal)
    {
        AddStationModal->setWindowTitle(QCoreApplication::translate("AddStationModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddStationModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddStationModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        cityLabel->setText(QCoreApplication::translate("AddStationModal", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        countryLabel->setText(QCoreApplication::translate("AddStationModal", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        addButton->setText(QCoreApplication::translate("AddStationModal", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStationModal: public Ui_AddStationModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTATIONMODAL_H
