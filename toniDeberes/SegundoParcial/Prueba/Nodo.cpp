/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  RODRIGO
 * Modified: lunes, 18 de noviembre de 2019 00:04:56
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of Nodo::getDato()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Nodo::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato(int newDato)
// Purpose:    Implementation of Nodo::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDato(int newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

Nodo::Nodo()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}
Nodo* Nodo::getSiguiente(void)
{
    return this->siguiente;
}
void Nodo::setSiguiente(Nodo *cambio)
{
    this->siguiente=cambio;
}
