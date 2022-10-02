// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie
// Created on: October 1st, 2022
// This program shows the scope of variables
// with assignment statements.
#include <iostream>

// global variable
int variableX = 30;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 5;
    int variableY = 24;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    variableX = variableX + 34;
    int variableY = 90;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
