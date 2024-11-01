#include "../../pch.h"
#include "../Headers/MLByte.h"


string MLByte::GetByteInHex() {
    return NumbersConvertor::RepresentIntegerAsHex(B);
}

void MLByte::SetByteInHex(string hex) {
    B = NumbersConvertor::RepresentHexAsInteger(hex);
}

void MLByte::SetByteInBinary(string binary) {
    B = NumbersConvertor::RepresentBinaryAsInteger(binary);
}

string MLByte::GetByteInBinary() {
    return NumbersConvertor::RepresentIntegerAsBinary(B);
}

MLByte::MLByte(int b) : B(b){

}

MLByte::MLByte() {
    B = 0;
}

int MLByte::GetByte() {
    return B;
}

void MLByte::SetByte(int b) {
    B = b;
}
