//
// Created by toose on 10/23/2024.
//
#include "pch.h"
#include "../Headers/Register.h"

MLByte Register::GetByte() {
    return byte;
}

void Register::SetByte(MLByte b) {
    byte = b;
}

void Register::ClearByte() {
    byte.SetByte(0);
}

Register::Register() = default;