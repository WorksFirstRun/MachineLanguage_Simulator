
#ifndef MACHINELANGUAGE_SIMULATOR_CPU_H
#define MACHINELANGUAGE_SIMULATOR_CPU_H

#include "Register.h"
#include "Memory.h"
#include "ControlUnit.h"
#include "../../SmallClasses/Headers/Screen.h"
#include <iostream>
using namespace std;

class CPU {
private:
    Register registers[16];
    ControlUnit cu;
    Memory & memory;
    Screen & screen;
    static CPU Instance; // single tone Pattern
    CPU(); // single tone Pattern
public:
    void InitializeCPU_SingleTone();
    void RunEntireCycle();
    ~CPU();
    // maybe we should consider 3 more functions for each step (fetch , decode, execute)

};


#endif //MACHINELANGUAGE_SIMULATOR_CPU_H
