
#include "../Headers/Memory.h"

void Memory::Initialize(Byte *c) {
    for (Byte & b : cells){
        b = *c;
        c++;
    }
}

void Memory::Clear() {
    for (Byte & b : cells){
        b.SetByte(0);
    }
}

void Memory::WriteAtCell(int cellIndex, Byte Value) {
    cells[cellIndex].SetByte(Value.GetByte());
}

Byte Memory::GetCellAtIndex(int index) {
    return cells[index];
}
