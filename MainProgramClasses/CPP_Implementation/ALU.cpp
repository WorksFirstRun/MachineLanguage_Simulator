#include "../Headers/ALU.h"

Byte ALU::add(Byte a, Byte b){
    Byte c = 0;
    int value1 = NumbersConvertor::twoComplementToDecimal(a.GetByteInBinary());
    int value2 = NumbersConvertor::twoComplementToDecimal(b.GetByteInBinary());
    int newValue = NumbersConvertor::RepresentBinaryAsInteger(NumbersConvertor::RepresentIntegerAsBinary(value2 + value1));
    c.SetByte(newValue);
    return c;
}

Byte ALU::FloatingPointAdd(Byte a,Byte b){
    float value1 = NumbersConvertor::RepresentBinaryAs_IEEE754_Decimal(a.GetByteInBinary());
    float value2 = NumbersConvertor::RepresentBinaryAs_IEEE754_Decimal(b.GetByteInBinary());
    float newValue = value1 + value2;
    Byte newByte;
    newByte.SetByte(NumbersConvertor::RepresentBinaryAsInteger(NumbersConvertor::RepresentDecimalAs_IEEE754(newValue)));
    return newByte;
}

Byte ALU::Bitwise_Or(Byte a, Byte b){
    Byte c=0;
    c.SetByte(a.GetByte()| b.GetByte());
    return c;
}
Byte ALU::Bitwise_And(Byte a, Byte b){
    Byte c = 0;
    c.SetByte(a.GetByte() & b.GetByte());
    return c;
}
Byte ALU::Xor(Byte a, Byte b){
    Byte c=0;
    c.SetByte(a.GetByte()^ b.GetByte());
    return c;
}
unsigned int ALU::Right_cycle(unsigned int a,int steps){
    steps=steps%8;
    unsigned int rightBits = a & ((1U << steps) - 1);
    a >>= steps;

    a |= (rightBits << (8 - steps));

    return a;
}

bool ALU::areBothEqual(Byte a, Byte b) {
    return a.GetByte() == b.GetByte();
}

bool ALU::IsBigger(Byte a, Byte b) {
    return a.GetByte()>b.GetByte();
}