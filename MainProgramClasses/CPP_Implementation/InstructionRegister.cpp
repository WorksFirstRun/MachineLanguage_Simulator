

#include "../Headers/InstructionRegister.h"

InstructionRegister::InstructionRegister() {
    // initialize the instructions from 1 -> C which is halt in the class map (instructions) here
    // for example we do the following
    // map['1'] = new Instruction1() -> which is a derived class from the abstract class Instruction
}

void InstructionRegister::Decode(char operand, Byte R, Byte XY) {
    instruction = instructions[operand];
    instruction->InitializeInstruction(R,XY);
}

Instruction *InstructionRegister::GetInstruction() {
    return instruction;
}

InstructionRegister::~InstructionRegister() {
    for (auto & pair : instructions){
        delete pair.second;
    }
    instructions.clear();
    delete instruction;
}


