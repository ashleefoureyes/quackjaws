#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasestorage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // COMMENTED OUT FOR TESTING NEW VIEW CLIENT
    databaseStorage *db = new databaseStorage(&animalStorage, &clientStorage);
    db->initDatabase();
    initBreeds();
    //QMainWindow::setWindowIcon(QIcon(":/cuacs_icon.png"));
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
    home.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
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
    Client* client = nullptr;

    // Checks storage for one with an email that matches the input
    for(int i = 0; i < clientStorage.getNumOfElements(); ++i)
    {
        clientStorage.get(&client,i);
        if(client->getEmail() == enteredText) { validEmail = true; break; }
    }

    if(validEmail == false) { return displayLoginError(); }

    ClientHomepage clientHomepage(nullptr, &animalStorage, &clientStorage, client);
    clientHomepage.passBreeds(dogBreeds, catBreeds, birdBreeds, lizardBreeds, rabbitBreeds);
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
    msgBox.setStyleSheet("QMessageBox {background-color: #1d1d1d;} QMessageBox QLabel{color: #fff;} QPushButton{color: #fff; min-width:30px; background-color:#c23b22; border-radius:1px; } QPushButton:hover{color:ccc; border-color:#2d89ef; border-width:2px;}");
    msgBox.exec();
}

// Orders breeds in alphabetical order then puts "Other" at the end
void MainWindow::initBreeds()
{
    std::sort(dogBreeds.begin(), dogBreeds.end()); dogBreeds.push_back("Other");
    std::sort(catBreeds.begin(), catBreeds.end()); catBreeds.push_back("Other");
    std::sort(birdBreeds.begin(), birdBreeds.end()); birdBreeds.push_back("Other");
    std::sort(lizardBreeds.begin(), lizardBreeds.end()); lizardBreeds.push_back("Other");
    std::sort(rabbitBreeds.begin(), rabbitBreeds.end()); rabbitBreeds.push_back("Other");

}
