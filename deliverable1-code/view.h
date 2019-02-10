#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include "storage.h"
#include <iostream>
#include <string>

namespace Ui {
class View;
}

class View : public QWidget
{
    Q_OBJECT

public:
    explicit View(QWidget *parent = nullptr);
    ~View();
    int displayMenu();
//    void getAnimalInfoFromUser(std::string &breed, std::string &name, int &size, int &age, char &gender, int &fur, bool &hypo, int &species);
    void viewAnimals(Storage*);
    int getIdForAnimal();

private slots:
    void on_viewButton_clicked();

    void on_addButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::View *ui;
};

#endif // VIEW_H
