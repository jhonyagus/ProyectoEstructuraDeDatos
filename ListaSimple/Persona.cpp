/***********************************************************************
 * Module:  Persona.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:23:32
 * Purpose: Implementation of the class Persona
 ***********************************************************************/
#include "Persona.h"
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include "OperacionListaEntero.cpp"
using namespace std;
int Persona::getId(void)
{
   return this->id;
}


void Persona::setId(int newId)
{
   this->id = newId;
}


string Persona::getCedula(void)
{
   return this->cedula;
}

void Persona::setCedula(string newCedula)
{
   this->cedula = newCedula;
}


string Persona::getNombre(void)
{
   return this->nombre;
}


void Persona::setNombre(string newNombre)
{
   this->nombre = newNombre;
}


string Persona::getApellido(void)
{
   return this->apellido;
}
Persona::~Persona()
{

}
string Persona::getCorreo(void)
{
    return this->correo;
}
void Persona::setCorreo(string newCorreo)
{
    this->correo=newCorreo;
}
void Persona::setApellido(string newApellido)
{
   this->apellido = newApellido;
}
NodoEntero* Persona::getLista()
{
    return this->lista;
}
void Persona::mostrarPrimos()
{
    char *numero;
    numero=(char*)this->cedula.c_str();
    OperacionListaEntero o;
    int *arregloEntero= new int[10];
    int num;
    for(int i=0;i<10;i++)
    {
        num=(int)this->cedula.at(i)-48;
        *(arregloEntero+i)=num;
    }
    for(int i=0;i<10;i++)
    {
        num=*(arregloEntero+i);
        o.insertarLista(this->lista,num);
        num=0;
    }
    delete arregloEntero;
    delete numero;
}
void Persona::toString()
{
    OperacionListaEntero o;
    mostrarPrimos();
    cout<<"ID: "<<this->getId()<<"\n"<<"Nombre: "<<this->getNombre()<<"\n"<<"Apellido: "<<this->getApellido()<<"\n"<<"Cedula: "<<this->getCedula()<<endl;
    cout<<"Correo: "<<getCorreo()<<"@espe.edu.ec"<<endl;
    cout<<"Primos: ";o.Primos(getLista());
    cout<<endl;
    cout<<"Perfecto: ";o.Perfeco(getLista());
    cout<<endl;
    cout<<"Suma: ";o.suma(getLista());
    cout<<endl;
}
