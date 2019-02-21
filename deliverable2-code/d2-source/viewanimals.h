#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include "storage.h"
#include "animal.h"
#include <QListWidgetItem>

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
};

#endif // VIEWANIMALS_H
