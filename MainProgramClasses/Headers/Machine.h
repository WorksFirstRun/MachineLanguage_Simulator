#ifndef MACHINELANGUAGE_SIMULATOR_MACHINE_H
#define MACHINELANGUAGE_SIMULATOR_MACHINE_H

#include "CPU.h"
#include "Memory.h"
#include "vector"
#include <iostream>
#include <stdexcept>
using namespace std;

class Machine {
private:
    CPU* cpu;
    Memory & memory;

    // Helper methods for validation
    bool isValidHexPair(const string& hexPair) const;
    void validateMemoryContent(const vector<Byte>& content) const;

public:
    Machine(string fileName);
    ~Machine();
};


#endif //MACHINELANGUAGE_SIMULATOR_MACHINE_H