#ifndef MACHINELANGUAGE_SIMULATOR_INSTRUCTIONREGISTER_H
#define MACHINELANGUAGE_SIMULATOR_INSTRUCTIONREGISTER_H

#include "Register.h"
#include "Instruction.h"
#include <iostream>
#include <unordered_map>
using namespace std;

class InstructionRegister {
private:
    Instruction * instruction;
    unordered_map<char,Instruction *> instructions;
public:
    InstructionRegister(); // initialize the instructions from 1 -> C
    void Decode(char operand,Byte R,Byte XY);
    Instruction * GetInstruction();
    ~InstructionRegister();
};


#endif //MACHINELANGUAGE_SIMULATOR_INSTRUCTIONREGISTER_H
