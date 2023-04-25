/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *HomePage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QWidget *TicketsPage;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(683, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(HomePage);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(HomePage);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(HomePage);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_8->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalLayout->setStretch(0, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget->addWidget(HomePage);
        TicketsPage = new QWidget();
        TicketsPage->setObjectName("TicketsPage");
        stackedWidget->addWidget(TicketsPage);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 683, 25));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName("menuHome");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
