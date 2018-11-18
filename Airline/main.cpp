#include "airlineproject.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Airlineproject w;
    w.show();

    return a.exec();
}
