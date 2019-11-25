/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*                  LUIS CARVAJAL                                  *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:26/09/2019                                     *
******************************************************************/
#include <iostream>
#include "Ingreso.h"
#include "triangulo.h"
#include<stdlib.h>
#include<conio.h>
int main() {
	double lado1,lado2,lado3;
	float angulo1,angulo2,angulo3;
	char l1,l2,l3,a1,a2,a3,opcion;
	int opcionInt;
	Triangulo triangulo;
	Ingreso lee;
	do
    {
        cout<<"Bienvenido"<<endl;
        cout<<"Seleccione Opciones"<<endl;
        cout<<"1-Ingresar 2 Lados y 1 Angulo(Ley de cosenos )"<<endl;
        cout<<"2.-Ingresar 2 angulos 1 Lado(Ley de senos)"<<endl;
        cout<<"0.-Salir"<<endl;
        opcionInt=lee.ingresarInt(&opcion);
    }while(opcionInt>2);
    switch(opcionInt)
    {
        case 1:
                lado1 = lee.ingresarDouble("Ingrese el Lado A",&l1);
                lado2 = lee.ingresarDouble("Ingrese el Lado B",&l2);
                angulo3 = lee.ingresarDouble("Ingrese el Angulo c",&a3);
                triangulo = Triangulo(lado1,lado2,angulo3);
                triangulo.mostrarLados();
                triangulo.leyCoseno2(lado1,lado2,angulo3);
                break;
        case 2:
                angulo2 = lee.ingresarDouble("Ingrese el Angulo b",&a2);
                angulo3 = lee.ingresarDouble("Ingrese el Angulo c",&a3);
                lado2 = lee.ingresarDouble("Ingrese el Lado B",&l2);
                triangulo = Triangulo(angulo2,angulo3,lado2);
                triangulo.mostrarAngulos();
                triangulo.leySeno2(angulo2,angulo3,lado2);
                break;
        case 0:
                cout<<"Sali"<<endl;
            break;
    }
    system("pause");
	return 0;
}
