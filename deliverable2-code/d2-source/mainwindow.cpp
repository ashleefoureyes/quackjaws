#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bStaffEntry_clicked()
{
    StaffHomepage home(nullptr, &animalStorage, &clientStorage);
    this->hide();
    home.setModal(true);
    if(home.showStaffPage() == 1) {this->show();}
}

// TODO: Make it return Client so we can log them in with correct information
void MainWindow::on_bClientEntry_clicked()
{
    std::string enteredText = (ui->txtEmailLogin->text()).toStdString();

    bool validEmail = false;

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

void MainWindow::displayLoginError()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString("Error: Email address not in system");
    msgBox.setText(qst);
    msgBox.exec();
}
