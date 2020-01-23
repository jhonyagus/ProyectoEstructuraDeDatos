/***********************************************************************
 * Module:  OperacionLista.h
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:23:02
 * Purpose: Declaration of the class OperacionLista
 ***********************************************************************/

#if !defined(__Listas_OperacionLista_h)
#define __Listas_OperacionLista_h
#include "Nodo.h"
#include "Palabra.h"
#include <string>
class OperacionLista
{
public:
   void addFinal(Nodo *& lista, Palabra palabra);
   void addInicial(Nodo *& lista, Palabra palabra);
   void buscarIngles(Nodo *&lista,string palabra);
   void buscarEspanol(Nodo *&lista,string palabra);
   void eliminar(Nodo *&lista,string palabra);
   void print(Nodo * lista);
protected:
private:

};

#endif
