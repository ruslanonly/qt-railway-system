/********************************************************************************
** Form generated from reading UI file 'bookticketmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKTICKETMODAL_H
#define UI_BOOKTICKETMODAL_H

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

class Ui_BookTicketModal
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout_3;
    QVBoxLayout *inputGroup_14;
    QLabel *pSerialNoLabel;
    QSpinBox *pSerialNoInput;
    QVBoxLayout *inputGroup_15;
    QLabel *pCodeLabel;
    QSpinBox *pCodeInput;
    QVBoxLayout *inputGroup_6;
    QLabel *lastNameLabel;
    QLineEdit *lastNameInput;
    QVBoxLayout *inputGroup_9;
    QLabel *firstNameLabel;
    QLineEdit *firstNameInput;
    QVBoxLayout *inputGroup_16;
    QLabel *middleNameLabel;
    QLineEdit *middleNameInput;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_12;
    QLabel *railcarClassLabel;
    QSpinBox *railcarClassInput;
    QVBoxLayout *inputGroup_11;
    QLabel *railcarNoLabel;
    QComboBox *railCarNoComboBox;
    QVBoxLayout *inputGroup_7;
    QLabel *scheduleLabel;
    QComboBox *scheduleComboBox;
    QVBoxLayout *inputGroup_10;
    QLabel *seatNoLabel;
    QComboBox *seatNoComboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BookTicketModal)
    {
        if (BookTicketModal->objectName().isEmpty())
            BookTicketModal->setObjectName("BookTicketModal");
        BookTicketModal->resize(600, 512);
        BookTicketModal->setMinimumSize(QSize(600, 500));
        BookTicketModal->setMaximumSize(QSize(600, 512));
        verticalLayout_2 = new QVBoxLayout(BookTicketModal);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(BookTicketModal);
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
        inputGroup_14 = new QVBoxLayout();
        inputGroup_14->setSpacing(5);
        inputGroup_14->setObjectName("inputGroup_14");
        pSerialNoLabel = new QLabel(BookTicketModal);
        pSerialNoLabel->setObjectName("pSerialNoLabel");

        inputGroup_14->addWidget(pSerialNoLabel);

        pSerialNoInput = new QSpinBox(BookTicketModal);
        pSerialNoInput->setObjectName("pSerialNoInput");
        pSerialNoInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pSerialNoInput->setMinimum(1000);
        pSerialNoInput->setMaximum(9999);
        pSerialNoInput->setValue(9999);

        inputGroup_14->addWidget(pSerialNoInput);


        gridLayout_3->addLayout(inputGroup_14, 0, 1, 1, 1);

        inputGroup_15 = new QVBoxLayout();
        inputGroup_15->setSpacing(5);
        inputGroup_15->setObjectName("inputGroup_15");
        pCodeLabel = new QLabel(BookTicketModal);
        pCodeLabel->setObjectName("pCodeLabel");

        inputGroup_15->addWidget(pCodeLabel);

        pCodeInput = new QSpinBox(BookTicketModal);
        pCodeInput->setObjectName("pCodeInput");
        pCodeInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pCodeInput->setMinimum(100000);
        pCodeInput->setMaximum(999999);
        pCodeInput->setValue(999999);

        inputGroup_15->addWidget(pCodeInput);


        gridLayout_3->addLayout(inputGroup_15, 1, 1, 1, 1);

        inputGroup_6 = new QVBoxLayout();
        inputGroup_6->setSpacing(5);
        inputGroup_6->setObjectName("inputGroup_6");
        lastNameLabel = new QLabel(BookTicketModal);
        lastNameLabel->setObjectName("lastNameLabel");

        inputGroup_6->addWidget(lastNameLabel);

        lastNameInput = new QLineEdit(BookTicketModal);
        lastNameInput->setObjectName("lastNameInput");
        lastNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_6->addWidget(lastNameInput);


        gridLayout_3->addLayout(inputGroup_6, 0, 0, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        firstNameLabel = new QLabel(BookTicketModal);
        firstNameLabel->setObjectName("firstNameLabel");

        inputGroup_9->addWidget(firstNameLabel);

        firstNameInput = new QLineEdit(BookTicketModal);
        firstNameInput->setObjectName("firstNameInput");
        firstNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_9->addWidget(firstNameInput);


        gridLayout_3->addLayout(inputGroup_9, 1, 0, 1, 1);

        inputGroup_16 = new QVBoxLayout();
        inputGroup_16->setSpacing(5);
        inputGroup_16->setObjectName("inputGroup_16");
        middleNameLabel = new QLabel(BookTicketModal);
        middleNameLabel->setObjectName("middleNameLabel");

        inputGroup_16->addWidget(middleNameLabel);

        middleNameInput = new QLineEdit(BookTicketModal);
        middleNameInput->setObjectName("middleNameInput");
        middleNameInput->setEchoMode(QLineEdit::Normal);

        inputGroup_16->addWidget(middleNameInput);


        gridLayout_3->addLayout(inputGroup_16, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        inputGroup_12 = new QVBoxLayout();
        inputGroup_12->setSpacing(5);
        inputGroup_12->setObjectName("inputGroup_12");
        railcarClassLabel = new QLabel(BookTicketModal);
        railcarClassLabel->setObjectName("railcarClassLabel");

        inputGroup_12->addWidget(railcarClassLabel);

        railcarClassInput = new QSpinBox(BookTicketModal);
        railcarClassInput->setObjectName("railcarClassInput");
        railcarClassInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        railcarClassInput->setMinimum(1);
        railcarClassInput->setMaximum(2);
        railcarClassInput->setValue(2);

        inputGroup_12->addWidget(railcarClassInput);


        gridLayout->addLayout(inputGroup_12, 3, 0, 1, 1);

        inputGroup_11 = new QVBoxLayout();
        inputGroup_11->setSpacing(5);
        inputGroup_11->setObjectName("inputGroup_11");
        railcarNoLabel = new QLabel(BookTicketModal);
        railcarNoLabel->setObjectName("railcarNoLabel");

        inputGroup_11->addWidget(railcarNoLabel);

        railCarNoComboBox = new QComboBox(BookTicketModal);
        railCarNoComboBox->setObjectName("railCarNoComboBox");

        inputGroup_11->addWidget(railCarNoComboBox);


        gridLayout->addLayout(inputGroup_11, 2, 0, 1, 1);

        inputGroup_7 = new QVBoxLayout();
        inputGroup_7->setSpacing(5);
        inputGroup_7->setObjectName("inputGroup_7");
        scheduleLabel = new QLabel(BookTicketModal);
        scheduleLabel->setObjectName("scheduleLabel");

        inputGroup_7->addWidget(scheduleLabel);

        scheduleComboBox = new QComboBox(BookTicketModal);
        scheduleComboBox->setObjectName("scheduleComboBox");

        inputGroup_7->addWidget(scheduleComboBox);


        gridLayout->addLayout(inputGroup_7, 1, 0, 1, 2);

        inputGroup_10 = new QVBoxLayout();
        inputGroup_10->setSpacing(5);
        inputGroup_10->setObjectName("inputGroup_10");
        seatNoLabel = new QLabel(BookTicketModal);
        seatNoLabel->setObjectName("seatNoLabel");

        inputGroup_10->addWidget(seatNoLabel);

        seatNoComboBox = new QComboBox(BookTicketModal);
        seatNoComboBox->setObjectName("seatNoComboBox");

        inputGroup_10->addWidget(seatNoComboBox);


        gridLayout->addLayout(inputGroup_10, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        addButton = new QPushButton(BookTicketModal);
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


        retranslateUi(BookTicketModal);

        addButton->setDefault(false);


        QMetaObject::connectSlotsByName(BookTicketModal);
    } // setupUi

    void retranslateUi(QWidget *BookTicketModal)
    {
        BookTicketModal->setWindowTitle(QCoreApplication::translate("BookTicketModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("BookTicketModal", "\320\221\320\270\320\273\320\265\321\202", nullptr));
        pSerialNoLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        pCodeLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\230\320\274\321\217", nullptr));
        middleNameLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        railcarClassLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\232\320\273\320\260\321\201\321\201 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        railcarNoLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\260\320\263\320\276\320\275\320\260", nullptr));
        scheduleLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\240\320\265\320\271\321\201", nullptr));
        seatNoLabel->setText(QCoreApplication::translate("BookTicketModal", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\265\321\201\321\202\320\260", nullptr));
        addButton->setText(QCoreApplication::translate("BookTicketModal", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookTicketModal: public Ui_BookTicketModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTICKETMODAL_H
