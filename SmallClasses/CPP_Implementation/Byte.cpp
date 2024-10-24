#include "../Headers/Byte.h"


string Byte::GetByteInHex() {
    return NumbersConvertor::RepresentIntegerAsHex(B);
}

void Byte::SetByteInHex(string hex) {
    B = NumbersConvertor::RepresentHexAsInteger(hex);
}

void Byte::SetByteInBinary(string binary) {
    B = NumbersConvertor::RepresentBinaryAsInteger(binary);
}

string Byte::GetByteInBinary() {
    return NumbersConvertor::RepresentIntegerAsBinary(B);
}

Byte::Byte(int b) : B(b){

}

Byte::Byte() {
    B = 0;
}

int Byte::GetByte() {
    return B;
}

void Byte::SetByte(int b) {
    b = b % 256;
    B = b;
}
