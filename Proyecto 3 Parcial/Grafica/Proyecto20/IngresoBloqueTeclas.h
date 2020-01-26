/***********************************************************************
 * Module:  Alumno.cpp
 * Author:  G403
 * Modified: martes, 29 de octubre de 2019 11:05:02
 *By: Antoni Toapanta
 ***********************************************************************/
#pragma once
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string>

using namespace std;

class Ingreso {
public:
	double ingresarDouble(char*,char*);
	int ingresarInt(char*);
	char ingresCaracter(char*);
	string ingresarLetras(char*);
	string ingresarNumeros(char*);
};

