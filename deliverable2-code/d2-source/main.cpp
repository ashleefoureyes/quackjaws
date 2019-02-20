#include "mainwindow.h"
#include <QApplication>
#include "control.h"

int main(int argc, char *argv[])
{
    Control c;
    return c.launch(argc, argv);
};
