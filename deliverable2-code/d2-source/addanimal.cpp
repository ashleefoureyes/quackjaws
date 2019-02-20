#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
}

AddAnimal::~AddAnimal()
{
    delete ui;
}

bool AddAnimal::createNewAnimal(Animal *newAnimal)
{
    this->exec();
    return true;
}
