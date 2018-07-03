#include <QCoreApplication>
#include <iostream>
#include "libopener.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LibOpener opener;
    opener.createInstance("../build-FirstLib-Desktop-Debug/libFirstLib.so");
    opener.printInfo();

    return a.exec();
}

