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
#include "Matriz.h"
#include "Ingreso.h"
using namespace std;
int main()
{
    Ingreso ig= Ingreso();
    int **matriz,**resultado,**matrizCopia,**aux;;
    char nColumna,nfila,charExponente;
    int intNcolumna,intNfila,exponente;
    do
    {
        cout<<"Ingresar numero de Filas"<<endl;
        intNfila=ig.ingresarInt(&nfila);
        cout<<"Ingresar numero de Columnas"<<endl;
        intNcolumna=ig.ingresarInt(&nColumna);
    }while(intNfila>=10||intNcolumna>=10);
    matriz=reservar(intNfila,intNcolumna);
    aux=reservar(intNfila,intNcolumna);
    matrizCopia=reservar(intNfila,intNcolumna);
    resultado=reservar(intNfila,intNcolumna);
    encerar(resultado,intNfila);
    llenar(matriz,matrizCopia,intNfila,intNcolumna);
    if(intNcolumna==intNfila)
    {
        do
        {
            cout<<"Coloque el Exponente"<<endl;
            exponente=ig.ingresarInt(&charExponente);
        }while(exponente>10);
        for(int i=0; i<exponente-1;i++)
        {
            proceso(matriz,matrizCopia,resultado,intNfila);
            copiar(aux,resultado,intNcolumna);
            encerar(resultado,intNcolumna);
            copiar(matriz,aux,intNcolumna);
        }
        cout<<"Matriz Multiplicada "<<exponente<<" veces"<<endl;
        mostrar(matriz,intNfila,intNcolumna);
        cout<<endl;
        cout<<"Matriz Original"<<endl;
        mostrar(matrizCopia,intNfila,intNcolumna);
    }
    else
    {
        mostrar(matriz,intNfila,intNcolumna);
        cout<<"Imposible multimplicar Matriz"<<endl;
    }
    liberarSpacio(matriz);
    liberarSpacio(matrizCopia);
    liberarSpacio(resultado);
    system("pause");
    return 0;
}
