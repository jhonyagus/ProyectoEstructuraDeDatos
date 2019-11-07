/***********************************************************************
 * Module:  Main.cpp
 * Author:  RODRIGO
 * Modified: miércoles, 6 de noviembre de 2019 01:54:07
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/
#include <iostream>
#include<stdlib.h>
#include "Tabla.cpp"
#include "ingreso.h"
using namespace std;
int main()
{
    Ingreso lee;
    int opc;
    do{
        cout<<"Bienvenid@\n"<<"Escoja la opcion que desea realizar"<<endl;
        cout<<"1. Mostrar solucion sudoku\n2.Mostrar ayuda del programa";
        opc = lee.ingresarInt("\n---> ");
    }while(opc != 1 && opc != 2 );
    if(opc==2)
       system("ayuda.chm");
    if(opc==1){
    Tabla t = Tabla();
    if (t.Sudoku() == true)
        t.mostrarT();
    else
        cout << "No solution exists";
    t.~Tabla();
    system("pause");
    }
    return 0;
}
