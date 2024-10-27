

#include "../Headers/InstructionRegister.h"
#include "../CPP_Implementation/Instructions_CPP/Instructions_CPP.cpp"


InstructionRegister::InstructionRegister() {
    instruction = new DefaultInstruction();
    instructions['1'] = new Instruction1();
    instructions['2'] = new Instruction2();
    instructions['3'] = new Instruction3();
    instructions['4'] = new Instruction4();
    instructions['5'] = new Instruction5();
    // instructions['6']
    instructions['b'] = new InstructionB();
    instructions['c'] = new InstructionC();
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
}


