#ifndef LIBOPENER
#define LIBOPENER

#include "libinfo.h"
#include <QString>
#include <dlfcn.h>

class LibOpener {
private:
    void* _handlr;
    LibInfo *lib_info;
public:
    LibOpener(){}
    void createInstance(QString path);
    void printInfo();
};

#endif // LIBOPENER

