/***********************************************************************
 * Module:  Persona.h
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:23:32
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Listas_Persona_h)
#define __Listas_Persona_h
#include<iostream>
#include<string>
#include "NodoEntero.h"
using namespace std;
class Persona
{
public:
   int getId(void);
   void setId(int newId);
   string getCedula(void);
   void setCedula(string newCedula);
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   string getCorreo(void);
   void setCorreo(string newCorreo);
   NodoEntero* getLista(void);
   ~Persona();
   void mostrarPrimos();
   void toString();
protected:
private:
   int id;
   string cedula;
   string nombre;
   string apellido;
   NodoEntero *lista=NULL;
   string correo;
};

#endif
