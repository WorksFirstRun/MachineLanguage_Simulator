
#include "../Headers/CPU.h"


CPU * CPU::Instance = nullptr;

CPU::CPU(Memory &mem, Screen &scr,ControlUnit & c) : memory(mem), screen(scr), cu(c) {
}


Register &CPU::GetRegisterAtCell(int cellIndex) {
    return registers[cellIndex];
}


CPU *CPU::GetInstance() {
    if (Instance == nullptr){
        static Screen s;
        static Memory m;
        static ControlUnit c;
        Instance = new CPU(m,s,c);
        Instance->cu.GetProgramCounter().SetStartingAddress(0);
    }
    return Instance;
}


void CPU::InitializeMemory(Memory &m) {
    memory = m;
}

Memory &CPU::GetMemory() {
    return memory;
}

ControlUnit &CPU::GetControlUnit() {
    return cu;
}

void CPU::TerminateProgram() {
    // maybe send a message to the screen or something
    exit(0);
}

Screen &CPU::GetScreen() {
    return screen;
}

CPU::~CPU() {
    delete Instance;
}

void CPU::RunEntireCycle() {
    while(true){
        Byte first = cu.GetProgramCounter().Fetch();
        Byte second = cu.GetProgramCounter().Fetch();
        if (!first.GetByte() && !second.GetByte()){
            continue;
        }
        char operand = first.GetByteInHex()[0];
        cu.GetInstructionRegister().Decode(operand,first,second);


        cu.ExecuteInstruction();
    }
};

