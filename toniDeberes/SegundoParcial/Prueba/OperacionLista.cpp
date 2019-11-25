/***********************************************************************
 * Module:  OperacionLista.cpp
 * Author:  RODRIGO
 * Modified: lunes, 18 de noviembre de 2019 00:03:23
 * Purpose: Implementation of the class OperacionLista
 ***********************************************************************/

#include "OperacionLista.h"
#include "Nodo.cpp"
#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       OperacionLista::insertarLista(Nodo*& lista, int valor)
// Purpose:    Implementation of OperacionLista::insertarLista()
// Parameters:
// - lista
// - valor
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionLista::insertarLista(Nodo*& lista, int valor)
{
   Nodo *nuevo_nodo = new Nodo();
   nuevo_nodo->setDato(valor);
   Nodo *aux1=lista;
   Nodo *aux2;
   while(aux1!=NULL)
   {
       aux2=aux1;
       aux1=aux1->getSiguiente();
   }
   if(lista==aux1)
   {
       lista=nuevo_nodo;
   }
   else{
    aux2->setSiguiente(nuevo_nodo);
   }
   nuevo_nodo->setSiguiente(aux1);
}

////////////////////////////////////////////////////////////////////////
// Name:       OperacionLista::mostrar(Nodo* lista)
// Purpose:    Implementation of OperacionLista::mostrar()
// Parameters:
// - lista
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionLista::mostrar(Nodo* lista)
{
   Nodo *actual=new Nodo();
   actual =lista;
   while(actual!=NULL)
   {
       cout<<actual->getDato()<<endl;
       actual=actual->getSiguiente();
   }
}
