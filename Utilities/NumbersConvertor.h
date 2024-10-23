

#ifndef MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H
#define MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H

#include <iostream>
#include <bitset>
using namespace std;


class NumbersConvertor {
public:
    static string RepresentIntegerAsHex(int i);
    static string RepresentIntegerAsBinary(int i);
    static int RepresentHexAsInteger(string Hexa);
    static int RepresentBinaryAsInteger(string binary);
};


#endif //MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H
