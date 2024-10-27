//
// Created by toose on 10/23/2024.
//

#ifndef MACHINELANGUAGE_SIMULATOR_REGISTER_H
#define MACHINELANGUAGE_SIMULATOR_REGISTER_H

#include <iostream>
#include "../../SmallClasses/Headers/Byte.h"
using namespace std;

class Register {
protected:
    Byte byte;
public:
    Register();
    Byte GetByte();
    void SetByte(Byte b);
    void ClearByte();

};


#endif //MACHINELANGUAGE_SIMULATOR_REGISTER_H
