

#ifndef MACHINELANGUAGE_SIMULATOR_MEMORY_H
#define MACHINELANGUAGE_SIMULATOR_MEMORY_H


#include <iostream>
#include "../../SmallClasses/Headers/Byte.h"
using namespace std;

class Memory {
private:
    Byte  cells[256];
public:
    void Initialize(Byte c[256]);
    void Clear();
    void WriteAtCell(int cellIndex,Byte Value);
    Byte GetCellAtIndex(int index);
};


#endif //MACHINELANGUAGE_SIMULATOR_MEMORY_H
