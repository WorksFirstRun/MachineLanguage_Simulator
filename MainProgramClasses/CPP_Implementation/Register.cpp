//
// Created by toose on 10/23/2024.
//

#include "../Headers/Register.h"

Byte Register::GetByte() {
    return byte;
}

void Register::SetByte(Byte b) {
    byte = b;
}

void Register::ClearByte() {
    byte.SetByte(0);
}

Register::Register() = default;