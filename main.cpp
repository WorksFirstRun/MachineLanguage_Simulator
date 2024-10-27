#include "../Headers/CPU.h"
#include "../Headers/Memory.h"

int main(){
    int t=5;//number of instruction
    Byte input[10];

    for(int i=0;i<t;i++){
        string in;
        cin>>in;
        string k=in.substr(0,2);
        input[i].SetByteInHex(k);
        input[i+1].SetByteInHex(in.substr(2,2));
        i++;
//        cout<<NumbersConvertor::RepresentIntegerAsHex(input[i].GetByte())<<" ";
//        cout<<NumbersConvertor::RepresentIntegerAsHex(input[i+1].GetByte())<<"\n";
//        cout.flush();

    }
    CPU *cpu = CPU::GetInstance();
    cpu->GetMemory().Initialize(input,t);
    cpu->GetControlUnit().GetProgramCounter().SetStartingAddress(0);

    cpu->RunEntireCycle();





    return 0;
}
