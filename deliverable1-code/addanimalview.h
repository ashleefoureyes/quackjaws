#ifndef ADDANIMALVIEW_H
#define ADDANIMALVIEW_H

#include "animal.h"
#include "storage.h"
#include "filesaver.h"
#include "view.h"
#include <QWidget>

#define SAVE_FILE_NAME "savedAnimals.txt"

namespace Ui {
class AddAnimalView;
}

class AddAnimalView : public QWidget
{
    Q_OBJECT

public:
    explicit AddAnimalView(QWidget *parent = nullptr);
    ~AddAnimalView();

private slots:
    void on_submitButton_clicked();

private:
    Ui::AddAnimalView *ui;
    Storage storage;
    Filesaver fileSaver;
};

#endif // ADDANIMALVIEW_H
