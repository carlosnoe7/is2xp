#include "rentafacil.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RentaFacil w;
    w.show();

    return a.exec();
}
