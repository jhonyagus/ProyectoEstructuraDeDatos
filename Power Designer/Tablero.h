/***********************************************************************
 * Module:  Tablero.h
 * Author:  User
 * Modified: viernes, 1 de noviembre de 2019 9:19:26
 * Purpose: Declaration of the class Tablero
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_1_Tablero_h)
#define __UML_Class_Diagram_1_Tablero_h

class Pieza;

#include <Matriz.h>

class Tablero : public Matriz
{
public:
   Tablero();

   Pieza** pieza;

protected:
private:

};

#endif