

#ifndef MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H
#define MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H

#include "Register.h"
#include "Memory.h"
#include <iostream>
using namespace std;

class ProgramCounter : public Register {
public:
    ProgramCounter();
    void SetStartingAddress(Byte StartingAddress);
    Byte Fetch(Memory & memory);
};


#endif //MACHINELANGUAGE_SIMULATOR_PROGRAMCOUNTER_H
