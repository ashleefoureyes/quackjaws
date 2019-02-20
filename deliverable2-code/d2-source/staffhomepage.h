#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QDialog>
#include "storage.h"

namespace Ui {
class StaffHomepage;
}

class StaffHomepage : public QDialog
{
    Q_OBJECT

public:
    explicit StaffHomepage(QWidget *parent, Storage &storage);
    ~StaffHomepage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StaffHomepage *ui;
    Storage storage;
};

#endif // STAFFHOMEPAGE_H
