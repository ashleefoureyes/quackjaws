#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include "storage.h"
#include "animal.h"
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
    void viewAnimalsFromStorage(Storage *storage);

private slots:
    void on_animalList_itemClicked(QListWidgetItem *item);

private:
    Ui::ViewAnimals *ui;
    void populateList();
    Storage* storage;
    void displayAnimal(int index);
    void loadImage(std::string);
};

#endif // VIEWANIMALS_H
