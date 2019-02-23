#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>
#include "animal.h"
#include <QFileDialog>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QMessageBox>
#include <string>

#define NUM_OF_BUTTON_GROUPS 11
#define Q_BUTTON_GROUP_SIZE
#define IMAGE_FILEPATH "animalPhotos\\"
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
    int createNewAnimal(Animal*);
    int editAnimal(Animal*);

private slots:
    void on_bUpload_clicked();

    void on_bSubmit_clicked();

    void on_bExit_clicked();

    void on_Tabs_tabBarClicked(int index);

private:
    Ui::AddAnimal *ui;
    Animal **newAnimal;
    void setupButtons();
    int returnVal;
    QImage animalPhoto;
    std::string savePhoto(std::string);
    bool customImage = false;
};

#endif // ADDANIMAL_H
