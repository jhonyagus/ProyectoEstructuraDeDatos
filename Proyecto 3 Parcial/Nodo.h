/***********************************************************************
 * Module:  Nodo.h
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:22:45
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Listas_Nodo_h)
#define __Listas_Nodo_h
#include "Palabra.h"
class Nodo
{
public:
   Palabra getPalabra(void);
   void setPalabra(Palabra newPalabra);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);

protected:
private:
   Palabra palabra;
   Nodo *siguiente;
};

#endif
