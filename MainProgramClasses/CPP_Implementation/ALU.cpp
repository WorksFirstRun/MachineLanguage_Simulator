#include "../Headers/ALU.h"

Byte ALU::add(Byte a, Byte b){
    Byte c=0;
    c.SetByte(a.GetByte()+ b.GetByte());
    return c;
}
float ALU::add(float a,float b){
    return a+b;
}
Byte ALU::Bitwise_Or(Byte a, Byte b){
    Byte c=0;
    c.SetByte(a.GetByte()| b.GetByte());
    return c;
}
Byte ALU::Bitwise_And(Byte a, Byte b){
    Byte c=0;
    c.SetByte(a.GetByte()& b.GetByte());
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
