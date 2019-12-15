/***********************************************************************
 * Module:  OperacionString.cpp
 * Author:  RODRIGO
 * Modified: martes, 26 de noviembre de 2019 21:42:48
 * Purpose: Implementation of the class OperacionString
 ***********************************************************************/

#include "OperacionString.h"
#include<iostream>
#include<string>
using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       OperacionString::insertarLista(NodoString*& lista, int valor)
// Purpose:    Implementation of OperacionString::insertarLista()
// Parameters:
// - lista
// - valor
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionString::insertarLista(NodoString*& lista, string valor)
{
   NodoString *nuevo_nodo = new NodoString();
   nuevo_nodo->setDato(valor);
   NodoString *aux1=lista;
   NodoString *aux2;
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
// Name:       OperacionString::mostrar(NodoString* lista)
// Purpose:    Implementation of OperacionString::mostrar()
// Parameters:
// - lista
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionString::mostrar(NodoString* lista)
{
    NodoString *actual=new NodoString();
   actual =lista;
   while(actual!=NULL)
   {
       cout<<actual->getDato()<<"@espe.edu.ec"<<" ";
       actual=actual->getSiguiente();
   }
   delete actual;
}
