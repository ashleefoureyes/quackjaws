#ifndef ADDANIMAL_H
#define ADDANIMAL_H

#include <QDialog>
#include "animal.h"
#include <QFileDialog>

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

private slots:
    void on_bUpload_clicked();

private:
    Ui::AddAnimal *ui;
};

#endif // ADDANIMAL_H
