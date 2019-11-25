/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:18/09/2019                                     *
******************************************************************/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int i,j,n=500;
	double Mycoseno,divd,divr,signo;
	double x=1;
	Mycoseno=0;
	for (i=0;i<n;i++){
		divd=1;
		for(j=0;j<2*i;j++){
			divd=divd*x;
		}
		divr=1;
		for (j=1;j<=2*i;j++){
			divr=divr*j;
		}
		if (i%2==0){
			signo=1;
		}else{
			signo=-1;
		}
		Mycoseno=Mycoseno+(divd/divr)*signo;
	}
	cout<<"Mi Coseno: "<<Mycoseno<<endl;
	cout<<"Coseno:"<<cos(x)<<endl;

	system("pause");
   return 0;
}
