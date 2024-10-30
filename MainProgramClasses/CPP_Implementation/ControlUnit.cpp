#include "pch.h"
#include "../Headers/ControlUnit.h"

ControlUnit::ControlUnit() = default;
ProgramCounter &ControlUnit::GetProgramCounter() {
    return pc;
}

InstructionRegister &ControlUnit::GetInstructionRegister() {
    return ir;
}

void ControlUnit::ExecuteInstruction() {
    ir.GetInstruction()->Execute();
}


