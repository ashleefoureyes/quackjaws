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
    this->show();
}
