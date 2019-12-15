/***********************************************************************
 * Module:  OperacionString.h
 * Author:  RODRIGO
 * Modified: martes, 26 de noviembre de 2019 21:42:48
 * Purpose: Declaration of the class OperacionString
 ***********************************************************************/

#if !defined(__NPrimos_OperacionString_h)
#define __NPrimos_OperacionString_h
#include<iostream>
#include<string>
using namespace std;

#include "NodoString.h"

class OperacionString
{
public:
   void insertarLista(NodoString*& lista, string valor);
   void mostrar(NodoString* lista);
protected:
private:

};

#endif
