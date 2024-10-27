#include "../Headers/Screen.h"

void Screen::PrintValueToTerminal(string value) {
    cout << value << endl;
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
