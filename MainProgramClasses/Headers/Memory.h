

#ifndef MACHINELANGUAGE_SIMULATOR_MEMORY_H
#define MACHINELANGUAGE_SIMULATOR_MEMORY_H


#include <iostream>
#include "../../SmallClasses/Headers/MLByte.h"
using namespace std;

class Memory {
private:
    MLByte cells[256];
public:
    Memory();

    void Initialize(MLByte c[256], int memoryCells);

    void Clear();

    void WriteAtCell(int cellIndex, MLByte Value);

    MLByte GetCellAtIndex(int index);

    void Initialize_at_Adress(MLByte *c, int memoryCells, int startAddress);
};


#endif //MACHINELANGUAGE_SIMULATOR_MEMORY_H