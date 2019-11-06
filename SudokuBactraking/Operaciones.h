/***********************************************************************
 * Module:  Operaciones.h
 * Author:  RODRIGO
 * Modified: mi�rcoles, 6 de noviembre de 2019 01:54:07
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Operaciones_h)
#define __Class_Diagram_1_Operaciones_h

class Operaciones
{
public:
   virtual bool Sudoku(int** tablero)=0;
   virtual bool UtilizadoEnFila(int** tablero, int fila, int num)=0;
   virtual bool UtilizadoEnColumna(int** tablero, int col, int num)=0;
   virtual bool UtilizadoEnSudoku(int** tablero, int inicioFila, int inicioColumna, int num)=0;

protected:
private:

};

#endif