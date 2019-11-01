/***********************************************************************
 * Module:  Pieza.h
 * Author:  User
 * Modified: viernes, 1 de noviembre de 2019 9:21:49
 * Purpose: Declaration of the class Pieza
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_1_Pieza_h)
#define __UML_Class_Diagram_1_Pieza_h

#include <Matriz.h>

class Pieza : public Matriz
{
public:
   Pieza();
   bool insertarFicha(void);

protected:
private:

};

#endif