#include "control.h"

Control::Control()
{
    //TODO: Get all animals in persistent storage at startup
}

int Control::launch(int argc, char** argv)
{
    // Needed for display on higher resolution systems
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    MainWindow w(nullptr, storage);
    w.show();

    return a.exec();
}
