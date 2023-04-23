#include "dialogs/logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(DatabaseManager* dbManager, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->dbManager = dbManager;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
