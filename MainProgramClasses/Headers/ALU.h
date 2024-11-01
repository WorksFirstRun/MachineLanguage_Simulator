
#ifndef MACHINELANGUAGE_SIMULATOR_ALU_H
#define MACHINELANGUAGE_SIMULATOR_ALU_H

#include "ControlUnit.h"
#include "../../Utilities/NumbersConvertor.h"

class ALU {
public:
    static MLByte add(MLByte a, MLByte b);
    static MLByte FloatingPointAdd(MLByte a,MLByte b);
    static MLByte Bitwise_Or(MLByte a, MLByte b);
    static MLByte Bitwise_And(MLByte a, MLByte b);
    static MLByte Xor(MLByte a, MLByte b);
    static unsigned int Right_cycle(unsigned int a,int steps);
    static bool areBothEqual(MLByte a, MLByte b);
    static bool IsBigger(MLByte a, MLByte b);
};


#endif //MACHINELANGUAGE_SIMULATOR_ALU_H
