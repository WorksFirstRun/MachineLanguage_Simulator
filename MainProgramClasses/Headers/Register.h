//
// Created by toose on 10/23/2024.
//

#ifndef MACHINELANGUAGE_SIMULATOR_REGISTER_H
#define MACHINELANGUAGE_SIMULATOR_REGISTER_H

#include <iostream>
#include "../../SmallClasses/Headers/MLByte.h"
using namespace std;

class Register {
protected:
    MLByte byte;
public:
    Register();
    MLByte GetByte();
    void SetByte(MLByte b);
    void ClearByte();

};


#endif //MACHINELANGUAGE_SIMULATOR_REGISTER_H
