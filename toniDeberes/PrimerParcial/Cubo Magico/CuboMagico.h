/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:16/10/2019                                     *
******************************************************************/
#ifndef CUBOMAGICO_H_INCLUDED
#define CUBOMAGICO_H_INCLUDED
#include "ManejoMemoria.h"
class CuboMagico
{
    private:
    int **tablero;
    public:
        CuboMagico(int tam);
        void destructor(int tam);
        void mostrarC(int n);
        void ceros(int n);
        void magico(int n);
};
CuboMagico::CuboMagico(int tam)
{
    tablero=reservar(tam,tam);
}
void CuboMagico::destructor(int tam)
{
    liberarMemoria(tablero,tam);
}
void CuboMagico::mostrarC(int n)
{
    mostrar(tablero,n,n);
}
void CuboMagico::ceros(int n)
{
    encerar(tablero,n,n);
}
void CuboMagico::magico(int tam)
{
int key,i,j,k,r;
   if(tam%2!=0){
      ceros(tam);
      *(*(tablero+0)+((tam-1)/2))=1;
      key=2;
      i=0;
      j=(tam-1)/2;
      while(key <= tam*tam){
	k=i-1;
	r=j-1;
	if(k<0) k=tam-1;
	if(r<0) r=tam-1;
	if(*(*(tablero+k)+r)!=0) i=(i+1)%tam;
	else { i=k;
	       j=r; }
	*(*(tablero+i)+j)=key;
	key++;
      }
      mostrarC(tam);
   }
   else printf(" La dimension no es impar\n");
}


#endif // CUBOMAGICO_H_INCLUDED
