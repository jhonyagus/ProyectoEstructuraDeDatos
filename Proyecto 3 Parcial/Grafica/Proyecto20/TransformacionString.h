#ifndef TRANSFORMACIONSTRING_H
#define TRANSFORMACIONSTRING_H
#pragma once
#include<string>
#include<stdlib.h>
#include <sstream>
#include<iostream>

using namespace std;
class Transformacion{
public:
    char* trasformarStringChar(string str);
    int* arregloEntero(string str);
    int stringAint(string str);
};

#endif // TRANSFORMACIONSTRING_H
