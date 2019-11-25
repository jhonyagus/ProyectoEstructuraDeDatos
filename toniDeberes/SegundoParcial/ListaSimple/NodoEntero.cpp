/***********************************************************************
 * Module:  NodoEntero.cpp
 * Author:  RODRIGO
 * Modified: martes, 19 de noviembre de 2019 20:29:36
 * Purpose: Implementation of the class NodoEntero
 ***********************************************************************/

#include "NodoEntero.h"

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::getDato()
// Purpose:    Implementation of NodoEntero::getDato()
// Return:     int
////////////////////////////////////////////////////////////////////////

int NodoEntero::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::setDato(int newDato)
// Purpose:    Implementation of NodoEntero::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoEntero::setDato(int newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::NodoEntero()
// Purpose:    Implementation of NodoEntero::NodoEntero()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoEntero::NodoEntero()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::~NodoEntero()
// Purpose:    Implementation of NodoEntero::~NodoEntero()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoEntero::~NodoEntero()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::getSiguiente()
// Purpose:    Implementation of NodoEntero::getSiguiente()
// Return:     NodoEntero*
////////////////////////////////////////////////////////////////////////

NodoEntero* NodoEntero::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoEntero::setSiguiente(NodoEntero* newSiguiente)
// Purpose:    Implementation of NodoEntero::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoEntero::setSiguiente(NodoEntero* newSiguiente)
{
   siguiente = newSiguiente;
}