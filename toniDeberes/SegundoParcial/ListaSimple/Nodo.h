/***********************************************************************
 * Module:  Nodo.h
 * Author:  RODRIGO
 * Modified: miércoles, 13 de noviembre de 2019 20:22:45
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Listas_Nodo_h)
#define __Listas_Nodo_h
#include "Persona.h"

class Nodo
{
public:
   Persona getPersona(void);
   void setPersona(Persona newPersona);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);

protected:
private:
   Persona persona;
   Nodo *siguiente;
};

#endif
