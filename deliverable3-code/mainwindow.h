#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "staffhomepage.h"
#include "clientstorage.h"
#include "animalstorage.h"
#include "animal.h"
#include "clienthomepage.h"
#include "databasestorage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent);
    ~MainWindow();

private slots:
    void on_bStaffEntry_clicked();

    void on_bClientEntry_clicked();

private:
    Ui::MainWindow *ui;
    AnimalStorage animalStorage;
    ClientStorage clientStorage;
    void displayLoginError();
    void initBreeds();


    // Breeds only need to be modified here. Changes will be applied to entire system
    std::vector<std::string> dogBreeds{"Greyhound", "German Sheperd", "Chihuahua", "Pug", "Shih Tzu", "Cocker Spaniel", "Bull Terrier", "Husky", "Weiner Dog", "St. Bernard", "Golden Retriever"};
    std::vector<std::string> catBreeds{"Russian Blue", "Siamese", "Scottish Fold", "Maine Coon", "British Shorthair", "Bengal", "Egyptian Mau", "Sphynx", "Burmese", "Cornish Rex"};
    std::vector<std::string> birdBreeds{"Cockatiel", "Parrot, Grey", "Budgy", "Cockatoo", "Macaw", "Parrot, Amazon", "Parrot, Pionus"};
    std::vector<std::string> lizardBreeds{"Gecko, Leopard", "Gecko, Crested", "Bearded Dragon", "Iguana, Green", "Chameleon", "Monitor, Nile", "Monitor, Asian Water", "Monitor, Green Tree"};
    std::vector<std::string> rabbitBreeds{"Alaskan", "Belgian Hare", "Californian", "Britannia", "Cinnamon", "Dutch"};
};

#endif // MAINWINDOW_H
