
#ifndef MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
#define MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H

#include "../../SmallClasses/Headers/MLByte.h"
#include <iostream>
using namespace std;

class Instruction {
protected:
    MLByte R;
    MLByte XY;
public:
    virtual void Execute() = 0;
    void InitializeInstruction(MLByte r,MLByte xy);
    virtual ~Instruction();
};


#endif //MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
