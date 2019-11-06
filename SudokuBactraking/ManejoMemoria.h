#ifndef MANEJOMEMORIA_H_INCLUDED
#define MANEJOMEMORIA_H_INCLUDED
#include<iostream>
#include <conio.h>
#include<time.h>
#include <stdio.h>
using namespace std;

int **reservar(int fila,int colum)
{
    int **m,j;
    m=new int*[fila];//reservando memoria de filas
    for(int i=0;i<fila;i++)
    {
        m[i]=new int[colum];//reservar columnas
    }
    return m;
}
void agregar(int **matriz,int tam)
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            cout<<i+1<<" "<<j+1<<endl;
            cin>>*(*(matriz+i)+j);
        }
    }

}
void mostrar(int**matriz,int fila,int columna)
{

    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(*(*(matriz+i)+j)!=0)
            {
                cout<<*(*(matriz+i)+j)<<"\t";
            }
            else{
                cout<<" "<<"\t";
            }
        }
        cout<<endl;
        cout<<endl;
    }
}
void liberarMemoria(int **matriz,int columna)
{
    for(int i=0;i<columna;i++)
    {
        delete[] matriz[i];
    }
    delete []matriz;
}
void encerar(int ** m,int fila, int columna)
{
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            *(*(m+i)+j)=0;
        }
    }
}
void llenarAleatorioUni(int *m,int tam)
{
    int aux;
    //srand(time(NULL));
    for(int i=0;i<tam;i++)
        {
            aux=1+rand()%tam;
            int aux2 = 0;
            while(aux2 < i)
            {

                if(aux != *(m+aux2))
                {
                    aux2++;
                }
                else
                {
                    aux = (1 + rand() % tam);
                    aux2 = 0;
                }
            }
            *(m+i) = aux;
        }
}
void llenarAleatorios(int ** m,int fila, int columna,int n)
{
    int *uni,f=0;
    uni=new int[columna*fila];
    llenarAleatorioUni(uni,(columna*fila));
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(*(uni+f)==9)
            {
                *(*(m+i)+j)=7;
            }
            else{
             *(*(m+i)+j)=*(uni+f);
            }
            if(i==(fila-1) && j==(columna-1))
            {
                 *(*(m+i)+j)=0;
            }
            else{
                f++;
            }
        }
    }
    delete[]uni;
}
#endif // MANEJOMEMORIA_H_INCLUDED
