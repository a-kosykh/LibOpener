#ifndef LIBINFO
#define LIBINFO

#include <QString>
#include <vector>
#include <iostream>

class LibInfo {
protected:
    QString _name;
    int _type;
    int _ttps;
    int _uvs;
    std::vector<std::vector<int> > _lmaxs;
public:
    LibInfo(){}
    QString getName() {
        return _name;
    }
    int getType(){
        return _type;
    }
    int getTTPS(){
        return _ttps;
    }
    int getUVS(){
        return _uvs;
    }
//    void print(int ttpNum, int uvNum){
//        if (ttpNum < 1 || ttpNum > _ttps || uvNum < 1 || ttpNum > _uvs){
//            std::cerr << "Out of Range" << std::endl;
//            return 1;
//        }
//        std::cout << _lmaxs[ttpNum-1][uvNum-1];
//    }
};

typedef LibInfo* create_t();

#endif // LIBINFO

