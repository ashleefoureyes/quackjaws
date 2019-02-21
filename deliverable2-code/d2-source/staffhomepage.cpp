#include "staffhomepage.h"
#include "ui_staffhomepage.h"
#include "addanimal.h"
#include "animal.h"

StaffHomepage::StaffHomepage(QWidget *parent, Storage &storage) :
    QDialog(parent),
    ui(new Ui::StaffHomepage)
{
    ui->setupUi(this);
    this->storage = storage;
}

StaffHomepage::~StaffHomepage()
{
    delete ui;
}


void StaffHomepage::on_bAddAnimal_clicked()
{
    AddAnimal addAnim;
    addAnim.setModal(true);
    Animal *newAnimal;

    addAnim.createNewAnimal(newAnimal);
}

void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(&storage);

}
