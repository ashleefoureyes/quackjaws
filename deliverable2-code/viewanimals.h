#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include <vector>
#include "clientstorage.h"
#include "animal.h"
#include "animalstorage.h"
#include "addanimal.h"

#include <QListWidgetItem>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

#define ATTRIBUTE_OPTIONS 4

namespace Ui {
class ViewAnimals;
}

class ViewAnimals : public QDialog
{
    Q_OBJECT

public:
    explicit ViewAnimals(QWidget *parent = nullptr);
    ~ViewAnimals();
    void viewAnimalsFromStorage(AnimalStorage *storage, bool isStaff);
    void passBreeds(std::vector<std::string> dogBreeds, std::vector<std::string> catBreeds,
                    std::vector<std::string> birdBreeds, std::vector<std::string> lizardBreeds, std::vector<std::string> rabbitBreeds);

private slots:
    void on_animalList_itemClicked();
    void on_filterDogs_clicked();
    void on_filterCats_clicked();
    void on_filterBirds_clicked();
    void on_filterLizards_clicked();
    void on_filterRabbits_clicked();
    void on_bEditAnimal_clicked();

private:
    Ui::ViewAnimals *ui;
    void populateList();
    AnimalStorage* storage;
    std::vector<Animal*> viewStorage;

    void displayAnimal(int index);
    void displayTextBoxError(QString err);
    void loadImage(std::string);
    void changeSpeciesTab(int);
    int getCorrectIndex(int index);
    void displayAnimalAttributes(Animal* reqAnimal);
    void displaySpeciesAttributes(Dog* dog);
    void displaySpeciesAttributes(Cat* cat);
    void displaySpeciesAttributes(Bird* bird);
    void displaySpeciesAttributes(Lizard* lizard);
    void displaySpeciesAttributes(Rabbit* rabbit);
    void reloadView();

    std::vector<std::string> dogBreeds;
    std::vector<std::string> catBreeds;
    std::vector<std::string> birdBreeds;
    std::vector<std::string> lizardBreeds;
    std::vector<std::string> rabbitBreeds;

};

#endif // VIEWANIMALS_H
