/********************************************************************************
** Form generated from reading UI file 'updatestationmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESTATIONMODAL_H
#define UI_UPDATESTATIONMODAL_H

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

class Ui_UpdateStationModal
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

    void setupUi(QWidget *UpdateStationModal)
    {
        if (UpdateStationModal->objectName().isEmpty())
            UpdateStationModal->setObjectName("UpdateStationModal");
        UpdateStationModal->resize(350, 312);
        UpdateStationModal->setMinimumSize(QSize(350, 300));
        UpdateStationModal->setMaximumSize(QSize(350, 312));
        verticalLayout = new QVBoxLayout(UpdateStationModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UpdateStationModal);
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
        nameLabel = new QLabel(UpdateStationModal);
        nameLabel->setObjectName("nameLabel");

        inputGroup_2->addWidget(nameLabel);

        nameInput = new QLineEdit(UpdateStationModal);
        nameInput->setObjectName("nameInput");
        nameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_2->addWidget(nameInput);


        inputsLayout->addLayout(inputGroup_2);

        inputGroup_3 = new QVBoxLayout();
        inputGroup_3->setSpacing(5);
        inputGroup_3->setObjectName("inputGroup_3");
        cityLabel = new QLabel(UpdateStationModal);
        cityLabel->setObjectName("cityLabel");

        inputGroup_3->addWidget(cityLabel);

        cityInput = new QLineEdit(UpdateStationModal);
        cityInput->setObjectName("cityInput");

        inputGroup_3->addWidget(cityInput);


        inputsLayout->addLayout(inputGroup_3);

        inputGroup = new QVBoxLayout();
        inputGroup->setSpacing(5);
        inputGroup->setObjectName("inputGroup");
        countryLabel = new QLabel(UpdateStationModal);
        countryLabel->setObjectName("countryLabel");

        inputGroup->addWidget(countryLabel);

        countryInput = new QLineEdit(UpdateStationModal);
        countryInput->setObjectName("countryInput");

        inputGroup->addWidget(countryInput);


        inputsLayout->addLayout(inputGroup);


        formLayout->addLayout(inputsLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(UpdateStationModal);
        addButton->setObjectName("addButton");
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(addButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateStationModal);

        QMetaObject::connectSlotsByName(UpdateStationModal);
    } // setupUi

    void retranslateUi(QWidget *UpdateStationModal)
    {
        UpdateStationModal->setWindowTitle(QCoreApplication::translate("UpdateStationModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("UpdateStationModal", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("UpdateStationModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        cityLabel->setText(QCoreApplication::translate("UpdateStationModal", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        countryLabel->setText(QCoreApplication::translate("UpdateStationModal", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        addButton->setText(QCoreApplication::translate("UpdateStationModal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateStationModal: public Ui_UpdateStationModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESTATIONMODAL_H
