#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include "dog.h"
#include "cat.h"
#include "lizard.h"
#include "bird.h"
#include "rabbit.h"
#include "animalstorage.h"

#include <QFileDialog>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QMessageBox>
#include <string>
#include <vector>
#include <iterator>
#include <QDialog>

#define NUM_OF_BUTTON_GROUPS 11
#define Q_BUTTON_GROUP_SIZE
#define IMAGE_FILEPATH "animalPhotos/"
#define DIR_NAME "animalPhotos"

namespace Ui {
class AddAnimal;
}

class AddAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddAnimal(QWidget *parent = nullptr);
    ~AddAnimal();
    int initNewAnimal(Animal*);
    int createNewAnimal(AnimalStorage**);
    int editAnimal(Animal*);

private slots:
    void on_bUpload_clicked();

    void on_bSubmit_clicked();

    void on_bExit_clicked();

    void on_Tabs_tabBarClicked(int index);

    void on_cbSpecies_currentIndexChanged(int index);

private:
    Ui::AddAnimal *ui;
    Animal **newAnimal;
    void setupButtons();
    int returnVal;
    QImage animalPhoto;
    std::string savePhoto(std::string);
    bool customImage = false;
    std::string getUniqueFilename(std::string filename);
    int speciesIndex = 0;
    void changeBreedBox(int index);
    void changeSpeciesTab(int index);

    std::vector<std::string> dogBreeds{"Greyhound", "German Sheperd", "Chihuahua", "Pug", "Shih Tzu", "Cocker Spaniel", "Bull Terrier", "Husky", "Weiner Dog", "St. Bernard"};
    std::vector<std::string> catBreeds{"Russian Blue", "Siamese", "Scottish Fold", "Maine Coon", "British Shorthair", "Bengal", "Egyptian Mau", "Sphynx", "Burmese", "Cornish Rex"};
    std::vector<std::string> birdBreeds{"Cockatiel", "Parrot, Grey", "Budgy", "Cockatoo", "Macaw", "Parrot, Amazon", "Parrot, Pionus"};
    std::vector<std::string> lizardBreeds{"Gecko, Leopard", "Gecko, Crested", "Bearded Dragon", "Iguana, Green", "Chameleon", "Monitor, Nile", "Monitor, Asian Water", "Monitor, Green Tree"};
    std::vector<std::string> rabbitBreeds{"Alaskan", "Belgian Hare", "Californian", "Britannia", "Cinnamon", "Dutch"};
};

#endif // ADDANIMAL_H
