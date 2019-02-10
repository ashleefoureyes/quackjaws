#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "view.h"


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

/**
 * Navigate to control screen when enter is clicked.
 * This will be a login screen in future deliverables.
 */
void MainWindow::on_enterButton_clicked()
{
    View *view = new View();
    view->show();
    hide();

}
