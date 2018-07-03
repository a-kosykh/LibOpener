#include "libopener.h"


void LibOpener::createInstance(QString path)
{
    _handlr = dlopen(path.toStdString().c_str(), RTLD_LAZY);
    if (!_handlr){
            std::cerr << "Cannot load library" << std::endl;
    }

    create_t* create_lib_instance = (create_t*) dlsym(_handlr,"create");
    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        std::cerr << "Cannot load symbol create: " << dlsym_error << std::endl;
    }

    lib_info = create_lib_instance();
}

void LibOpener::printInfo()
{
    if (!lib_info){
        std::cerr << "Instance is not loaded" << std::endl;
    }
    else {
        std::cout << "Lib name: " << lib_info->getName().toStdString() << std::endl;
        std::cout << "Type: " << lib_info->getType() << std::endl;
        std::cout << "TTP Amount: " << lib_info->getTTPS() << std::endl;
        std::cout << "UV Amount: " << lib_info->getUVS() << std::endl;
    }
}


