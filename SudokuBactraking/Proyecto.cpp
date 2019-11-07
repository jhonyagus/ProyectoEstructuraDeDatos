/***********************************************************************
 * Module:  Main.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 6 de noviembre de 2019 01:54:07
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/
#include <iostream>
#include<stdlib.h>
#include "Tabla.cpp"
using namespace std;
int main()
{
    Tabla t = Tabla();
    if (t.Sudoku() == true)
        t.mostrarT();
    else
        cout << "No solution exists";
    t.~Tabla();
    system("pause");
    return 0;
}
