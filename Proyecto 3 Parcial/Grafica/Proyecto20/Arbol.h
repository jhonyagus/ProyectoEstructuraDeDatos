/***********************************************************************
 * Module:  Arbol.h
 * Author:  RODRIGO
 * Modified: sábado, 25 de enero de 2020 13:50:37
 * Purpose: Declaration of the class Arbol
 ***********************************************************************/
#pragma once
#if !defined(__Arbol_Arbol_h)
#define __Arbol_Arbol_h
#include "Palabra.h"
class Arbol
{
public:
   Palabra getPalabra(void);
   void setPalabra(Palabra newPalabra);
   Arbol* getDer(void);
   void setDer(Arbol* newDer);
   Arbol* getIzq(void);
   void setIzq(Arbol* newIzq);
   Arbol();
   ~Arbol();
    Arbol* der;
   Arbol* izq;
protected:
private:
   Palabra palabra;



};

#endif
