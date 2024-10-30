
#ifndef MACHINELANGUAGESIMULATORLOGICLIBRARY
#define MACHINELANGUAGESIMULATORLOGICLIBRARY
#include "../../Headers/Instruction.h"
#include <iostream>
#include "../../Headers/Register.h"
#include "../../Headers/CPU.h"
#include "../../Headers/ALU.h"
using namespace std;

class DefaultInstruction : public Instruction{
    void Execute() override{
        // do nothing
    };

};

class Instruction1 : public Instruction{
public:
    void Execute() override{
        string RegisterLocation = string(1,'0') + R.GetByteInHex()[1] ;
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        string MemoryLocation = XY.GetByteInHex();
        Memory & m = CPU::GetInstance()->GetMemory();
        r.SetByte(m.GetCellAtIndex(NumbersConvertor::RepresentHexAsInteger(MemoryLocation)));
    }

};

class Instruction2 : public Instruction{
    void Execute() override{
        string RegisterLocation = string(1,'0') + R.GetByteInHex()[1];
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        r.SetByte(XY);
    }
};

class Instruction3 : public Instruction{
    void Execute() override{
        if (!XY.GetByte()){
            string RegisterLocation = string(1,'0') + R.GetByteInHex()[1];
            Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
            Screen & s = CPU::GetInstance()->GetScreen();
            MLByte value = r.GetByte();
            s.PrintValueToTerminal(NumbersConvertor::RepresentIntegerAsHex(value.GetByte()));
        }
        else{
            string RegisterLocation = string(1,'0') + R.GetByteInHex()[1];
            Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
            string MemoryLocation = XY.GetByteInHex();
            Memory & m = CPU::GetInstance()->GetMemory();
            m.WriteAtCell(NumbersConvertor::RepresentHexAsInteger(MemoryLocation),r.GetByte());
        }
    }
};

class Instruction4 : public Instruction{
    void Execute() override{
        string RegisterLocation1 = string(1,'0') + XY.GetByteInHex()[0];
        string RegisterLocation2 = string(1,'0') + XY.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        r2.SetByte(r1.GetByte());
        r1.ClearByte();
    }
};


class Instruction5 : public Instruction{
    void Execute() override{
        string RegisterLocationNewResult = string(1,'0') + R.GetByteInHex()[1];
        string RegisterLocationXYFirst = string(1,'0') + XY.GetByteInHex()[0];
        string RegisterLocationXYSecond = string(1,'0') + XY.GetByteInHex()[1];
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocationNewResult));
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocationXYFirst));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocationXYSecond));
        MLByte NewValue = ALU::add(r2.GetByte(),r3.GetByte());
        r1.SetByte(NewValue);
    }
};

class Instruction6 : public Instruction{
    void Execute() override{
        string RegisterLocation1 = string(1,'0') + R.GetByteInHex()[1];
        string RegisterLocation2 = string(1, '0') + XY.GetByteInHex()[0];
        string RegisterLocation3 = string(1,'0') + XY.GetByteInHex()[1];
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation3));
        MLByte NewByte = ALU::FloatingPointAdd(r2.GetByte(),r3.GetByte());
        r1.SetByte(NewByte);
    }
};


class Instruction7:public Instruction{
    void Execute() override{
        string RegisterLocation2 = string(1,'0') + XY.GetByteInHex()[0];
        string RegisterLocation3 = string(1,'0') + XY.GetByteInHex()[1];
        string RegisterLocation1 = string(1,'0') + R.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation3));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        MLByte New = ALU::Bitwise_Or(r2.GetByte(),r3.GetByte());
        r1.SetByte(New);
    }
};
class Instruction8:public Instruction{
    void Execute() override{
        string RegisterLocation2 = string(1,'0') + XY.GetByteInHex()[0];
        string RegisterLocation3 = string(1,'0') + XY.GetByteInHex()[1];
        string RegisterLocation1 = string(1,'0') + R.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation3));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        MLByte New=ALU::Bitwise_And(r2.GetByte(),r3.GetByte());
        r1.SetByte(New);
    }
};
class Instruction9:public Instruction{
    void Execute() override{
        string RegisterLocation2 = string(1,'0') + XY.GetByteInHex()[0];
        string RegisterLocation3 = string(1,'0') + XY.GetByteInHex()[1];
        string RegisterLocation1 = string(1,'0') + R.GetByteInHex()[1];
        Register & r2 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation2));
        Register & r3 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation3));
        Register & r1 = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation1));
        MLByte New=ALU::Xor(r2.GetByte(),r3.GetByte());
        r1.SetByte(New);
    }
};
class InstructionA:public Instruction{
    void Execute() override{
        string  RegisterLocation = string(1,'0')+R.GetByteInHex()[1];
        Register &r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        int steps = NumbersConvertor::RepresentHexAsInteger(string(1,(XY.GetByteInHex()[1])));
        unsigned int Regist = r.GetByte().GetByte();
        MLByte New = ALU::Right_cycle(Regist,steps);
        r.SetByte(New);
    }
};


class InstructionB : public Instruction{
    void Execute() override{
        string RegisterLocation = string(1,'0') + R.GetByteInHex()[1];
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        Register & r0 = CPU::GetInstance()->GetRegisterAtCell(0);
        if (ALU::areBothEqual(r.GetByte(),r0.GetByte())){
            MLByte NewPattern = XY.GetByte();
            CPU::GetInstance()->GetControlUnit().GetProgramCounter().SetStartingAddress(NewPattern);
        }
    }
};


class InstructionC : public Instruction{
    void Execute() override{
        CPU::GetInstance()->TerminateProgram();
    }
};

class InstructionD:public Instruction{
    void Execute() override{
        string RegisterLocation = string(1,'0') + R.GetByteInHex()[1];
        Register & r = CPU::GetInstance()->GetRegisterAtCell(NumbersConvertor::RepresentHexAsInteger(RegisterLocation));
        Register & r0 = CPU::GetInstance()->GetRegisterAtCell(0);
        if (ALU::IsBigger(r.GetByte(),r0.GetByte())){
            MLByte NewPattern = XY.GetByte();
            CPU::GetInstance()->GetControlUnit().GetProgramCounter().SetStartingAddress(NewPattern);
        }
    }
};
#endif // MACHINELANGUAGESIMULATORLOGICLIBRARY




