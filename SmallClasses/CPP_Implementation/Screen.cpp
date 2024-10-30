#include "pch.h"
#include "../Headers/Screen.h"
#include "../../Utilities/NumbersConvertor.h"

void Screen::PrintValueToTerminal(string value) {
    printedValue = (char) NumbersConvertor::RepresentHexAsInteger(value);
    cout << (char) NumbersConvertor::RepresentHexAsInteger(value) << endl;
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

char Screen::GetPrintedValue()
{
    return printedValue;
}

Screen::Screen() : printedValue(NULL)
{
	
}
