#include <sstream>
#include "NumbersConvertor.h"

string NumbersConvertor::RepresentIntegerAsHex(int i) {
    stringstream ss;
    ss << hex << i ;
    string result = ss.str();
    if (result.size() <= 1){
        result = "0" + result;
    }

    return result;
}

string NumbersConvertor::RepresentIntegerAsBinary(int i) {
    bitset<8> binary(i);
    return binary.to_string();
}

int NumbersConvertor::RepresentHexAsInteger(string Hexa) {
    if (Hexa.size() > 2){
        Hexa =  Hexa.substr(0,2);
    }
    else if (Hexa.size() == 0){
        return 0;
    }

    int result;
    std::stringstream ss;
    ss << std::hex << Hexa;
    ss >> result;
    return result;
}

int NumbersConvertor::RepresentBinaryAsInteger(string binary) {
    return bitset<8>(binary).to_ulong();
}


