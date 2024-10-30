

#ifndef MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H
#define MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H

#include "Register.h"
#include "Memory.h"
class CPU;
#include <iostream>
using namespace std;

class ProgramCounter : public Register {
public:
    ProgramCounter();
    void SetStartingAddress(MLByte StartingAddress);
    MLByte Fetch();
};


#endif //MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H
