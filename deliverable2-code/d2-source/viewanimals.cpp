#include "viewanimals.h"
#include "ui_viewanimals.h"

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{
    ui->setupUi(this);
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}

void ViewAnimals::viewAnimalsFromStorage(Storage *storage)
{
    this->exec();
}
