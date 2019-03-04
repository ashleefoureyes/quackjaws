#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "staffhomepage.h"
#include "storage.h"
#include "animalstorage.h"
#include "animal.h"
#include "clienthomepage.h"
#include "filesaver.h"
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
    Storage clientStorage;
    void displayLoginError();
    Filesaver filesaver;
};

#endif // MAINWINDOW_H
