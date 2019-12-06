#include <iostream>
#include <stdlib.h>
#include "Nodo.cpp"
#include "ListaCircularDoble.cpp"
#include "ingreso.h"
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int aleatorios()
{
    return rand()%3;
}

void color(int x)
{
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),x);
}

void gotoxy(int x, int y)
{
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}

void margen()
{
	color(121);
    for(int i=2; i < 100; i++)
	{
    	//PARTE SUPERIOR
    	gotoxy (i, 3); printf("%c",178);
    	//PARTE INFERIOR
        gotoxy(i, 40); printf("%c",178);
    }
    for(int j=4; j < 40; j++)
	{
    	//PARTE IZQUIERDA
        gotoxy (2,j);  printf("%c",178);
        //PARTE DERECHA
        gotoxy(100,j);  printf("%c",178);
    }
    //ESQUINAS
    gotoxy  (2,3);	printf("%c",178);
    gotoxy (2,40);	printf("%c",178);
    gotoxy (100,3);	printf("%c",178);
    gotoxy(100,40);	printf("%c",178);
	color(15);
}


int main()
{
    margen();
    cout<<endl;
    bool bandera = false;
    srand(time(NULL));
    ListaCircularDoble *acceso = new ListaCircularDoble();
    /*acceso->ingresoInicio(aleatorios());
    acceso->ingresoFinal(aleatorios());
    acceso->ingresoFinal(aleatorios());
    acceso->insertarPosicion(aleatorios(),3);
    acceso->insertarPosicion(aleatorios(),3);
    acceso->insertarPosicion(aleatorios(),4);
    acceso->ingresoInicio(aleatorios());
    acceso->ingresoFinal(aleatorios());
    acceso->ingresoFinal(aleatorios());*/
    acceso->ingresoFinal(1);
    acceso->ingresoFinal(1);
    acceso->ingresoFinal(1);
    acceso->ingresoFinal(1);
    do{
        acceso->imprimirDatos();
        acceso->borrarIguales(&bandera);
    }while(bandera);
    delete acceso;
    return 0;
}
