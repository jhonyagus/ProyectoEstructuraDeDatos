/***********************************************************************
 * Module:  OperacionListaEntero.cpp
 * Author:  RODRIGO
 * Modified: martes, 19 de noviembre de 2019 20:25:12
 * Purpose: Implementation of the class OperacionListaEntero
 ***********************************************************************/

#include "OperacionListaEntero.h"
#include "NodoEntero.cpp"
#include<string>
#include <sstream>
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       OperacionListaEntero::insertarLista(NodoEntero*& lista, int valor)
// Purpose:    Implementation of OperacionListaEntero::insertarLista()
// Parameters:
// - lista
// - valor
// Return:     void
////////////////////////////////////////////////////////////////////////
bool primo(int n)
{
    int acum=0;;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            acum++;
        }
    }
    if(acum<=2)
    {
        return true;
    }
    else{
        return false;
    }
}
bool perfecto(int n)
{
    int acum=0;
    for(int i=1; i<n;i++)
    {
        if(n%i==0)
        {
            acum=acum+i;
        }
    }
    if(acum==n)
    {
        return true;
    }
    else{
        return false;
    }

}
int sumaMayor(int n)
{
    char *numero;
    int *c=new int[2];
    int acum=0;
    string s;
    stringstream out;
    out << n;
    s = out.str();
    for(int i=0;i<s.length();i++)
    {
        *(c+i)=(int)s.at(i)-48;
    }
    for(int i=0;i<s.length();i++)
    {
        acum=acum+*(c+i);
    }
    return acum;
}
void OperacionListaEntero::insertarLista(NodoEntero*& lista, int valor)
{
   NodoEntero *nuevo_nodo = new NodoEntero();
   nuevo_nodo->setDato(valor);
   NodoEntero *aux1=lista;
   NodoEntero *aux2;
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
// Name:       OperacionListaEntero::mostrar(NodoEntero* lista)
// Purpose:    Implementation of OperacionListaEntero::mostrar()
// Parameters:
// - lista
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionListaEntero::mostrar(NodoEntero* lista)
{
   NodoEntero *actual=new NodoEntero();
   actual =lista;
   while(actual!=NULL)
   {
       cout<<actual->getDato();
       actual=actual->getSiguiente();
   }
   delete actual;
}
void OperacionListaEntero::Primos(NodoEntero* lista)
{
     NodoEntero *actual=new NodoEntero();
    actual =lista;
    while(actual!=NULL)
   {
       if(primo(actual->getDato())&& actual->getDato()!=0 && actual->getDato()!=1 )
       {
           cout<<actual->getDato()<<" ";
       }
       actual=actual->getSiguiente();
   }
   delete actual;
}
void OperacionListaEntero::Perfeco(NodoEntero* lista)
{
     NodoEntero *actual=new NodoEntero();
    actual =lista;
    while(actual!=NULL)
   {
       if(actual->getDato()!=0)
       {
           if(perfecto(actual->getDato()) )
            {
                cout<<actual->getDato()<<" ";
            }
       }
       actual=actual->getSiguiente();
   }
   delete actual;
}
void OperacionListaEntero::suma(NodoEntero* lista)
{
     NodoEntero *actual=new NodoEntero();
    actual =lista;
    while(actual!=NULL)
   {
       if(actual->getDato()+actual->getSiguiente()->getDato()<10)
       {
            cout<<actual->getDato()+actual->getSiguiente()->getDato()<<" ";
       }
       else{
         int n=actual->getDato()+actual->getSiguiente()->getDato();
            cout<<sumaMayor(n)<<" ";
       }
       actual=actual->getSiguiente()->getSiguiente();
   }
   delete actual;
}
