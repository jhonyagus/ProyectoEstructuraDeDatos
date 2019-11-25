/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:16/10/2019                                     *
******************************************************************/
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
    srand(time(NULL));
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
int buscarAlto(int*p,int tam,int a)
{
    for(int i=0;i<tam;i++)
    {
        if(*(p+i)==a)
        {
            return i;
            break;
        }
    }
}
void llenarAleatorios(int ** m,int fila, int columna)
{
    int *uni,f=0;
    int c,aux;
    uni=new int[columna*fila];
    llenarAleatorioUni(uni,(columna*fila));
    c=buscarAlto(uni,columna*fila,columna*fila);
    if(*(uni+fila*columna)!=fila*columna)
    {
        aux=*(uni+(fila*columna-1));
        *(uni+c)=aux;
        *(uni+(fila*columna-1))=0;

    }
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
             *(*(m+i)+j)=*(uni+f);
                f++;
        }
    }
    delete[]uni;
}
void movimiento(int**m,int*ci,int *cj,int movee,int *cont)
{
    int aux=0,i=*ci,j=*cj;
    if(movee==80)
    {
       aux=(*(*(m+(*(ci)-1))+*cj));
       (*(*(m+(*(ci)-1))+*cj))=0;
       (*(*(m+(*ci))+*cj))=aux;
       *cont=*cont-1;
       *ci=i-1;
    }
    else if(movee==72)
    {
        aux=(*(*(m+(*(ci)+1))+*cj));
       (*(*(m+(*(ci)+1))+*cj))=0;
       (*(*(m+(*ci))+*cj))=aux;
       *cont=*cont+1;
       *ci=i+1;
    }
    else if( movee==75)
    {
        aux=*(*(m+*(ci))+*cj+1);
        *(*(m+*ci)+*cj+1)=0;
        *(*(m+*ci)+*cj)=aux;
        *cont=*cont+1;
        *cj=j+1;
    }
    else if(movee==77)
    {
        aux=*(*(m+*ci)+*(cj)-1);
        *(*(m+*ci)+*(cj)-1)=0;
        *(*(m+*ci)+*cj)=aux;
        *cont=*cont-1;
        *cj=j-1;
    }
}
#endif // MANEJOMEMORIA_H_INCLUDED
