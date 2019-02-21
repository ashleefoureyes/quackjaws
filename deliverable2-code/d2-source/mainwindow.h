#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "staffhomepage.h"
#include "storage.h"
#include "animal.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, Storage &storage);
    ~MainWindow();

private slots:
    void on_bStaffEntry_clicked();

private:
    Ui::MainWindow *ui;
    Storage storage;
};

#endif // MAINWINDOW_H
