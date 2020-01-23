/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:22:45
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

Palabra Nodo::getPalabra(void)
{
   return palabra;
}

void Nodo::setPalabra(Palabra newPalabra)
{
   palabra = newPalabra;
}

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}


void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}
