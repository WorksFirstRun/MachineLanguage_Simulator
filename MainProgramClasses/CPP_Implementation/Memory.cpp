
#include "../Headers/Memory.h"
void Memory::Initialize(Byte *c,int instructionsNumber) {
    int i=0;
    for (Byte & b : cells){
        b = *c;
        i++;
        if(i<instructionsNumber){c++;}
        else{ break;}

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

Memory::Memory(){
    for(auto & cell : cells){
        cell=0;
    }
}
