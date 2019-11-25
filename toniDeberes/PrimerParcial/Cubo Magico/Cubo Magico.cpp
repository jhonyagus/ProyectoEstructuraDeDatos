/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:16/10/2019                                     *
******************************************************************/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "CuboMagico.h"
#include "Ingreso.h"
using namespace std;
int main()
{
    int i;
    Ingreso ig;
    char c;
    cout<<"Ingrese el tamaño del cubo Magico"<<endl;
    i=ig.ingresarInt(&c);
   CuboMagico cb=CuboMagico(i);
   cb.ceros(i);
   cb.magico(i);
   cb.destructor(i);
   system("pause");
   return 0;
}
