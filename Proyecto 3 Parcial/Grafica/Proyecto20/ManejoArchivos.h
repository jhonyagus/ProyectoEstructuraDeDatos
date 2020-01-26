#pragma once
#ifndef MANEJOARCHIVOS_H
#define MANEJOARCHIVOS_H
#include<iostream>
#include<stdlib.h>
#include<string>
#include "Palabra.h"
#include "Arbol.h"
using namespace  std;

class ManejoArchivo{
public:
    void write_file(Palabra p);

    void open_file(Arbol *&arbol);

    void open_file_espanol(Arbol *&arbol);

    int clave(string palabra);

    void convertirMayusculas(string &palabra);

    void agregar_Diccionario(string,string);


};

#endif // MANEJOARCHIVOS_H
