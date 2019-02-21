#include "staffhomepage.h"
#include "ui_staffhomepage.h"
#include "addanimal.h"
#include "animal.h"

StaffHomepage::StaffHomepage(QWidget *parent, Storage *storage) :
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
    Animal *newAnimal = new Animal();

    if(addAnim.createNewAnimal(newAnimal) == 0) { return; }

    storage->add(newAnimal);

    QMessageBox msgBox;
    QString qst = QString::fromStdString(storage->getFormattedInfo());
    msgBox.setText(qst);
    msgBox.exec();
}

void StaffHomepage::on_bViewAnimals_clicked()
{
    ViewAnimals viewAnim;
    viewAnim.setModal(true);
    viewAnim.viewAnimalsFromStorage(storage);

}

void StaffHomepage::on_bLogout_clicked()
{
    this->close();
}
