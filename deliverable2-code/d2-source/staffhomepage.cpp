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

void StaffHomepage::on_pushButton_clicked()
{
    AddAnimal addAnim;
    addAnim.setModal(true);
    Animal *newAnimal;

    addAnim.createNewAnimal(newAnimal);

}
