
#include "../Headers/Instruction.h"
#include <string>

void Instruction::InitializeInstruction(std::string Inp) {
    Ins=Inp[0]-'0';
    R.SetByteInHex(std::string(1, Inp[1]));
    XY.SetByteInHex(Inp.substr(2,2));
    S.SetByteInHex(std::string(1, Inp[2]));
    T.SetByteInHex(std::string(1, Inp[3]));

}
int Instruction::Get_Ins(){
    return Ins;
}
Byte Instruction::Get_R(){
    return R;
}
Byte Instruction::Get_XY(){
    return XY;
}
Byte Instruction::Get_S(){
    return S;
}
Byte Instruction::Get_T(){
    return T;
}
Instruction::~Instruction() = default; // just to be able to remove (delete since iam using pointers) derived classes from the Instruction abstract class
