#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int **reservar(int filas,int columnas)
{
    int **m,j;
    m=new int*[filas];//reservando memoria de filas
    for(int i=0;i<filas;i++)
    {
        m[i]=new int[columnas];//reservar memorias de Columnas
    }
    return m;
}
void llenar(int**m, int **c,int fila,int columna)
{
    int i,j,b,v;
    srand(time(NULL));
    for(i=0;i<fila;i++)
    {
        for(j=0;j<columna;j++)
        {
            b=1+rand()%(10-1);
            *(*(m+i)+j)=1;
            *(*(c+i)+j)=1;
        }
    }
}
void mostrar(int**matriz,int fila,int columna)
{

    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<*(*(matriz+i)+j)<<"  ";
        }
        cout<<endl;
    }
}
void encerar(int ** m,int d)
{
    int i, j;
    for(i=0;i<d;i++)
        for(j=0;j<d;j++)
            *(*(m+i)+j)=0;
    return;
}
void liberarSpacio(int **matriz)
{
    for(int i=0;i<2;i++)
    {
        delete[] matriz[i];
    }
    delete []matriz;
}
void proceso(int **mat1, int **mat2,int **matr, int t)
{
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			for(int h=0;h<t;h++){
				*(*(matr+i)+j)=*(*(matr+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
			}

		}
	}
}
void copiar(int**nuevo,int**viejo,int t)
{
    for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			*(*(nuevo+i)+j)=*(*(viejo+i)+j);
		}
	}
}
#endif // MATRIZ_H_INCLUDED
