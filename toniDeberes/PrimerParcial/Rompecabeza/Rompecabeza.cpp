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
#include<stdlib.h>
#include "ManejoMemoria.h"
#include <string>
#include "IngresoBloqueTeclas.h"
using namespace std;

int main()
{
    Ingreso ig;
    char c;
    int fila,columna,**matriz,*pcont,*pcontb,cont,contb,*i,*j,pi,pj;
    cout<<"Ingrese el numero  de Fila del Rompecabeza"<<endl;
    fila=ig.ingresarInt(&c);
    cout<<"Ingrese el numero de Columnas del Rompecabeza"<<endl;
    columna=ig.ingresarInt(&c);
    matriz=reservar(fila,columna);
    encerar(matriz,fila,columna);
    llenarAleatorios(matriz,fila,columna);
    mostrar(matriz,fila,columna);
    pi=fila-1;
    pj=columna-1;
    cont=fila-1;
    contb=columna-1;
    pcont=&cont;
    pcontb=&contb;
    i=&pi;
    j=&pj;
    char tecla;
    do
    {
        tecla=getch();
        if(tecla==72 && *pcont<fila-1)
        {
            movimiento(matriz,i,j,72,pcont);
            system("cls");
            mostrar(matriz,fila,columna);
        }
        else if(tecla==80 && *pcont>0)
        {
            movimiento(matriz,i,j,80,pcont);
            system("cls");
            mostrar(matriz,fila,columna);
        }
        else if( tecla==75 && *pcontb<columna-1)
        {
            movimiento(matriz,i,j,75,pcontb);
            system("cls");
            mostrar(matriz,fila,columna);
        }
        else if(tecla==77 && *pcontb>0)
        {
            movimiento(matriz,i,j,77,pcontb);
            system("cls");
            mostrar(matriz,fila,columna);
        }

    }while(tecla!=13);
    liberarMemoria(matriz,3);
    system("pause");
    return 0;
}
