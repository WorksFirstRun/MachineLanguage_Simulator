

#ifndef MACHINELANGUAGE_SIMULATOR_MEMORY_H
#define MACHINELANGUAGE_SIMULATOR_MEMORY_H


#include <iostream>
#include "../../SmallClasses/Headers/Byte.h"
using namespace std;

class Memory {
private:
    Byte cells[256];
public:
    Memory();

    void Initialize(Byte c[256], int memoryCells);

    void Clear();

    void WriteAtCell(int cellIndex, Byte Value);

    Byte GetCellAtIndex(int index);

    void Initialize_at_Adress(Byte *c, int memoryCells, int Cell_Index);
};


#endif //MACHINELANGUAGE_SIMULATOR_MEMORY_H