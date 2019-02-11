#include "addanimalview.h"
#include "ui_addanimalview.h"

#include "animal.h"
#include <QMessageBox>
#include "storage.h"

AddAnimalView::AddAnimalView(QWidget *parent, Storage* store) :
    QWidget(parent),
    ui(new Ui::AddAnimalView)
{
    ui->setupUi(this);
    storage = store;
}

AddAnimalView::~AddAnimalView()
{
    delete ui;
    //fileSaver.saveToFile(SAVE_FILE_NAME, &storage);
}

void AddAnimalView::on_submitButton_clicked()
{

    Animal* newAnimal;

    std::string name;
    std::string breed;
    int age, size, fur, species;
    char gender;
    bool isHypo;

    /* Take input from gui (qstring)*/
    QString Qname = ui->lineEdit->text();
    QString Qbreed = ui->lineEdit_2->text();
    QString Qage = ui->lineEdit_3->text();

    name = Qname.toStdString();
    breed = Qbreed.toStdString();
    age = Qage.toInt();

    /* Assign cat (0) or dog (1)*/
    if(ui->catSelect->isCheckable())
    {
        species = 0;
    }
    if(ui->dogSelect->isCheckable()){
        species = 1;
    }


    /*Assign male(0) or female(1)*/
    if(ui->maleSelect->isCheckable())
    {
        gender = 'M';
    }
    if(ui->femaleSelect->isCheckable())
    {
        gender = 'F';
    }

    /* Check if hypo checkbox is clicked */
    if(ui->checkBox->isChecked())
    {
        isHypo = true;
    }
    else
    {
        isHypo = false;
    }

    /* fur and size selection indexes in group box align with int options */
    fur = ui->hairBox->currentIndex();
    size = ui->hairBox->currentIndex();

    newAnimal = new Animal(breed,name,size,age,gender,fur,isHypo,species);

    QMessageBox msgBox;
    storage->add(newAnimal);
    QString qst = QString::fromStdString(storage->getFormattedInfo());

    msgBox.setText(qst);
    msgBox.exec();



    hide();


}
