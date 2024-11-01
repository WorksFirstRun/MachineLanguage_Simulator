#include "../../pch.h"
#include "../Headers/CPU.h"


CPU * CPU::Instance = nullptr;

CPU::CPU(Memory &mem, Screen &scr,ControlUnit & c) : memory(mem), screen(scr), cu(c) , endOfCycle(false){
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
    endOfCycle = true;
}

bool CPU::isTerminated()
{
    return endOfCycle;
}

void CPU::SetTerminated(bool value)
{
    endOfCycle = value;
}

Screen &CPU::GetScreen() {
    return screen;
}

CPU::~CPU() {
    delete Instance;
}

void CPU::RunEntireCycle() {
    while(!endOfCycle){
        MLByte first = cu.GetProgramCounter().Fetch();
        MLByte second = cu.GetProgramCounter().Fetch();
        if (endOfCycle){
            break;
        }
        if (!first.GetByte() && !second.GetByte()){
            continue;
        }
        char operand = first.GetByteInHex()[0];
        cu.GetInstructionRegister().Decode(operand,first,second);


        cu.ExecuteInstruction();
    }
};

void CPU::RunOneCycle() {
    MLByte first = cu.GetProgramCounter().Fetch();
    MLByte second = cu.GetProgramCounter().Fetch();
    if (!(!first.GetByte() && !second.GetByte())) {
        char operand = first.GetByteInHex()[0];
        cu.GetInstructionRegister().Decode(operand, first, second);

        cu.ExecuteInstruction();
    }
    
}

