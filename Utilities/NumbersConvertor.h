

#ifndef MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H
#define MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H

#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;


class NumbersConvertor {
public:
    static string RepresentIntegerAsHex(int i);
    static string RepresentIntegerAsBinary(int i);
    static int RepresentHexAsInteger(string Hexa);
    static int RepresentBinaryAsInteger(string binary);
    static double RepresentBinaryAs_IEEE754_Decimal(string binary);
    static int twoComplementToDecimal(string binary);
    static string RepresentDecimalAs_IEEE754(float decimal);
};


#endif //MACHINELANGUAGE_SIMULATOR_NUMBERSCONVERTOR_H
