
#include "../Headers/ControlUnit.h"
// all of these methods cant edit register at specific index so you can add it
void ControlUnit::Load(Memory &M,Register &R,Instruction Ins){
    R.SetByte(M.GetCellAtIndex(Ins.Get_XY().GetByte()));
}
void ControlUnit::Store(Memory &M,Register &R,Instruction Ins){
    M.WriteAtCell(Ins.Get_XY().GetByte(),R.GetByte());

}
// I cant do move because you make the Register as one Byte but it should be array of Bytes and i dont want to edit
void ControlUnit::Jump(ProgramCounter &P,Memory &M,Register &R,Instruction Ins){
    int k =0;//suppose k is the value of register 0
    int v =5;//suppose v is the value of register Ins.Get_R
    if(k==v){P.Change_address(Ins.Get_XY());}

}
void ControlUnit::Halt(){
    exit(0) ;
}

