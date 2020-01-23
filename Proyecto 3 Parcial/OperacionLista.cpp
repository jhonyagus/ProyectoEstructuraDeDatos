/***********************************************************************
 * Module:  OperacionLista.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:23:02
 * Purpose: Implementation of the class OperacionLista
 ***********************************************************************/

#include "OperacionLista.h"
#include <iostream>
#include <string>
using namespace std;

void OperacionLista::addFinal(Nodo *&lista, Palabra palabra)
{
   Nodo *nuevo_nodo = new Nodo();
   nuevo_nodo->setPalabra(palabra);
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
void OperacionLista::addInicial(Nodo*& lista, Palabra palabra)
{
   Nodo *nuevo_nodo=new Nodo();
   nuevo_nodo->setPalabra(palabra);
   Nodo *aux;
   aux=lista;
   lista=nuevo_nodo;
   nuevo_nodo->setSiguiente(aux);
}
void OperacionLista::buscarIngles(Nodo *&lista,string palabra)
{
    Nodo *actual = new Nodo();
    bool bandera;
    int n=1;
    actual=lista;
    while(actual!=NULL)
   {
       if(actual->getPalabra().getIngles()==palabra)
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
void OperacionLista::buscarEspanol(Nodo *&lista,string palabra)
{
    Nodo *actual = new Nodo();
    bool bandera;
    int n=1;
    actual=lista;
    while(actual!=NULL)
   {
       if(actual->getPalabra().getEspanol()==palabra)
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
 void OperacionLista::eliminar(Nodo *&lista,string palabra)
 {
     Nodo *aux_borrar;
     Nodo *anterior=NULL;
     aux_borrar=lista;
     while((aux_borrar!=NULL)&&(aux_borrar->getPalabra().getEspanol()!=palabra))
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
       cout<<actual->getPalabra().getEspanol()<<" "<<actual->getPalabra().getIngles()<<" "<<actual->getPalabra().getClave()<<endl;
       actual=actual->getSiguiente();
   }
}
