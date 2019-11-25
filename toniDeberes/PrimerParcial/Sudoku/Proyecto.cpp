/***********************************************************************
 * Module:  Main.cpp
 * Author:  Antoni Toapanta
 * Modified: miércoles, 6 de noviembre de 2019 01:54:07
 * Purpose: Sudoku
 ***********************************************************************/
#include <iostream>
#include<stdlib.h>
#include "Tabla.cpp"
#include "ingreso.h"
using namespace std;
int main()
{
    int x,y,o,p,g;
    char c;
    bool bandera=true,segundaB=true;
    Ingreso ig;
    Tabla t =Tabla();
    while(bandera)
    {
        cout<<"SUDOKU!!!"<<endl;
        t.mostrarT();
        cout<<"1.-Resolver Solo"<<endl;
        cout<<"2.-Ingresar valores en el sudoku"<<endl;
        cout<<"3.-Salir"<<endl;
        o=ig.ingresarInt(&c);
        if(o>0&&o<=3)
        {
            bandera=false;
        }
        else{
            bandera=true;
        }
        system("cls");
    }
    system("cls");
    bandera=true;
    segundaB=true;
    switch (o)
    {
        case 1:
            if(t.Sudoku()==true)
            {
                t.mostrarT();
            }
        else
        {
            cout<<"No se puede Solucionar"<<endl;
        }
        break;
        case 2:
            while(segundaB)
        {
            while(bandera)
            {
                t.mostrarT();
                cout<<"Ingrese la pocicion de fila"<<endl;
                x=ig.ingresarInt(&c);
                t.mostrarT();
                cout<<"Ingrese la pocicion de Columna"<<endl;
                y=ig.ingresarInt(&c);
                if((x>0 && x<=9)&&(y>0 && y<=9))
                {
                    bandera=false;
                }
                else
                {
                    cout<<"Fura de Rango Fila: "<<x<<" Columna: "<<y<<endl;
                    cout<<"Recuerde el Sudoku esta formado de 9 x 9 y debe estar en esos rangos"<<endl;
                    bandera=true;
                }
            }
            bandera=true;
            while(bandera)
            {
                t.mostrarT();
                cout<<"Ingrese el numero que se va a ubicar en la Fila: "<<x<<" Columna: "<<y<<endl;
                p=ig.ingresarInt(&c);
                if(p>=0 && p<=9)
                {
                    bandera=false;
                }
                else
                {
                    cout<<"Numero Fuera de Rango"<<endl;
                    bandera=true;
                }
            }
            t.colocar(x-1,y-1,p);
            bandera=true;
            while(bandera)
            {
                cout<<"1.-Continuar"<<endl;
                cout<<"2.-Solucionar"<<endl;
                g=ig.ingresarInt(&c);
                if(g>0&&g<=2)
                {
                    bandera=false;
                }
                else{
                    bandera=true;
                }
            }
            switch(g)
            {
                case 1:
                bandera=true;
                segundaB=true;
                break;
                case 2:
                    if(t.Sudoku()==true)
                    {
                        t.mostrarT();
                         bandera=false;
                        segundaB=false;
                    }
                    else
                    {
                        cout<<"No se puede Solucionar"<<endl;
                         bandera=false;
                        segundaB=false;
                    }
                    break;
            }
        }
        break;
    }
    t.~Tabla();
   system("pause");
    return 0;
}
