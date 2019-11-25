/***********************************************************************
 * Module:  OperacionLista.h
 * Author:  RODRIGO
 * Modified: lunes, 18 de noviembre de 2019 00:03:23
 * Purpose: Declaration of the class OperacionLista
 ***********************************************************************/

#if !defined(__NPrimos_OperacionLista_h)
#define __NPrimos_OperacionLista_h

#include "Nodo.h"

class OperacionLista
{
public:
   void insertarLista(Nodo*& lista, int valor);
   void mostrar(Nodo* lista);

protected:
private:

};

#endif
