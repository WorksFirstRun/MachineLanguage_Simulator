
#include "../Headers/ProgramCounter.h"

ProgramCounter::ProgramCounter(Byte StartingAddress) {
    byte = StartingAddress;
}
void ProgramCounter::  Change_address(Byte StartingAddress){
    byte= StartingAddress;
}

Byte ProgramCounter::Fetch(Memory & memory) {

    Byte memoryCell = memory.GetCellAtIndex(byte.GetByte());
    byte.SetByte((byte.GetByte() + 1) % 256);
    return memoryCell;
}
