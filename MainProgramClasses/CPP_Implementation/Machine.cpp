
#include "../Headers/Machine.h"
#include "../Headers/Machine.h"
#include <fstream>
#include <vector>
#include <algorithm>

bool Machine::isValidHexPair(const string& hexPair) const {
    for(char c : hexPair) {
        if(!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))) {
            return false;
        }
    }
    return true;
}

void Machine::validateMemoryContent(const vector<Byte>& content) const {
    if (content.size() > 256) {
        throw runtime_error("Program size exceeds memory capacity (256 bytes)");
    }
}

Machine::Machine(string fileName) : memory(CPU::GetInstance()->GetMemory()) {
    if (fileName.empty()) {
        cerr << "Error: Filename cannot be empty" << endl;
        exit(1);
    }

    cpu = CPU::GetInstance();
    if (!cpu) {
        cerr << "Error: Failed to initialize CPU" << endl;
        exit(1);
    }

    vector<Byte> memoryContent;
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error: Failed to open file: " << fileName << endl;
        exit(1);
    }

    string line;
    size_t lineNumber = 0;
    while (getline(file, line)) {
        lineNumber++;

        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
        if (line.empty()) continue;

        if (line.length() % 2 != 0) {
            cerr << "Error: Invalid hex format at line " << lineNumber
                 << ": Line length must be even" << endl;
            file.close();
            exit(1);
        }

        for (int i = 0; i < line.length(); i += 2) {
            string hexPair = line.substr(i, 2);

            if (!isValidHexPair(hexPair)) {
                cerr << "Error: Invalid hex value at line " << lineNumber
                     << ", position " << (i + 1) << ": " << hexPair << endl;
                file.close();
                exit(1);
            }

            int value = NumbersConvertor::RepresentHexAsInteger(hexPair);
            if (value < 0 || value > 255) {
                cerr << "Error: Hex value out of range at line " << lineNumber
                     << ": " << hexPair << endl;
                file.close();
                exit(1);
            }

            memoryContent.push_back(Byte(value));
        }
    }
    file.close();

    if (memoryContent.size() > 256) {
        cerr << "Error: Program size exceeds memory capacity (256 bytes)" << endl;
        exit(1);
    }


    while (memoryContent.size() < 256) {
        memoryContent.push_back(Byte(0));
    }


    /*memory.Initialize(memoryContent.data(),);*/
    cpu->InitializeMemory(memory);
}

Machine::~Machine() {

}