
#include "../Headers/ProgramCounter.h"


Byte ProgramCounter::Fetch(Memory & memory) {

    Byte memoryCell = memory.GetCellAtIndex(byte.GetByte());
    byte.SetByte((byte.GetByte() + 1) % 256);
    return memoryCell;
}

void ProgramCounter::SetStartingAddress(Byte StartingAddress){
    byte= StartingAddress;
}

ProgramCounter::ProgramCounter() = default;
