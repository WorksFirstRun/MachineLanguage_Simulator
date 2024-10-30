#ifndef MACHINELANGUAGE_SIMULATOR_MACHINE_H
#define MACHINELANGUAGE_SIMULATOR_MACHINE_H

#include "CPU.h"
#include "Memory.h"
#include "../../Utilities/NumbersConvertor.h"
#include "../../SmallClasses/Headers/MLByte.h"
#include <iostream>
using namespace std;

class Machine {
private:
    CPU * cpu;
    Memory memory;
public:
    Machine(); // initialize the CPU and memory
    void InitializeCPU();
    void InitializeMemory(vector <string>);
    void InitializeMemory(vector <string>,int startAddress);
    CPU * GetCPU();
};


#endif //MACHINELANGUAGE_SIMULATOR_MACHINE_H
