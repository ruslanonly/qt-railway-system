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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *pagesWidget;
    QWidget *HomePage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *redirectButtons;
    QPushButton *routePageButton;
    QPushButton *stationPageButton;
    QPushButton *trainPageButton;
    QPushButton *ticketPageButton;
    QPushButton *passengerPageButton;
    QLabel *homeHeading;
    QWidget *TicketPage;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *heading;
    QTableView *ticketsTableView;
    QHBoxLayout *buttonsLayout;
    QPushButton *backTicketButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshTicketButton;
    QPushButton *addTicketButton;
    QWidget *TrainPage;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *heading_7;
    QTableView *trainsTableView;
    QHBoxLayout *buttonsLayout_7;
    QPushButton *backTrainButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *refreshTrainButton;
    QPushButton *addTrainButton;
    QWidget *PassengerPage;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *heading_5;
    QTableView *passengersTableView;
    QHBoxLayout *buttonsLayout_5;
    QPushButton *backPassengerButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *refreshPassengerButton;
    QPushButton *addPassengerButton;
    QWidget *RoutePage;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *heading_6;
    QTableView *routesTableView;
    QHBoxLayout *buttonsLayout_6;
    QPushButton *backRouteButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *refreshRouteButton;
    QPushButton *addRouteButton;
    QWidget *StationPage;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *heading_2;
    QTableView *stationsTableView;
    QHBoxLayout *buttonsLayout_2;
    QPushButton *backStationButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *refreshStationButton;
    QPushButton *addStationButton;
    QWidget *page_4;
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
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pagesWidget = new QStackedWidget(centralwidget);
        pagesWidget->setObjectName("pagesWidget");
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(HomePage);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        redirectButtons = new QGridLayout();
        redirectButtons->setObjectName("redirectButtons");
        routePageButton = new QPushButton(HomePage);
        routePageButton->setObjectName("routePageButton");
        routePageButton->setCursor(QCursor(Qt::PointingHandCursor));

        redirectButtons->addWidget(routePageButton, 2, 0, 1, 1);

        stationPageButton = new QPushButton(HomePage);
        stationPageButton->setObjectName("stationPageButton");
        stationPageButton->setCursor(QCursor(Qt::PointingHandCursor));

        redirectButtons->addWidget(stationPageButton, 2, 1, 1, 1);

        trainPageButton = new QPushButton(HomePage);
        trainPageButton->setObjectName("trainPageButton");
        trainPageButton->setCursor(QCursor(Qt::PointingHandCursor));

        redirectButtons->addWidget(trainPageButton, 0, 1, 1, 1);

        ticketPageButton = new QPushButton(HomePage);
        ticketPageButton->setObjectName("ticketPageButton");
        ticketPageButton->setCursor(QCursor(Qt::PointingHandCursor));

        redirectButtons->addWidget(ticketPageButton, 0, 0, 1, 1);

        passengerPageButton = new QPushButton(HomePage);
        passengerPageButton->setObjectName("passengerPageButton");
        passengerPageButton->setCursor(QCursor(Qt::PointingHandCursor));

        redirectButtons->addWidget(passengerPageButton, 0, 2, 1, 1);


        gridLayout->addLayout(redirectButtons, 4, 0, 1, 1);

        homeHeading = new QLabel(HomePage);
        homeHeading->setObjectName("homeHeading");
        homeHeading->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        homeHeading->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(homeHeading, 0, 0, 1, 1);

        pagesWidget->addWidget(HomePage);
        TicketPage = new QWidget();
        TicketPage->setObjectName("TicketPage");
        horizontalLayout = new QHBoxLayout(TicketPage);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        heading = new QLabel(TicketPage);
        heading->setObjectName("heading");
        heading->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        heading->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(heading);

        ticketsTableView = new QTableView(TicketPage);
        ticketsTableView->setObjectName("ticketsTableView");
        ticketsTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        ticketsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        ticketsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ticketsTableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(ticketsTableView);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setSpacing(7);
        buttonsLayout->setObjectName("buttonsLayout");
        backTicketButton = new QPushButton(TicketPage);
        backTicketButton->setObjectName("backTicketButton");
        backTicketButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout->addWidget(backTicketButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        refreshTicketButton = new QPushButton(TicketPage);
        refreshTicketButton->setObjectName("refreshTicketButton");
        refreshTicketButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout->addWidget(refreshTicketButton);

        addTicketButton = new QPushButton(TicketPage);
        addTicketButton->setObjectName("addTicketButton");
        addTicketButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout->addWidget(addTicketButton);


        verticalLayout->addLayout(buttonsLayout);


        horizontalLayout->addLayout(verticalLayout);

        pagesWidget->addWidget(TicketPage);
        TrainPage = new QWidget();
        TrainPage->setObjectName("TrainPage");
        horizontalLayout_6 = new QHBoxLayout(TrainPage);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(20);
        verticalLayout_8->setObjectName("verticalLayout_8");
        heading_7 = new QLabel(TrainPage);
        heading_7->setObjectName("heading_7");
        heading_7->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        heading_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(heading_7);

        trainsTableView = new QTableView(TrainPage);
        trainsTableView->setObjectName("trainsTableView");
        trainsTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        trainsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        trainsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        trainsTableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_8->addWidget(trainsTableView);

        buttonsLayout_7 = new QHBoxLayout();
        buttonsLayout_7->setSpacing(7);
        buttonsLayout_7->setObjectName("buttonsLayout_7");
        backTrainButton = new QPushButton(TrainPage);
        backTrainButton->setObjectName("backTrainButton");
        backTrainButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_7->addWidget(backTrainButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout_7->addItem(horizontalSpacer_7);

        refreshTrainButton = new QPushButton(TrainPage);
        refreshTrainButton->setObjectName("refreshTrainButton");
        refreshTrainButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_7->addWidget(refreshTrainButton);

        addTrainButton = new QPushButton(TrainPage);
        addTrainButton->setObjectName("addTrainButton");
        addTrainButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_7->addWidget(addTrainButton);


        verticalLayout_8->addLayout(buttonsLayout_7);


        horizontalLayout_6->addLayout(verticalLayout_8);

        pagesWidget->addWidget(TrainPage);
        PassengerPage = new QWidget();
        PassengerPage->setObjectName("PassengerPage");
        horizontalLayout_5 = new QHBoxLayout(PassengerPage);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName("verticalLayout_6");
        heading_5 = new QLabel(PassengerPage);
        heading_5->setObjectName("heading_5");
        heading_5->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        heading_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(heading_5);

        passengersTableView = new QTableView(PassengerPage);
        passengersTableView->setObjectName("passengersTableView");
        passengersTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        passengersTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        passengersTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        passengersTableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(passengersTableView);

        buttonsLayout_5 = new QHBoxLayout();
        buttonsLayout_5->setSpacing(7);
        buttonsLayout_5->setObjectName("buttonsLayout_5");
        backPassengerButton = new QPushButton(PassengerPage);
        backPassengerButton->setObjectName("backPassengerButton");
        backPassengerButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_5->addWidget(backPassengerButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout_5->addItem(horizontalSpacer_5);

        refreshPassengerButton = new QPushButton(PassengerPage);
        refreshPassengerButton->setObjectName("refreshPassengerButton");
        refreshPassengerButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_5->addWidget(refreshPassengerButton);

        addPassengerButton = new QPushButton(PassengerPage);
        addPassengerButton->setObjectName("addPassengerButton");
        addPassengerButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_5->addWidget(addPassengerButton);


        verticalLayout_6->addLayout(buttonsLayout_5);


        horizontalLayout_5->addLayout(verticalLayout_6);

        pagesWidget->addWidget(PassengerPage);
        RoutePage = new QWidget();
        RoutePage->setObjectName("RoutePage");
        horizontalLayout_7 = new QHBoxLayout(RoutePage);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(20);
        verticalLayout_7->setObjectName("verticalLayout_7");
        heading_6 = new QLabel(RoutePage);
        heading_6->setObjectName("heading_6");
        heading_6->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        heading_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(heading_6);

        routesTableView = new QTableView(RoutePage);
        routesTableView->setObjectName("routesTableView");
        routesTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        routesTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        routesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        routesTableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(routesTableView);

        buttonsLayout_6 = new QHBoxLayout();
        buttonsLayout_6->setSpacing(7);
        buttonsLayout_6->setObjectName("buttonsLayout_6");
        backRouteButton = new QPushButton(RoutePage);
        backRouteButton->setObjectName("backRouteButton");
        backRouteButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_6->addWidget(backRouteButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout_6->addItem(horizontalSpacer_6);

        refreshRouteButton = new QPushButton(RoutePage);
        refreshRouteButton->setObjectName("refreshRouteButton");
        refreshRouteButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_6->addWidget(refreshRouteButton);

        addRouteButton = new QPushButton(RoutePage);
        addRouteButton->setObjectName("addRouteButton");
        addRouteButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_6->addWidget(addRouteButton);


        verticalLayout_7->addLayout(buttonsLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_7);

        pagesWidget->addWidget(RoutePage);
        StationPage = new QWidget();
        StationPage->setObjectName("StationPage");
        horizontalLayout_3 = new QHBoxLayout(StationPage);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        heading_2 = new QLabel(StationPage);
        heading_2->setObjectName("heading_2");
        heading_2->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: 700;"));
        heading_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(heading_2);

        stationsTableView = new QTableView(StationPage);
        stationsTableView->setObjectName("stationsTableView");
        stationsTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        stationsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        stationsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        stationsTableView->setGridStyle(Qt::SolidLine);
        stationsTableView->setWordWrap(false);
        stationsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        stationsTableView->horizontalHeader()->setStretchLastSection(true);
        stationsTableView->verticalHeader()->setCascadingSectionResizes(true);
        stationsTableView->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(stationsTableView);

        buttonsLayout_2 = new QHBoxLayout();
        buttonsLayout_2->setSpacing(7);
        buttonsLayout_2->setObjectName("buttonsLayout_2");
        backStationButton = new QPushButton(StationPage);
        backStationButton->setObjectName("backStationButton");
        backStationButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_2->addWidget(backStationButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout_2->addItem(horizontalSpacer_2);

        refreshStationButton = new QPushButton(StationPage);
        refreshStationButton->setObjectName("refreshStationButton");
        refreshStationButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_2->addWidget(refreshStationButton);

        addStationButton = new QPushButton(StationPage);
        addStationButton->setObjectName("addStationButton");
        addStationButton->setCursor(QCursor(Qt::PointingHandCursor));

        buttonsLayout_2->addWidget(addStationButton);


        verticalLayout_4->addLayout(buttonsLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        pagesWidget->addWidget(StationPage);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pagesWidget->addWidget(page_4);

        verticalLayout_3->addWidget(pagesWidget);

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

        pagesWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        routePageButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\213", nullptr));
        stationPageButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        trainPageButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\265\320\267\320\264\320\260", nullptr));
        ticketPageButton->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\273\320\265\321\202\321\213", nullptr));
        passengerPageButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213", nullptr));
        homeHeading->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\273\320\265\320\267\320\275\320\276\320\264\320\276\321\200\320\276\320\266\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\276-\321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        heading->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\273\320\265\321\202\321\213", nullptr));
        backTicketButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        refreshTicketButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addTicketButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        heading_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\265\320\267\320\264\320\260", nullptr));
        backTrainButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        refreshTrainButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addTrainButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        heading_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\321\201\320\260\320\266\320\270\321\200\321\213", nullptr));
        backPassengerButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        refreshPassengerButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addPassengerButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        heading_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\213", nullptr));
        backRouteButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        refreshRouteButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addRouteButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        heading_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        backStationButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        refreshStationButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        addStationButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
