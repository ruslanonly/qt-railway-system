/********************************************************************************
** Form generated from reading UI file 'loginmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINMODAL_H
#define UI_LOGINMODAL_H

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

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *formLayout;
    QVBoxLayout *inputsLayout;
    QVBoxLayout *inputGroup;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
    QVBoxLayout *inputGroup_2;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setWindowModality(Qt::NonModal);
        LoginDialog->resize(350, 300);
        LoginDialog->setMinimumSize(QSize(350, 300));
        LoginDialog->setMaximumSize(QSize(350, 300));
        QPalette palette;
        QBrush brush(QColor(0, 120, 215, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        LoginDialog->setPalette(palette);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(15, 15, 15, 35);
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setAcceptDrops(false);
        label->setStyleSheet(QString::fromUtf8("font-weight: 600; font-size: 10pt; color: black;"));
        label->setScaledContents(false);
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
        inputGroup = new QVBoxLayout();
        inputGroup->setSpacing(5);
        inputGroup->setObjectName("inputGroup");
        usernameLabel = new QLabel(LoginDialog);
        usernameLabel->setObjectName("usernameLabel");

        inputGroup->addWidget(usernameLabel);

        usernameInput = new QLineEdit(LoginDialog);
        usernameInput->setObjectName("usernameInput");

        inputGroup->addWidget(usernameInput);


        inputsLayout->addLayout(inputGroup);

        inputGroup_2 = new QVBoxLayout();
        inputGroup_2->setSpacing(5);
        inputGroup_2->setObjectName("inputGroup_2");
        passwordLabel = new QLabel(LoginDialog);
        passwordLabel->setObjectName("passwordLabel");

        inputGroup_2->addWidget(passwordLabel);

        passwordInput = new QLineEdit(LoginDialog);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setEchoMode(QLineEdit::Password);

        inputGroup_2->addWidget(passwordInput);


        inputsLayout->addLayout(inputGroup_2);


        formLayout->addLayout(inputsLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->addItem(verticalSpacer_2);

        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->addWidget(loginButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\320\222\320\276\320\271\320\264\320\270\321\202\320\265 \320\262 \321\203\321\207\320\265\321\202\320\275\321\203\321\216 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMODAL_H
