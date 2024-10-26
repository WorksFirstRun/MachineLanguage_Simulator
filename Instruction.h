
#ifndef MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
#define MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H

#include "../../SmallClasses/Headers/Byte.h"
#include <iostream>
using namespace std;

class Instruction {
private:
    int Ins;
    Byte R,S,T;
    Byte XY;
public:

    void InitializeInstruction(string Inp);//when you enter insruction
    int Get_Ins();
    Byte Get_R();
    Byte Get_XY();
    Byte Get_S();
    Byte Get_T();
    virtual ~Instruction();
};


#endif //MACHINELANGUAGE_SIMULATOR_INSTRUCTION_H
