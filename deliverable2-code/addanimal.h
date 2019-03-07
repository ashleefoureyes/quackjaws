#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include "dog.h"
#include "cat.h"
#include "lizard.h"
#include "bird.h"
#include "rabbit.h"
#include "animal.h"
#include "animalstorage.h"
#include "filesaver.h"

#include <QFileDialog>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QMessageBox>
#include <QTextStream>
#include <string>
#include <vector>
#include <iterator>
#include <QDialog>
#include "databasestorage.h"

#define Q_BUTTON_GROUP_SIZE
#define IMAGE_FILEPATH "animalPhotos/"
#define DIR_NAME "animalPhotos"
#define ANIMAL_SAVE_FILE "savedAnimals.txt"
#define DEV_MODE false

namespace Ui {
class AddAnimal;
}

class AddAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddAnimal(QWidget *parent = nullptr);
    ~AddAnimal();
    int createNewAnimal(AnimalStorage**);
    int editAnimal(Animal*);

private slots:
    void on_bUpload_clicked();
    void on_bSubmit_clicked();
    void on_bExit_clicked();
    void on_cbSpecies_currentIndexChanged(int index);
    void on_tabWidget_tabBarClicked(int index);

private:
    Ui::AddAnimal *ui;
    AnimalStorage** storage;
    Animal* animal;
    int returnVal;
    QImage animalPhoto;
    bool customImage = false;
    int speciesIndex = 0;
    void fillInfoForEdit();
    bool editingExistingAnimal;
    void loadImage(std::string filename);
    void fillAnimalAttributes();
    void setDogAttributes();
    void setCatAttributes();
    void setBirdAttributes();
    void setLizardAttributes();
    void setRabbitAttributes();

    databaseStorage* db;

    void displayAnimalNameError(QString name);
    void displayMissingInfoError();

    std::string savePhoto(std::string);
    void changeBreedBox(int index);
    void changeFurBox(int index);
    void changeSpeciesTab(int index);
    std::string getUniqueFilename(std::string filename);
    void setupButtons();
    void changeSpecies(int index);

    void createCat();
    void createDog();
    void createBird();
    void createLizard();
    void createRabbit();
    void createAnimalBase(Animal*);

    std::vector<std::string> dogBreeds{"Greyhound", "German Sheperd", "Chihuahua", "Pug", "Shih Tzu", "Cocker Spaniel", "Bull Terrier", "Husky", "Weiner Dog", "St. Bernard", "Golden Retriever"};
    std::vector<std::string> catBreeds{"Russian Blue", "Siamese", "Scottish Fold", "Maine Coon", "British Shorthair", "Bengal", "Egyptian Mau", "Sphynx", "Burmese", "Cornish Rex"};
    std::vector<std::string> birdBreeds{"Cockatiel", "Parrot, Grey", "Budgy", "Cockatoo", "Macaw", "Parrot, Amazon", "Parrot, Pionus"};
    std::vector<std::string> lizardBreeds{"Gecko, Leopard", "Gecko, Crested", "Bearded Dragon", "Iguana, Green", "Chameleon", "Monitor, Nile", "Monitor, Asian Water", "Monitor, Green Tree"};
    std::vector<std::string> rabbitBreeds{"Alaskan", "Belgian Hare", "Californian", "Britannia", "Cinnamon", "Dutch"};
};

#endif // ADDANIMAL_H
