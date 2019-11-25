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
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i,j,n=10;
	double Myseno,divd,divr,signo;
	double x=1;
	Myseno=0;
	for (i=0;i<n;i++){
		divd=1;
		for(j=0;j<2*i+1;j++){
			divd=divd*x;
		}
		divr=1;
		for (j=1;j<=2*i+1;j++){
			divr=divr*j;
		}
		if (i%2==0){
			signo=1;
		}else{
			signo=-1;
		}
		Myseno=Myseno+(divd/divr)*signo;
	}
	printf("sin(%lf)=%lf\n",x,Myseno);
	printf("sin(%lf)=%lf\n",x,sin(x));

	system("pause");
   return 0;
}
