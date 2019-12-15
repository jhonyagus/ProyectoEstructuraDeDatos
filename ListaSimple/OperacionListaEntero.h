/***********************************************************************
 * Module:  OperacionListaEntero.h
 * Author:  RODRIGO
 * Modified: martes, 19 de noviembre de 2019 20:25:12
 * Purpose: Declaration of the class OperacionListaEntero
 ***********************************************************************/

#if !defined(__NPrimos_OperacionListaEntero_h)
#define __NPrimos_OperacionListaEntero_h

#include "NodoEntero.h"

class OperacionListaEntero
{
public:
   void insertarLista(NodoEntero*& lista, int valor);
   void mostrar(NodoEntero* lista);
   void Primos(NodoEntero *lista);
   void Perfeco(NodoEntero *lista);
   void suma(NodoEntero *lista);
protected:
private:

};

#endif
