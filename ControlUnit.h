
#ifndef MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H
#define MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H

#include "InstructionRegister.h"
#include "ProgramCounter.h"
using namespace std;

class ControlUnit {
private:
    ProgramCounter  pc;
    InstructionRegister  ir;
public:
    ProgramCounter & GetProgramCounter();
    InstructionRegister & GetInstructionRegister();
    ControlUnit();
    void ExecuteInstruction();
};


#endif //MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H
