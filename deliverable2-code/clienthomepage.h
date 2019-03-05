#ifndef CLIENTHOMEPAGE_H
#define CLIENTHOMEPAGE_H

#include <QDialog>

#include "storage.h"
#include "viewanimals.h"
#include "animalstorage.h"

namespace Ui {
class ClientHomepage;
}

class ClientHomepage : public QDialog
{
    Q_OBJECT

public:
    explicit ClientHomepage(QWidget *parent, AnimalStorage *animalStorage, Storage *clientStorage);
    ~ClientHomepage();
    int showClientPage();

private slots:
    void on_lbLogout_clicked();

    void on_lbViewAnimals_clicked();

private:
    Ui::ClientHomepage *ui;
    AnimalStorage *animalStorage;
    Storage *clientStorage;
    int returnResult;
};

#endif // CLIENTHOMEPAGE_H
