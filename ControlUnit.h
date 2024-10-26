
#ifndef MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H
#define MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H

#include "InstructionRegister.h"
#include "ProgramCounter.h"
#include "Instruction.h"
using namespace std;

class ControlUnit {
private:
    ProgramCounter pc;
    InstructionRegister ir;
public:
    ProgramCounter & GetProgramCounter();
    InstructionRegister & GetInstructionRegister();
    void Load(Memory &M,Register &R,Instruction Ins);
    void Store(Memory &M,Register &R,Instruction Ins);
    void Jump(ProgramCounter &P,Memory &M,Register &R,Instruction Ins);
    ControlUnit();
    void Halt();
    void ExecuteInstruction();

};


#endif //MACHINELANGUAGE_SIMULATOR_CONTROLUNIT_H
