

#include "../Headers/InstructionRegister.h"

InstructionRegister::InstructionRegister() {

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


