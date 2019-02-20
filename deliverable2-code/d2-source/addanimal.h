#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>
#include "animal.h"

namespace Ui {
class AddAnimal;
}

class AddAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddAnimal(QWidget *parent = nullptr);
    ~AddAnimal();
    bool createNewAnimal(Animal*);

private:
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
