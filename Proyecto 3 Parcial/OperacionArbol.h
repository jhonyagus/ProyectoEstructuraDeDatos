/***********************************************************************
 * Module:  OperacionArbol.h
 * Author:  RODRIGO
 * Modified: sábado, 25 de enero de 2020 13:49:51
 * Purpose: Declaration of the class OperacionArbol
 ***********************************************************************/

#if !defined(__Arbol_OperacionArbol_h)
#define __Arbol_OperacionArbol_h

#include "Arbol.h"
class OperacionArbol
{
public:
   //Arbol *crearNodo(Palabra palabra)
   void insertar(Arbol *&arbol, Palabra palabra);
   void mostrar(Arbol *arbol,int cont);
   void eliminar(Arbol *&arbol,Palabra palabra);
   void busqueda(Arbol *arbol, int n,string plbra);
   void inorden(Arbol *arbol);
   //void space(int tam);
protected:
private:

};

#endif
