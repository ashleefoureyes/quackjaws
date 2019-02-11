#include "view.h"
#include "ui_view.h"
#include "storage.h"
#include "addanimalview.h"
#include <QMessageBox>

#include <string>
#include <iostream>


View::View(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View)
{
    fileSaver.readFromFile(SAVE_FILE_NAME, &storage);
    ui->setupUi(this);
}

View::~View()
{
    //fileSaver.saveToFile(SAVE_FILE_NAME, &storage);
    delete ui;
}


/** Function: viewAnimals(Storage* animalStorage)
 *  in: Storage* animalStorage
 *  Purpose: Creates a header and prints the string returned
 *           by the animalStorage's getFormattedInfo() function */
void View::viewAnimals(Storage* animalStorage)
{
    std::cout << "\n___Animals___\n" << animalStorage->getFormattedInfo();
}

/** Function: getIdForAnimal()
 *  out: int returnId
 *  Purpose: Prompts the user for animal Id.
 *           This can then be used to find or remove the
 *           animal with that ID */
int View::getIdForAnimal()
{
    int returnId;
    std::cout << "Enter id of animal: ";
    std::cin >> returnId;
    return returnId;
}

void View::on_viewButton_clicked()
{
    QMessageBox msgBox;
    QString qst = QString::fromStdString(storage.getFormattedInfo());

    msgBox.setText(qst);

    QFont font("Courier", 9, true);

    msgBox.setFont(font);
    msgBox.setStyleSheet("QLabel{min-width:1200px;}");
    msgBox.exec();
}

void View::on_addButton_clicked()
{
    AddAnimalView *addAni = new AddAnimalView(nullptr, &storage);
    addAni->show();
    addAni->setAttribute(Qt::WA_DeleteOnClose);
}

void View::on_exitButton_clicked()
{
    fileSaver.saveToFile(SAVE_FILE_NAME, &storage);

    close();
}
