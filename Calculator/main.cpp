#include "caclulator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Caclulator w;
    w.show();

    return a.exec();
}
