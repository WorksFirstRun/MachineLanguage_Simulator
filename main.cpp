
#include "MainProgramClasses/Headers//CPU.h"
#include "MainProgramClasses//Headers/Memory.h"
#include "SmallClasses/Headers/Byte.h"
#include <iostream>
using namespace std;


int main(){
    int t=5;//number of instruction
    Byte input[10];
    int j = 0;
    for(int i=0;i<t;i++){
        string in;
        cin>>in;
        string k=in.substr(0,2);
        input[j].SetByteInHex(k);
        j++;
        input[j].SetByteInHex(in.substr(2,2));
        j++;
    }
    CPU *cpu = CPU::GetInstance();
    cpu->GetMemory().Initialize(input,t * 2);
    cpu->GetControlUnit().GetProgramCounter().SetStartingAddress(0);

    cpu->RunEntireCycle();





    return 0;
}
