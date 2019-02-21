#ifndef CONTROL_H
#define CONTROL_H

#include "qapplication.h"
#include "mainwindow.h"
#include "storage.h"
#include "animal.h"

class Control
{

    public:
    Control();
    int launch(int, char**);

    private:
    Storage storage;
};

#endif // CONTROL_H
