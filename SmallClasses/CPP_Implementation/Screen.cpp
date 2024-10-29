#include "../Headers/Screen.h"
#include "../../Utilities/NumbersConvertor.h"

char Screen::PrintValueToTerminal(string value) {
    char v = (char) NumbersConvertor::RepresentHexAsInteger(value);
    cout << (char) NumbersConvertor::RepresentHexAsInteger(value) << endl;
    return v;
}

void Screen::PrintValueToFile(string value, string fileName) {
    ofstream outFile(fileName);

    if (outFile.is_open()) {
        outFile << value;
        outFile.close();
    } else {
        throw ios_base::failure("Failed to open file: " + fileName); // this should not happen
    }
}

Screen::Screen() = default;
