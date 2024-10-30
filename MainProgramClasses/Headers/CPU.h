
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
    ControlUnit & cu;
    static CPU * Instance; // single tone Pattern
    CPU(Memory &mem, Screen &scr,ControlUnit & c);
    Memory & memory;
    Screen & screen;
    bool endOfCycle;
public:
    static CPU * GetInstance();
    Register & GetRegisterAtCell(int cellIndex);
    Memory & GetMemory();
    Screen & GetScreen();
    ControlUnit & GetControlUnit();
    void InitializeMemory(Memory & m);
    void RunEntireCycle();
    void RunOneCycle();
    void TerminateProgram();
    bool isTerminated();
    ~CPU();
};

#endif //MACHINELANGUAGE_SIMULATOR_CPU_H
