#include <iostream>
#include<stdlib.h>
using namespace std;
bool buscarLugar(int tablero[9][9],int &fila, int &col);
bool comprobar(int tablero[9][9], int fila, int col, int num);
void mostrar(int tablero[9][9]);
bool Sudoku(int tablero[9][9])
{
    int fila, col;
    if (!buscarLugar(tablero, fila, col))
    return true;

    for (int num = 1; num <= 9; num++)
    {
        if (comprobar(tablero, fila, col, num))
        {
            tablero[fila][col] = num;
            mostrar(tablero);
            cout<<endl;
            if (Sudoku(tablero))
                return true;
            tablero[fila][col] = 0;
        }
    }
    return false;
}

bool buscarLugar(int tablero[9][9],int &fila, int &col)
{
    for (fila = 0; fila < 9; fila++)
        for (col = 0; col < 9; col++)
            if (tablero[fila][col] == 0)
                return true;
    return false;
}

bool UtilizadoEnFila(int tablero[9][9], int fila, int num)
{
    for (int col = 0; col < 9; col++)
        if (tablero[fila][col] == num)
            return true;
    return false;
}

bool UtilizadoEnColumna(int tablero[9][9], int col, int num)
{
    for (int fila = 0; fila < 9; fila++)
        if (tablero[fila][col] == num)
            return true;
    return false;
}
bool UtilizadoEnSudoku(int tablero[9][9], int inicioFila,int inicioColumna, int num)
{
    for (int fila = 0;  fila< 3; fila++)
        for (int col = 0; col < 3; col++)
            if (tablero[fila + inicioFila]
                    [col + inicioColumna] == num)
                return true;
    return false;
}

bool comprobar(int tablero[9][9], int fila,int col, int num)
{
    return !UtilizadoEnFila(tablero, fila, num) &&!UtilizadoEnColumna(tablero, col, num) &&!UtilizadoEnSudoku(tablero, fila - fila % 3 ,col - col % 3, num) &&tablero[fila][col] == 0;
}
void mostrar(int tablero[9][9])
{
    for (int fila = 0; fila < 9; fila++)
    {
        for (int col = 0; col < 9; col++)
        {

            if(tablero[fila][col]==0)
            {
                cout << " " << " ";
            }
            else{
                cout << tablero[fila][col] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int tablero[9][9] ={{0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0}};
    if (Sudoku(tablero) == true)
        mostrar(tablero);
    else
        cout << "No solution exists";

    return 0;
}
