/***********************************************************************
 * Module:  Tabla.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 6 de noviembre de 2019 02:01:52
 * Purpose: Implementation of the class Tabla
 ***********************************************************************/

#include "Tabla.h"
#include "ManejoMemoria.h"

bool Tabla::buscarLugar(int& fila, int& col)
{
    for (fila = 0; fila < 9; fila++)
        for (col = 0; col < 9; col++)
            if (*(*(tablero+fila)+col) == 0)
                return true;
    return false;
}
bool Tabla::comprobar( int fila, int col, int num)
{
    return !UtilizadoEnFila(fila, num) &&!UtilizadoEnColumna(col, num) &&!UtilizadoEnSudoku(fila - fila % 3 ,col - col % 3, num) &&*(*(tablero+fila)+col)== 0;
}

void Tabla::mostrarT()
{
    mostrar(tablero,9,9);
    escribirArchivo(tablero,9);
}


int** Tabla::getTablero(void)
{
   return tablero;
}


void Tabla::setTablero(int** newTablero)
{
   tablero = newTablero;
}


Tabla::Tabla()
{
    this->tablero=reservar(9,9);
    encerar(this->tablero,9,9);
}


Tabla::~Tabla()
{
    liberarMemoria(this->tablero,9);
}


bool Tabla::Sudoku()
{
    int fila, col;
    if (!buscarLugar(fila, col))
    return true;

    for (int num = 1; num <= 9; num++)
    {
        if (comprobar(fila, col, num))
        {
            *(*(tablero+fila)+col) = num;
            mostrarT();
            cout<<endl;
            if (Sudoku())
                return true;
            *(*(tablero+fila)+col)= 0;
        }
    }
    return false;
}
bool Tabla::UtilizadoEnFila(int fila, int num)
{

    for (int col = 0; col < 9; col++)
        if (*(*(tablero+fila)+col)== num)
            return true;
    return false;
}


bool Tabla::UtilizadoEnColumna(int col, int num)
{
for (int fila = 0; fila < 9; fila++)
        if (*(*(tablero+fila)+col) == num)
            return true;
    return false;
}

bool Tabla::UtilizadoEnSudoku(int inicioFila, int inicioColumna, int num)
{
    for (int fila = 0;  fila< 3; fila++)
        for (int col = 0; col < 3; col++)
            if (*(*(tablero+(fila + inicioFila))+(col + inicioColumna)) == num)
                return true;
    return false;
}
