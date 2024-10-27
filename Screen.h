#ifndef MACHINELANGUAGE_SIMULATOR_SCREEN_H
#define MACHINELANGUAGE_SIMULATOR_SCREEN_H

#include <iostream>
#include <fstream>
using namespace std;

class Screen {
public:
    Screen();
    void PrintValueToTerminal(string value);
    void PrintValueToFile(string value,string fileName);
};


#endif //MACHINELANGUAGE_SIMULATOR_SCREEN_H
