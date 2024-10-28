# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

project(MachineLanguage_Simulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(HEADER_FILES
        SmallClasses/Headers/Byte.h
        SmallClasses/Headers/Screen.h
        MainProgramClasses/Headers/Memory.h
        MainProgramClasses/Headers/Register.h
        MainProgramClasses/Headers/ProgramCounter.h
        MainProgramClasses/Headers/InstructionRegister.h
        MainProgramClasses/Headers/ControlUnit.h
        MainProgramClasses/Headers/CPU.h
        MainProgramClasses/Headers/ALU.h
        MainProgramClasses/Headers/Machine.h
        MainProgramClasses/Headers/Instruction.h
        Utilities/NumbersConvertor.h
)

set(SOURCE_FILES
        SmallClasses/CPP_Implementation/Byte.cpp
        SmallClasses/CPP_Implementation/Screen.cpp
        MainProgramClasses/CPP_Implementation/Memory.cpp
        MainProgramClasses/CPP_Implementation/Register.cpp
        MainProgramClasses/CPP_Implementation/ProgramCounter.cpp
        MainProgramClasses/CPP_Implementation/InstructionRegister.cpp
        MainProgramClasses/CPP_Implementation/ControlUnit.cpp
        MainProgramClasses/CPP_Implementation/CPU.cpp
        MainProgramClasses/CPP_Implementation/ALU.cpp
        MainProgramClasses/CPP_Implementation/Machine.cpp
        MainProgramClasses/CPP_Implementation/Instruction.cpp
        Utilities/NumbersConvertor.cpp
        MainProgramClasses/CPP_Implementation/Instructions_CPP/Instructions_CPP.cpp
        main.cpp
)


add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})


