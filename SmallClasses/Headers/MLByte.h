#ifndef MACHINELANGUAGE_SIMULATOR_BYTE_H
#define MACHINELANGUAGE_SIMULATOR_BYTE_H

#include <iostream>
#include "../../Utilities/NumbersConvertor.h"
using namespace std;

class MLByte {
private:
    int B; // 8 bits integer 0->255
public:
    MLByte();
    MLByte(int b);
    string GetByteInHex();
    void SetByteInHex(string hexa);
    void SetByteInBinary(string binary);
    string GetByteInBinary();
    int GetByte();
    void SetByte(int b);
};


#endif
