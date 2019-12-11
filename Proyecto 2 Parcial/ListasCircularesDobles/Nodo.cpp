/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  User
 * Modified: miércoles, 13 de noviembre de 2019 19:39:18
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"
#include "stdlib.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDatos()
// Purpose:    Implementation of Nodo::getDatos()
// Return:     Persona
////////////////////////////////////////////////////////////////////////

int Nodo::getDatos(void)
{
   return datos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDatos(Persona newDatos)
// Purpose:    Implementation of Nodo::setDatos()
// Parameters:
// - newDatos
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDatos(int newDatos)
{
   datos = newDatos;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:       Nodo *
////////////////////////////////////////////////////////////////////////

  Nodo * Nodo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}

Nodo::Nodo()
{
    datos = NULL;
    siguiente = NULL;
    anterior = NULL;
}

void Nodo::setAnterior(Nodo* newAnterior)
{
   anterior = newAnterior;
}

Nodo * Nodo::getAnterior(void)
{
   return anterior;
}
