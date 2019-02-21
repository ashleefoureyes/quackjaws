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
    StaffHomepage home(nullptr, &storage);
    this->hide();
    home.setModal(true);
    home.exec();

    // TODO: Make it so this only happens if you click logout
    //       Currently also does this if you click 'X' in the corner
    this->show();
}
