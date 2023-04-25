#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>
#include <database/databaseManager.h>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(DatabaseManager* dbManager, QWidget *parent = nullptr);
    ~LoginDialog();
signals:
    void loginedSignal();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginDialog *ui;
    DatabaseManager* dbManager;
};

#endif // LOGINDIALOG_H
