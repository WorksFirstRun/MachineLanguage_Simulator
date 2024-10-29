#include <sstream>
#include "NumbersConvertor.h"

string NumbersConvertor::RepresentIntegerAsHex(int i) {
    if (i < 0){
        i = abs(i);
    }
    stringstream ss;
    ss << hex << i ;
    string result = ss.str();
    if (result.size() <= 1){
        result = "0" + result;
    }

    return result;
}

int NumbersConvertor::twoComplementToDecimal(std::string binary) {
    int n = binary.length();

    int value = bitset<32>(binary).to_ulong();

    if (binary[0] == '1') {
        value -= (1 << n);
    }

    return value;
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

double NumbersConvertor::RepresentBinaryAs_IEEE754_Decimal(string input) {//you have to check if the input is 8 bit
    double sign = input[0] - '0';
    if (sign == 0) {
        sign = 1;
    } else {
        sign = -1;
    }
//4
    int Exp = NumbersConvertor::RepresentBinaryAsInteger(input.substr(1, 3)) - 4;
    if (Exp >= 4) {
        int Sub = NumbersConvertor::RepresentBinaryAsInteger(input.substr(4, 4));
        Sub = Sub << (Exp - 4);

        return sign * Sub;
    } else {
        int Sub = 0;
        double Fractional = 0;
        if (Exp == 0) {
            for (int i = 1; i <= 4; i++) {
                string Cut = input.substr(4, 4);
                if (Cut[i-1] == '1') {
                    Fractional += pow(2, -i);
                }
            }
            return sign * Fractional;
        } else {
            int temp;
            if(Exp>0) {
                Sub = NumbersConvertor::RepresentBinaryAsInteger(input.substr(4, Exp));
                temp=Exp;
                string Cut = input.substr(4 + temp, 4 - temp);
                for (int i = 1; i <= 4; i++) {

                    if (Cut[i-1] == '1') {
                        Fractional += pow(2, -i);
                    }
                }
                return sign * (Fractional + Sub);

            } else{

                string cut = input.substr(4 , 4);
                for(int i=0;i< abs(Exp);i++){
                    cut='0'+cut;
                }
                for (int i = 1; i <= cut.length(); i++) {

                    if (cut[i-1] == '1') {
                        Fractional += pow(2, -i);
                    }
                }
                return sign *Fractional;

            }

        }

    }
}


bool isPowerOfTwo(int n) {
    return (n > 0) && (n & (n - 1)) == 0;//Bit mask
}

bool hasFiniteBinaryRepresentation(float num) {
    double integerPart;
    double fractionalPart = modf(num, &integerPart);

    if (fractionalPart == 0.0) {
        return true;
    }

    int denominator = 1;
    while (fractionalPart != round(fractionalPart)) {
        fractionalPart *= 2;
        denominator *= 2;
        if (denominator > (1 << 20)) {
            return false;
        }
    }

    return isPowerOfTwo(denominator);
}

string NumbersConvertor::RepresentDecimalAs_IEEE754(float x){

    if(!hasFiniteBinaryRepresentation(x)){
        return "00000000";
    }
    int number=abs(x);
    float Fraction=x-number;
    string output;
    float temp=2*Fraction;
    if(temp-(int)temp==0)output="1";
    while (!(temp-(int)temp==0)){
        if(temp-(int)temp!=1){
            temp=2*temp;
            output+="0";
        }
        else{
            temp=2*temp;
            output+="1";
        }
    }
    string binary_repsentation;
    string Decimal="";
    if (number == 0) Decimal= "0";  // Special case for zero

    while (number > 0) {
        Decimal = (number % 2 == 0 ? "0" : "1") + Decimal;
        number /= 2;
    }

    string sign="0";
    if(x<0)sign="1";
    int num=Decimal.size()+4;
    string Exp="";
    if (num == 0) Exp= "0";  // Special case for zero

    while (num > 0) {
        Exp = (num % 2 == 0 ? "0" : "1") + Exp;
        num /= 2;
    }

    binary_repsentation=sign+Exp+Decimal+output;
    if(binary_repsentation.size()>8){
        if (sign == "0"){
            return "01110000";
        }
        else{
            return "11110000";
        }
    }
    return binary_repsentation;
}




