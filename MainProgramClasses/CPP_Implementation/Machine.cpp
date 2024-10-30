#include "pch.h"
#include "../Headers/Machine.h"
#include <vector>

Machine::Machine()
{
	cpu = nullptr;
}

void Machine::InitializeCPU()
{
	cpu = CPU::GetInstance();
	cpu->InitializeMemory(memory);
}

void Machine::InitializeMemory(vector <string> input)
{
	MLByte bytes[256];
	for (int i = 0; i < input.size(); i++) {
		bytes[i].SetByte(NumbersConvertor::RepresentHexAsInteger(input[i]));
	}
	memory.Initialize(bytes, input.size());
}

void Machine::InitializeMemory(vector<string> input, int startAddress)
{
	MLByte bytes[256];
	for (int i = 0; i < input.size(); i++) {
		bytes[i].SetByte(NumbersConvertor::RepresentHexAsInteger(input[i]));
	}
	memory.Initialize_at_Adress(bytes, input.size(), startAddress);
}

CPU * Machine::GetCPU()
{
	return cpu;
}


