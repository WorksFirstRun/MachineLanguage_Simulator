#include "pch.h"
#include "../Headers/Instruction.h"

Instruction::~Instruction() = default; // just to be able to remove (delete since iam using pointers) derived classes from the Instruction abstract class


void Instruction::InitializeInstruction(MLByte r, MLByte xy) {
    R = r;
    XY = xy;
}
