#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include "storage.h"
#include "animal.h"
#include "animalstorage.h"

#include <QListWidgetItem>
#include <QFileDialog>

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
    void viewAnimalsFromStorage(AnimalStorage *storage);

private slots:
    void on_animalList_itemClicked();

    void on_filterDogs_clicked();

    void on_filterCats_clicked();

    void on_filterBirds_clicked();

    void on_filterLizards_clicked();

    void on_filterRabbits_clicked();

private:
    Ui::ViewAnimals *ui;
    void populateList();
    AnimalStorage* storage;
    void displayAnimal(int index);
    void loadImage(std::string);
};

#endif // VIEWANIMALS_H
