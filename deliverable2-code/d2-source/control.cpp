#include "control.h"

Control::Control()
{

}

int Control::launch(int argc, char** argv)
{
    // Needed for display on higher resolution systems
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
