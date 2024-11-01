#include "../../pch.h"
#include "../Headers/Memory.h"
Memory::Memory(){
    for(int i=0;i<256;i++){
        cells[i]=0;
    }
}

void Memory::Initialize(MLByte c[256], int memoryCells)
{
    int i = 0;
    for (MLByte& b : cells) {
        b = *c;
        i++;
        if (i < memoryCells) { c++; }
        else { break; }
    }
}


void Memory::Initialize_at_Adress(MLByte *c,int memoryCells,int startAddress){
    int temp = startAddress;
    for(int k=0;k<memoryCells;k++ ){
        cells[temp]=*c;
        c++;
        temp++;
    }
}

void Memory::Clear() {
    for (MLByte & b : cells){
        b.SetByte(0);
    }
}

void Memory::WriteAtCell(int cellIndex, MLByte Value) {
    cells[cellIndex].SetByte(Value.GetByte());
}

MLByte Memory::GetCellAtIndex(int index) {
    return cells[index];
}