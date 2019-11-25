/***********************************************************************
 * Module:  Nodo.h
 * Author:  RODRIGO
 * Modified: lunes, 18 de noviembre de 2019 00:04:56
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__NPrimos_Nodo_h)
#define __NPrimos_Nodo_h

class Nodo
{
public:
   int getDato(void);
   void setDato(int newDato);
   Nodo *getSiguiente(void);
   void setSiguiente(Nodo *cambio);
   Nodo();
   ~Nodo();

protected:
private:
   int dato;
   Nodo* siguiente;


};

#endif
