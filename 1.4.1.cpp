//*************************************************************************
//               Copyright (c) Microsoft Corporation.
//
// File: 1.4.1.cpp
//
// Author: Chen Chen (cche)
//
// Purpose:
//  Write the purpose of this file
//
// Notes:
//
#include <iostream>
#include <thread>

using namespace std;

void hello(int num, const char* msg);
void hello(int num, const char* msg)
{
    cout << "Hello Cocurrent World " << num << " " << msg << endl;
}

int main()
{
    thread t(hello, 999, "biubiubiu");
    t.join();
}


