#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>
#include "animal.h"
#include <QFileDialog>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QMessageBox>

#define NUM_OF_BUTTON_GROUPS 11
#define Q_BUTTON_GROUP_SIZE

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

private slots:
    void on_bUpload_clicked();

    void on_bSubmit_clicked();

    void on_bExit_clicked();

private:
    Ui::AddAnimal *ui;
    Animal **newAnimal;
    void setupButtons();
    int returnVal;
};

#endif // ADDANIMAL_H
