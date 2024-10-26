
#include "../Headers/CPU.h"


CPU * CPU::Instance = nullptr;


CPU::CPU(Memory &mem, Screen &scr) : memory(mem), screen(scr) {
}


Register &CPU::GetRegisterAtCell(int cellIndex) {
    return registers[cellIndex];
}


CPU *CPU::GetInstance() {
    if (Instance == nullptr){
        static Screen screen;
        static Memory memory;
        Instance = new CPU(memory,screen);
    }
    return Instance;
}


void CPU::InitializeMemory(Memory &m) {
    memory = m;
}

Memory &CPU::GetMemory() {
    return memory;
}

