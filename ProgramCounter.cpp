
#include "../Headers/ProgramCounter.h"
#include "../Headers/CPU.h"

Byte ProgramCounter::Fetch() {
    if (byte.GetByte() > 255){
        // end the program since it reached end of the ram
        CPU::GetInstance()->TerminateProgram();
    }
    Byte memoryCell = CPU::GetInstance()->GetMemory().GetCellAtIndex(byte.GetByte());
    byte.SetByte((byte.GetByte() + 1));
    return memoryCell;
}

void ProgramCounter::SetStartingAddress(Byte StartingAddress){
    byte= StartingAddress;
}

ProgramCounter::ProgramCounter() = default;
