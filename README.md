
# MachineLanguage_Simulator

## An app with a graphical user interface that simulates the CPU cycle (fetch, decode, execute)

This project was developed at the Faculty of Computers and Artificial Intelligence, Cairo University, as part of the CS213 assignment under the supervision of Dr. Mohamed El-Ramly.

The main idea of this project is to simulate what happens in the CPU whenever you load something into memory.  
The simulation we created consists of the following stages:
1. **Fetch**: The program counter starts fetching instructions from memory.
2. **Decode**: The fetched instructions are decoded.
3. **Execute**: The decoded instruction is executed.

For more details about the CPU cycle, refer to Chapter 2 in the book *Computer Science: An Overview (12th Global Edition).*

## List of instructions we simulated 
![image](https://github.com/user-attachments/assets/c4406683-0a08-411a-a5b6-7ef02289c0b5)

Note: We added `3R00` as a custom instruction to enable printing the values inside register R on the screen.

## How does the app look?
![image](https://github.com/user-attachments/assets/060adbff-981d-4ee2-8ced-b2d48b579851)

## Download link if you want to try it out
https://www.mediafire.com/file/iy8dgewht58ws8c/MachineLanguageAPP.rar/file

## How to tweak this project for your own use:
The project is built in three phases:
1. We first built the main logic of Machine Language in C++.
2. We created a C++/CLI wrapper class that exposed the entire C++ native code to managed C++ so we could use it in the .NET Framework.
3. We built the C++/CLI wrapper into a DLL file, referenced it in the GUI solution, and then developed the design using the .NET Framework.

All you need is the DLL file (available in the main branch) and the GUI solution, and you're good to go (you need to reference it in the solution).

## Crucial notes to read before using the project:
The floating-point representation of instruction number 6 (`6RST`: Add the content of register S and register T, and put the result in register R. Data is interpreted as floats in floating-point notation) is implemented in our project using IEEE 754 8-bit notation. Any value outside the range [0.0625, 11.5] will be represented as `0 111 0000` if it exceeds 11.5, and `0 000 0000` if it's below 0.0625.


this app made by :
Mohamed Adel Kamal (email) raynowing007@gmail.com
Mark Amir Samir (email) markamir415@gmail.com
Anton Zakaria Ezzat (email) antonzekoo@gmail.com
