#include "dialogs/logindialog.h"
#include "ui_logindialog.h"

#include <QLineEdit>
#include <QSqlError>
#include <QMessageBox>
#include <QString>

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

QString validateErrorMessage(const QString message) {

}

void LoginDialog::on_loginButton_clicked()
{
    const QString username = this->ui->usernameInput->text();
    const QString password = this->ui->passwordInput->text();

    //bool opened = this->dbManager->openConnection(username, password);
    bool opened = this->dbManager->openConnection(username, password);
    if (opened) {
        qDebug() << "Opened";
        emit loginedSignal();
        this->close();
    } else {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Ошибка");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Неправильный логин или пароль. Пожалуйста, попробуйте еще раз.");
        msgBox.exec();
    }
}

void LoginDialog::mainWindowLogoutSlot() {
    this->show();
}

