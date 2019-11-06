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
