#include "../../Headers/Instruction.h"
#include <iostream>
#include "../../Headers/Register.h"
#include "../../Headers/CPU.h"
#include "../../../Utilities/NumbersConvertor.h"
#include "../../Headers/ALU.h"
using namespace std;



class Instruction1 : Instruction{
public:
    void Execute() override{
        string RegisterLocation = "0" + R.GetByteInHex()[1];
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        string MemoryLocation = XY.GetByteInHex();
        Memory & m = CPU::GetInstance()->GetMemory();
        r.SetByte(m.GetCellAtIndex(NumbersConvertor::RepresentHexAsInteger(MemoryLocation)));
    }

};

class Instruction2 : Instruction{
    void Execute() override{
        string RegisterLocation = "0" + R.GetByteInHex()[1];
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        r.SetByte(XY);
    }
};

class Instruction3 : Instruction{
    void Execute() override{
        if (!XY.GetByte()){
            Screen & s = CPU::GetInstance()->GetScreen();
            s.PrintValueToTerminal(R.GetByteInHex());
        }
        else{
            string RegisterLocation = "0" + R.GetByteInHex()[1];
            Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
            string MemoryLocation = XY.GetByteInHex();
            Memory & m = CPU::GetInstance()->GetMemory();
            m.WriteAtCell(NumbersConvertor::RepresentHexAsInteger(MemoryLocation),r.GetByte());
        }
    }
};

class Instruction4 : Instruction{
    void Execute() override{
        string RegisterLocation1 = "0" + XY.GetByteInHex()[0];
        string RegisterLocation2 = "0" + XY.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        r2.SetByte(r1.GetByte());
        r1.ClearByte();
    }
};


class Instruction5 : Instruction{
    void Execute() override{
        string RegisterLocation2 = "0" + XY.GetByteInHex()[0];
        string RegisterLocation3 = "0" + XY.GetByteInHex()[1];
        string RegisterLocation1 = "0" + R.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation3));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        Byte NewValue = ALU::add(r2.GetByte(),r3.GetByte());
        r1.SetByte(NewValue);
    }
};

