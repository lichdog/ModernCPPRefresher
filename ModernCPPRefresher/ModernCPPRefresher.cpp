// ModernCPPRefresher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <memory>
#include "SmartPointersTester.h"

using namespace std;

int main()
{
    std::cout << "This is a program showcasing modern C++ features!\n";
    unique_ptr<SmartPointersTester> smartPointersTester(new SmartPointersTester);
    smartPointersTester->Test();
}
