#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    filesaver.readFromAnimalFile("savedAnimals.txt", &animalStorage);
    filesaver.readFromClientFile("savedClients.txt", &clientStorage);
    databaseStorage *db = new databaseStorage(&animalStorage, &clientStorage);
    //db.initDatabase(&animalStorage, &clientStorage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/** Function: on_bStaffEntry_clicked()
 *  purpose: Opens the staff homepage */
void MainWindow::on_bStaffEntry_clicked()
{
    StaffHomepage home(nullptr, &animalStorage, &clientStorage);
    this->hide();
    home.setModal(true);
    if(home.showStaffPage() == 1) {this->show();}
}

/** Function: on_bClientEntry_clicked()
 *  purpose: Opens the client homepage if client
 *           inputs a valid email address */
// TODO: Make it input the Client so we can log them in with correct information
//       and make necessary adjustments if user decides to change information
void MainWindow::on_bClientEntry_clicked()
{
    std::string enteredText = (ui->txtEmailLogin->text()).toStdString();

    bool validEmail = false;

    // Checks storage for one with an email that matches the input
    for(int i = 0; i < clientStorage.getNumOfElements(); ++i)
    {
        Client* client = static_cast<Client*>(clientStorage.get(i));
        if(client->getEmail() == enteredText) { validEmail = true; }
    }

    if(validEmail == false) { return displayLoginError(); }

    ClientHomepage clientHomepage(nullptr, &animalStorage, &clientStorage);
    this->hide();
    clientHomepage.setModal(true);
    if(clientHomepage.showClientPage() == 1) { this->show(); }
}

/** Function: displayLoginError()
 *  purpose: Displays a login error if the username is not in storage */
void MainWindow::displayLoginError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Error: Email address not in system");
    msgBox.setText(qst);
    msgBox.exec();
}
