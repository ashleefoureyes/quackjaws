#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QDialog>
#include "storage.h"
#include "viewanimals.h"
#include "addclient.h"
#include "addanimal.h"
#include "animal.h"
#include "client.h"

namespace Ui {
class StaffHomepage;
}

class StaffHomepage : public QDialog
{
    Q_OBJECT

public:
    explicit StaffHomepage(QWidget *parent, Storage *animalStorage, Storage *clientStorage);
    ~StaffHomepage();
    int showStaffPage();

private slots:

    void on_bAddAnimal_clicked();

    void on_bViewAnimals_clicked();

    void on_bLogout_clicked();

    void on_bAddClient_clicked();

private:
    Ui::StaffHomepage *ui;
    Storage *animalStorage;
    Storage *clientStorage;
    int returnResult;
};

#endif // STAFFHOMEPAGE_H
