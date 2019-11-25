/***********************************************************************
 * Module:  NodoEntero.h
 * Author:  RODRIGO
 * Modified: martes, 19 de noviembre de 2019 20:29:36
 * Purpose: Declaration of the class NodoEntero
 ***********************************************************************/

#if !defined(__NPrimos_NodoEntero_h)
#define __NPrimos_NodoEntero_h

class NodoEntero
{
public:
   int getDato(void);
   void setDato(int newDato);
   NodoEntero();
   ~NodoEntero();
   NodoEntero* getSiguiente(void);
   void setSiguiente(NodoEntero* newSiguiente);

protected:
private:
   int dato;
   NodoEntero* siguiente;


};

#endif