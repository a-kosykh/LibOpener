#ifndef FIRSTLIB_H
#define FIRSTLIB_H

#include "firstlib_global.h"

class FIRSTLIBSHARED_EXPORT FirstLib : public LibInfo
{

public:
    FirstLib();
};

extern "C" FirstLib* create() {
    return new FirstLib;
}

#endif // FIRSTLIB_H
