#include "addclient.h"
#include "ui_addclient.h"

AddClient::AddClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClient)
{
    ui->setupUi(this);
    ui->sbPhone->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->sbAreaCode->setButtonSymbols(QAbstractSpinBox::NoButtons);

}

AddClient::~AddClient()
{
    delete ui;
}

int AddClient::createNewClient(Client* newClient)
{
    this->newClient = &newClient;
    this->exec();
    return returnResult;
}

void AddClient::on_pbSubmit_clicked()
{
    std::string firstName, lastName, address,
        phone, email, city, province;

    firstName = (ui->txtFirstName->text()).toStdString();
    lastName = (ui->txtLastName->text()).toStdString();
    city = (ui->txtCity->text()).toStdString();
    province = (ui->cbProvince->currentText()).toStdString();
    address = (ui->txtAddress->text()).toStdString();
    phone = "(" + std::to_string(ui->sbAreaCode->value()) + ") " + std::to_string(ui->sbPhone->value());
    email = (ui->txtEmail->text()).toStdString();

    (*newClient)->setContactInformation(firstName,lastName,address,phone, email, city, province);

    if(firstName == "" || lastName == "" || city == "" || address == "" || phone == "" || email == "")
    {
        displaySubmissionError();
        return;
    }

    returnResult = QDialog::Accepted;
    this->close();
}

void AddClient::on_pbExit_clicked()
{
    returnResult = QDialog::Rejected;
    this->close();
}

void AddClient::displaySubmissionError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Please fill out all client information");
    msgBox.setText(qst);
    msgBox.exec();
}
