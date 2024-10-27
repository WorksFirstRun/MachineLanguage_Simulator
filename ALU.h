
#ifndef MACHINELANGUAGE_SIMULATOR_ALU_H
#define MACHINELANGUAGE_SIMULATOR_ALU_H

#include "ControlUnit.h"

class ALU {
public:
    static Byte add(Byte a, Byte b);
    static float add(float a,float b);
    static Byte Bitwise_Or(Byte a, Byte b);
    static Byte Bitwise_And(Byte a, Byte b);
    static Byte Xor(Byte a, Byte b);
    static unsigned int Right_cycle(unsigned int a,int steps);
    static bool areBothEqual(Byte a, Byte b);
    static bool IsBigger(Byte a,Byte b);
};


#endif //MACHINELANGUAGE_SIMULATOR_ALU_H
