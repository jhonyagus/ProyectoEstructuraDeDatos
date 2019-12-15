/***********************************************************************
 * Module:  NodoString.h
 * Author:  RODRIGO
 * Modified: martes, 26 de noviembre de 2019 21:35:07
 * Purpose: Declaration of the class NodoString
 ***********************************************************************/

#if !defined(__NPrimos_NodoString_h)
#define __NPrimos_NodoString_h
#include<iostream>
#include<string>
using namespace std;

class NodoString
{
public:
   string getDato(void);
   void setDato(string newDato);
   NodoString();
   ~NodoString();
   NodoString* getSiguiente(void);
   void setSiguiente(NodoString* newSiguiente);

protected:
private:
   string dato;
   NodoString* siguiente;


};

#endif
