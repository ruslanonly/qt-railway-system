/********************************************************************************
** Form generated from reading UI file 'cursorupdatescheduletrainmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURSORUPDATESCHEDULETRAINMODAL_H
#define UI_CURSORUPDATESCHEDULETRAINMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CursorUpdateScheduleTrainModal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *inputGroup_8;
    QLabel *trainLabel;
    QComboBox *newTrainComboBox;
    QVBoxLayout *inputGroup_9;
    QLabel *trainLabel_2;
    QComboBox *oldTrainComboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *replaceButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CursorUpdateScheduleTrainModal)
    {
        if (CursorUpdateScheduleTrainModal->objectName().isEmpty())
            CursorUpdateScheduleTrainModal->setObjectName("CursorUpdateScheduleTrainModal");
        CursorUpdateScheduleTrainModal->resize(478, 200);
        verticalLayout = new QVBoxLayout(CursorUpdateScheduleTrainModal);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(CursorUpdateScheduleTrainModal);
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
        trainLabel = new QLabel(CursorUpdateScheduleTrainModal);
        trainLabel->setObjectName("trainLabel");

        inputGroup_8->addWidget(trainLabel);

        newTrainComboBox = new QComboBox(CursorUpdateScheduleTrainModal);
        newTrainComboBox->setObjectName("newTrainComboBox");

        inputGroup_8->addWidget(newTrainComboBox);


        gridLayout->addLayout(inputGroup_8, 0, 1, 1, 1);

        inputGroup_9 = new QVBoxLayout();
        inputGroup_9->setSpacing(5);
        inputGroup_9->setObjectName("inputGroup_9");
        trainLabel_2 = new QLabel(CursorUpdateScheduleTrainModal);
        trainLabel_2->setObjectName("trainLabel_2");

        inputGroup_9->addWidget(trainLabel_2);

        oldTrainComboBox = new QComboBox(CursorUpdateScheduleTrainModal);
        oldTrainComboBox->setObjectName("oldTrainComboBox");

        inputGroup_9->addWidget(oldTrainComboBox);


        gridLayout->addLayout(inputGroup_9, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        formLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        replaceButton = new QPushButton(CursorUpdateScheduleTrainModal);
        replaceButton->setObjectName("replaceButton");
        replaceButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(replaceButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CursorUpdateScheduleTrainModal);

        QMetaObject::connectSlotsByName(CursorUpdateScheduleTrainModal);
    } // setupUi

    void retranslateUi(QWidget *CursorUpdateScheduleTrainModal)
    {
        CursorUpdateScheduleTrainModal->setWindowTitle(QCoreApplication::translate("CursorUpdateScheduleTrainModal", "Form", nullptr));
        label->setText(QCoreApplication::translate("CursorUpdateScheduleTrainModal", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        trainLabel->setText(QCoreApplication::translate("CursorUpdateScheduleTrainModal", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\276\320\265\320\267\320\264", nullptr));
        trainLabel_2->setText(QCoreApplication::translate("CursorUpdateScheduleTrainModal", "\320\241\321\202\320\260\321\200\321\213\320\271 \320\277\320\276\320\265\320\267\320\264", nullptr));
        replaceButton->setText(QCoreApplication::translate("CursorUpdateScheduleTrainModal", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CursorUpdateScheduleTrainModal: public Ui_CursorUpdateScheduleTrainModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURSORUPDATESCHEDULETRAINMODAL_H
