#ifndef VIEWANIMALS_H
#define VIEWANIMALS_H

#include <QDialog>
#include "storage.h"

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

private:
    Ui::ViewAnimals *ui;
};

#endif // VIEWANIMALS_H
