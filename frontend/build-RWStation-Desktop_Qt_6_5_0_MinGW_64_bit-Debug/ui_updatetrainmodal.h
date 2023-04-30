/********************************************************************************
** Form generated from reading UI file 'updatetrainmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATETRAINMODAL_H
#define UI_UPDATETRAINMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_UpdateTrainModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_11;
    QLabel *secondClassLabel;
    QSpinBox *secondClassInput;
    QVBoxLayout *inputGroup_9;
    QLabel *railcarAmountLabel;
    QSpinBox *railcarAmountInput;
    QVBoxLayout *inputGroup_8;
    QLabel *railcarCapLabel;
    QSpinBox *railcarCapInput;
    QVBoxLayout *inputGroup_6;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QVBoxLayout *inputGroup_10;
    QLabel *firstClassLabel;
    QSpinBox *firstClassInput;
    QVBoxLayout *inputGroup_7;
    QLabel *trainTypeLabel;
    QComboBox *trainTypeComboBox;
    QVBoxLayout *inputGroup_12;
    QLabel *routeLabel;
    QComboBox *routeComboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *updateButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *UpdateTrainModal)
    {
        if (UpdateTrainModal->objectName().isEmpty())
            UpdateTrainModal->setObjectName("UpdateTrainModal");
        UpdateTrainModal->resize(500, 400);
        UpdateTrainModal->setMinimumSize(QSize(500, 400));
        UpdateTrainModal->setMaximumSize(QSize(500, 500));
        verticalLayout = new QVBoxLayout(UpdateTrainModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UpdateTrainModal);
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
        inputGroup_11 = new QVBoxLayout();
        inputGroup_11->setSpacing(5);
        inputGroup_11->setObjectName("inputGroup_11");
        secondClassLabel = new QLabel(UpdateTrainModal);
        secondClassLabel->setObjectName("secondClassLabel");

        inputGroup_11->addWidget(secondClassLabel);

        secondClassInput = new QSpinBox(UpdateTrainModal);
        secondClassInput->setObjectName("secondClassInput");
        secondClassInput->setMinimum(1);
        secondClassInput->setMaximum(20000);
        secondClassInput->setSingleStep(100);
        secondClassInput->setValue(100);

        inputGroup_11->addWidget(secondClassInput);


        gridLayout->addLayout(inputGroup_11, 3, 1, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        railcarAmountLabel = new QLabel(UpdateTrainModal);
        railcarAmountLabel->setObjectName("railcarAmountLabel");

        inputGroup_9->addWidget(railcarAmountLabel);

        railcarAmountInput = new QSpinBox(UpdateTrainModal);
        railcarAmountInput->setObjectName("railcarAmountInput");

        inputGroup_9->addWidget(railcarAmountInput);


        gridLayout->addLayout(inputGroup_9, 2, 1, 1, 1);

        inputGroup_8 = new QVBoxLayout();
        inputGroup_8->setSpacing(5);
        inputGroup_8->setObjectName("inputGroup_8");
        railcarCapLabel = new QLabel(UpdateTrainModal);
        railcarCapLabel->setObjectName("railcarCapLabel");

        inputGroup_8->addWidget(railcarCapLabel);

        railcarCapInput = new QSpinBox(UpdateTrainModal);
        railcarCapInput->setObjectName("railcarCapInput");
        railcarCapInput->setMinimum(1);
        railcarCapInput->setMaximum(200);

        inputGroup_8->addWidget(railcarCapInput);


        gridLayout->addLayout(inputGroup_8, 2, 0, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        nameLabel = new QLabel(UpdateTrainModal);
        nameLabel->setObjectName("nameLabel");

        inputGroup_6->addWidget(nameLabel);

        nameInput = new QLineEdit(UpdateTrainModal);
        nameInput->setObjectName("nameInput");
        nameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_6->addWidget(nameInput);


        gridLayout->addLayout(inputGroup_6, 0, 0, 1, 1);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        firstClassLabel = new QLabel(UpdateTrainModal);
        firstClassLabel->setObjectName("firstClassLabel");

        inputGroup_10->addWidget(firstClassLabel);

        firstClassInput = new QSpinBox(UpdateTrainModal);
        firstClassInput->setObjectName("firstClassInput");
        firstClassInput->setMinimum(1);
        firstClassInput->setMaximum(20000);
        firstClassInput->setSingleStep(100);
        firstClassInput->setValue(100);

        inputGroup_10->addWidget(firstClassInput);


        gridLayout->addLayout(inputGroup_10, 3, 0, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        trainTypeLabel = new QLabel(UpdateTrainModal);
        trainTypeLabel->setObjectName("trainTypeLabel");

        inputGroup_7->addWidget(trainTypeLabel);

        trainTypeComboBox = new QComboBox(UpdateTrainModal);
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->addItem(QString());
        trainTypeComboBox->setObjectName("trainTypeComboBox");

        inputGroup_7->addWidget(trainTypeComboBox);


        gridLayout->addLayout(inputGroup_7, 0, 1, 1, 1);

        inputGroup_12 = new QVBoxLayout();
        inputGroup_12->setSpacing(5);
        inputGroup_12->setObjectName("inputGroup_12");
        routeLabel = new QLabel(UpdateTrainModal);
        routeLabel->setObjectName("routeLabel");

        inputGroup_12->addWidget(routeLabel);

        routeComboBox = new QComboBox(UpdateTrainModal);
        routeComboBox->setObjectName("routeComboBox");

        inputGroup_12->addWidget(routeComboBox);


        gridLayout->addLayout(inputGroup_12, 4, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        updateButton = new QPushButton(UpdateTrainModal);
        updateButton->setObjectName("updateButton");
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(updateButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateTrainModal);

        QMetaObject::connectSlotsByName(UpdateTrainModal);
    } // setupUi

    void retranslateUi(QWidget *UpdateTrainModal)
    {
        UpdateTrainModal->setWindowTitle(QCoreApplication::translate("UpdateTrainModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("UpdateTrainModal", "\320\237\320\276\320\265\320\267\320\264", nullptr));
        secondClassLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\246\320\265\320\275\320\260 2 \320\272\320\273\320\260\321\201\321\201\320\260 \321\200\321\203\320\261.", nullptr));
        railcarAmountLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\260\320\263\320\276\320\275\320\276\320\262", nullptr));
        railcarCapLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        nameLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        firstClassLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\246\320\265\320\275\320\260 1 \320\272\320\273\320\260\321\201\321\201\320\260 \321\200\321\203\320\261.", nullptr));
        trainTypeLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\242\320\270\320\277 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        trainTypeComboBox->setItemText(0, QCoreApplication::translate("UpdateTrainModal", "\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));
        trainTypeComboBox->setItemText(1, QCoreApplication::translate("UpdateTrainModal", "\321\201\320\272\320\276\321\200\321\213\320\271-\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));
        trainTypeComboBox->setItemText(2, QCoreApplication::translate("UpdateTrainModal", "\321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\275\320\276\320\271-\320\277\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\201\320\272\320\270\320\271", nullptr));

        routeLabel->setText(QCoreApplication::translate("UpdateTrainModal", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateTrainModal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateTrainModal: public Ui_UpdateTrainModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATETRAINMODAL_H
