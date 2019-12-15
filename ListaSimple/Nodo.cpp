/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:22:45
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"


Persona Nodo::getPersona(void)
{
   return persona;
}

void Nodo::setPersona(Persona newPersona)
{
   persona = newPersona;
}

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}


void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}
