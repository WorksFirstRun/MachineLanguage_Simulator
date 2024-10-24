#ifndef MACHINELANGUAGE_SIMULATOR_MACHINE_H
#define MACHINELANGUAGE_SIMULATOR_MACHINE_H

#include "CPU.h"
#include "Memory.h"
#include <iostream>
using namespace std;

class Machine {
private:
    CPU cpu;
    Memory & memory;
public:
    Machine(string fileName); // uses the fileName to initialze the memory using its own method
};


#endif //MACHINELANGUAGE_SIMULATOR_MACHINE_H
