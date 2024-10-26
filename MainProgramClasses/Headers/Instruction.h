
#ifndef MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
#define MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H

#include "../../SmallClasses/Headers/Byte.h"
#include <iostream>
using namespace std;

class Instruction {
protected:
    Byte R;
    Byte XY;
public:
    virtual void Execute() = 0;
    void InitializeInstruction(Byte r,Byte xy);
    virtual ~Instruction();
};


#endif //MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
