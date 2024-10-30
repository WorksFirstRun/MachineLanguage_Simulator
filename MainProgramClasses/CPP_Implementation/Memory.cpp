
#include "../Headers/Memory.h"
Memory::Memory(){
    for(int i=0;i<256;i++){
        cells[i]=0;
    }
}
void Memory::Initialize(Byte *c,int memoryCells) {
    int i=0;
    for (Byte & b : cells){
        b = *c;
        i++;
        if(i<memoryCells){c++;}
        else{ break;}
    }
}
void Memory::Initialize_at_Adress(Byte *c,int memoryCells,int Cell_Index){
    int temp=Cell_Index;
    for(int k=0;k<memoryCells;k++ ){
        cells[temp]=*c;
        c++;
        temp++;

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