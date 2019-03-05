#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include "client.h"
#include <QMessageBox>

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();
    int initNewClient(Client*);

private slots:
    void on_pbSubmit_clicked();

    void on_pbExit_clicked();

private:
    Ui::AddClient *ui;
    Client **newClient;
    int returnResult;
    void displaySubmissionError();
    bool areParenthesisInInput();
    void displayTextBoxError();
};

#endif // ADDCLIENT_H
