/***********************************************************************
 * Module:  Tabla.h
 * Author:  RODRIGO
 * Modified: miércoles, 6 de noviembre de 2019 02:01:52
 * Purpose: Declaration of the class Tabla
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Tabla_h)
#define __Class_Diagram_1_Tabla_h

#include <Operaciones.h>

class Tabla : public Operaciones
{
public:
   bool buscarLugar(int** tablero, int& fila, int& col);
   boll comprobar(int** tablero, int fila, int col, int num);
   void mostrar(int** tablero);
   int** getTablero(void);
   void setTablero(int** newTablero);
   Tabla();
   ~Tabla();
   bool Sudoku(int** tablero);
   bool UtilizadoEnFila(int** tablero, int fila, int num);
   bool UtilizadoEnColumna(int** tablero, int col, int num);
   bool UtilizadoEnSudoku(int** tablero, int inicioFila, int inicioColumna, int num);

protected:
private:
   int** tablero;


};

#endif