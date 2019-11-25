/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:10/10/2019                                     *
******************************************************************/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "Ingreso.h"
using namespace std;
int **nmatriz(int d)
{
    int ** m , j;
    m =(int **)malloc(d*sizeof(int *));
    for(j=0;j<d;j++)
        *(m+j)=(int *)malloc(d*sizeof(int));
    return m;
}
void llenarMatrizIdentidad(int ** m,int d)
{
    int i, j;
    for(i=0;i<d;i++)
        for(j=0;j<d;j++)
            if(i==j)
            {
                *(*(m+i)+j)=1;
            }
            else{
                *(*(m+i)+j)=0;
            }
}
void imprime(int **mat, int t)
{
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++)
		{
			cout<<*(*(mat+i)+j);
			cout<<" ";
		}
        cout<<endl;
	}
}
int main()
{
    char numero;
    int **matriz;
    int tam;
    Ingreso ig=Ingreso();
    cout<<"Ingrese el Tamaño de la Matriz"<<endl;
    tam=ig.ingresarInt(&numero);
    matriz=nmatriz(tam);
    llenarMatrizIdentidad(matriz,tam);
    cout<<"La Matriz Identidad es: "<<endl;
    imprime(matriz,tam);
    system("pause");
    return 0;
}
