#include "../../pch.h"
#include "../Headers/ALU.h"

MLByte ALU::add(MLByte a, MLByte b){
    MLByte c = 0;
    int value1 = NumbersConvertor::twoComplementToDecimal(a.GetByteInBinary());
    int value2 = NumbersConvertor::twoComplementToDecimal(b.GetByteInBinary());
    int newValue = NumbersConvertor::RepresentBinaryAsInteger(NumbersConvertor::RepresentIntegerAsBinary(value2 + value1));
    c.SetByte(newValue);
    return c;
}

MLByte ALU::FloatingPointAdd(MLByte a,MLByte b){
    float value1 = NumbersConvertor::RepresentBinaryAs_IEEE754_Decimal(a.GetByteInBinary());
    float value2 = NumbersConvertor::RepresentBinaryAs_IEEE754_Decimal(b.GetByteInBinary());
    float newValue = value1 + value2;
    MLByte newByte;
    newByte.SetByte(NumbersConvertor::RepresentBinaryAsInteger(NumbersConvertor::RepresentDecimalAs_IEEE754(newValue)));
    return newByte;
}

MLByte ALU::Bitwise_Or(MLByte a, MLByte b){
    MLByte c=0;
    c.SetByte(a.GetByte()| b.GetByte());
    return c;
}
MLByte ALU::Bitwise_And(MLByte a, MLByte b){
    MLByte c = 0;
    c.SetByte(a.GetByte() & b.GetByte());
    return c;
}
MLByte ALU::Xor(MLByte a, MLByte b){
    MLByte c=0;
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

bool ALU::areBothEqual(MLByte a, MLByte b) {
    return a.GetByte() == b.GetByte();
}

bool ALU::IsBigger(MLByte a, MLByte b) {
    return a.GetByte()>b.GetByte();
}