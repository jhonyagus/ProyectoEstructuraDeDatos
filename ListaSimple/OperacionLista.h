/***********************************************************************
 * Module:  OperacionLista.h
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:23:02
 * Purpose: Declaration of the class OperacionLista
 ***********************************************************************/

#if !defined(__Listas_OperacionLista_h)
#define __Listas_OperacionLista_h
#include "Nodo.h"
#include "Persona.h"
#include <string>
class OperacionLista
{
public:
   void addFinal(Nodo *& lista, Persona persona);
   void addInicial(Nodo *& lista, Persona persona);
   void buscar(Nodo *&lista,string nombre);
   void eliminar(Nodo *&lista,string nombre);
   void print(Nodo * lista);
protected:
private:

};

#endif
