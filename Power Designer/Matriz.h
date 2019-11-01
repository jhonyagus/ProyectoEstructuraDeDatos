/***********************************************************************
 * Module:  Matriz.h
 * Author:  User
 * Modified: viernes, 1 de noviembre de 2019 9:23:03
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_1_Matriz_h)
#define __UML_Class_Diagram_1_Matriz_h

class Matriz
{
public:
   int** getmatriz(void);
   void setmatriz(int** newMatriz);
   int getfilas(void);
   void setfilas(int newFilas);
   int getcolumnas(void);
   void setcolumnas(int newColumnas);
   Matriz();
   void reservarMemoria(void);

protected:
private:
   int filas;
   int columnas;
   int** matriz;


};

#endif