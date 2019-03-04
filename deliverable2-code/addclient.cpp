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

/** Function: initNewClient(Client*)
 *  in-out: Client* newClient
 *  purpose: Called to create set all the parameters for the new Client.
 *           Returns 1 if the Client is set or 0 if the user clicked Exit.
 *           The latter causes the instantiated Client to be delete. */
int AddClient::initNewClient(Client* newClient)
{
    this->newClient = &newClient;
    this->exec();
    return returnResult;
}

/** Function: on_bSubmit_clicked()
    in: All client attributes
    in-out: Client *newClient
    purpose: Takes all information from form and creates
             a new Animal object with this information.
             This is the same Client reference that was passed
             in at AddClient::initNewClient */
void AddClient::on_pbSubmit_clicked()
{
    if(areParenthesisInInput()) { displayTextBoxError(); return;}

    std::string firstName, lastName, address,
        phone, email, city, province;

    firstName = (ui->txtFirstName->text()).toStdString();
    lastName = (ui->txtLastName->text()).toStdString();
    city = (ui->txtCity->text()).toStdString();
    province = (ui->cbProvince->currentText()).toStdString();
    address = (ui->txtAddress->text()).toStdString();
    phone = std::to_string(ui->sbAreaCode->value()) + std::to_string(ui->sbPhone->value());
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

/** Function: on_bExit_clicked()
 *  out: QDialog::Rejected (which is 0)
 *  Purpose: Closes the addClient window if user clicks exit
 *           Return value is so StaffHomepage knows to delete
 *           the Client object passed to the function */
void AddClient::on_pbExit_clicked()
{
    returnResult = QDialog::Rejected;
    this->close();
}

bool AddClient::areParenthesisInInput()
{
    // Combines all strings then checks the combined string for ')' and '('
    QString comboStr = "";
    comboStr += ui->txtFirstName->text();
    comboStr += ui->txtLastName->text();
    comboStr += ui->txtCity->text();
    comboStr += ui->txtEmail->text();
    comboStr += ui->txtAddress->text();

    return (comboStr.contains(QChar(')')) || comboStr.contains(QChar('(')));
}

void AddClient::displayTextBoxError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Error, one textbox contains character ')' and/or '(' symbols");
    msgBox.setText(qst);
    msgBox.exec();
}

/** Function: displaySubmissionError()
 *  purpose: Displays error message if client
 *           information is missing */
void AddClient::displaySubmissionError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Please fill out all client information");
    msgBox.setText(qst);
    msgBox.exec();
}

