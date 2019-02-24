#ifndef VIEWCLIENTS_H
#define VIEWCLIENTS_H

#include <QDialog>
#include "storage.h"
#include <QListWidgetItem>

namespace Ui {
class ViewClients;
}

class ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit ViewClients(QWidget *parent = nullptr);
    ~ViewClients();
    void viewClientsFromStorage(Storage *storage);

private slots:
    void on_clientList_itemClicked();

private:
    Ui::ViewClients *ui;
    void populateList();
    Storage* storage;
    void displayClient(int index);
};

#endif // VIEWCLIENTS_H
