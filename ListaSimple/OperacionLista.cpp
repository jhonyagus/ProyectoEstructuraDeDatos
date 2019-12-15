/***********************************************************************
 * Module:  OperacionLista.cpp
 * Author:  RODRIGO
 * Modified: mi�rcoles, 13 de noviembre de 2019 20:23:02
 * Purpose: Implementation of the class OperacionLista
 ***********************************************************************/

#include "OperacionLista.h"
#include <iostream>
#include <string>
using namespace std;

void OperacionLista::addFinal(Nodo *&lista, Persona persona)
{
   Nodo *nuevo_nodo = new Nodo();
   nuevo_nodo->setPersona(persona);
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
void OperacionLista::addInicial(Nodo*& lista, Persona persona)
{
   Nodo *nuevo_nodo=new Nodo();
   nuevo_nodo->setPersona(persona);
   Nodo *aux;
   aux=lista;
   lista=nuevo_nodo;
   nuevo_nodo->setSiguiente(aux);
}
void OperacionLista::buscar(Nodo *&lista,string nombre)
{
    Nodo *actual = new Nodo();
    bool bandera;
    int n=1;
    actual=lista;
    while(actual!=NULL)
   {
       if(actual->getPersona().getNombre()==nombre)
       {
           cout<<"Elemento encontrado en la posicion: "<<n<<endl ;
           bandera=true;
       }
       n++;
       if(bandera!=true)
       {
           cout<<"Elemento no encontrado en la lista"<<endl;
       }
       actual=actual->getSiguiente();
   }
}
 void OperacionLista::eliminar(Nodo *&lista,string nombre)
 {
     Nodo *aux_borrar;
     Nodo *anterior=NULL;
     aux_borrar=lista;
     while((aux_borrar!=NULL)&&(aux_borrar->getPersona().getNombre()!=nombre))
     {
         anterior = aux_borrar;
         aux_borrar=aux_borrar->getSiguiente();
     }
     if(aux_borrar==NULL)
     {
         cout<<"EL elemento no existe"<<endl;
     }
     else if(anterior==NULL)
     {
         lista=lista->getSiguiente();
         delete aux_borrar;
     }
     else{
            anterior->setSiguiente(aux_borrar->getSiguiente());
            delete aux_borrar;
     }
 }
void OperacionLista::print(Nodo *lista)
{
   Nodo *actual=new Nodo();
   actual=lista;
   while(actual!=NULL)
   {
       actual->getPersona().toString();
       actual=actual->getSiguiente();
   }
}
