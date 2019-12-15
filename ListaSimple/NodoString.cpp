/***********************************************************************
 * Module:  NodoString.cpp
 * Author:  RODRIGO
 * Modified: martes, 26 de noviembre de 2019 21:35:07
 * Purpose: Implementation of the class NodoString
 ***********************************************************************/

#include "NodoString.h"
#include<iostream>
#include<string>
using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       NodoString::getDato()
// Purpose:    Implementation of NodoString::getDato()
// Return:     string
////////////////////////////////////////////////////////////////////////

string NodoString::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoString::setDato(string newDato)
// Purpose:    Implementation of NodoString::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoString::setDato(string newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoString::NodoString()
// Purpose:    Implementation of NodoString::NodoString()
// Return:
////////////////////////////////////////////////////////////////////////

NodoString::NodoString()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoString::~NodoString()
// Purpose:    Implementation of NodoString::~NodoString()
// Return:
////////////////////////////////////////////////////////////////////////

NodoString::~NodoString()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoString::getSiguiente()
// Purpose:    Implementation of NodoString::getSiguiente()
// Return:     NodoString*
////////////////////////////////////////////////////////////////////////

NodoString* NodoString::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoString::setSiguiente(NodoString* newSiguiente)
// Purpose:    Implementation of NodoString::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoString::setSiguiente(NodoString* newSiguiente)
{
   siguiente = newSiguiente;
}
