/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA                                *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:24/09/2019                                     *
******************************************************************/
#include<iostream>
#include<stdlib.h>
#include "Ingreso.h"
#include "Fraccion.h"
using namespace std;

int main()
{
    float numerador,denominador,numerador2,denominador2;
    Fraccion frac1,frac2,resultado,*p_fracion,fraccion;
    Ingreso valor;
    char c;
    numerador=valor.ingresarDouble("Ingresa un Numerador de la Fraccion 1",&c);
    denominador=valor.ingresarDouble("Ingrese el Denominador de la Fraccion 1",&c);
    numerador2=valor.ingresarDouble("Ingresa un Numerador de la Fraccion 2",&c);
    denominador2=valor.ingresarDouble("Ingrese el Denominador de la Fraccion 2",&c);
    frac1 = Fraccion(numerador,denominador);
    frac2= Fraccion(numerador2,denominador2);
    fraccion=Fraccion();
    p_fracion=&fraccion;
    resultado = Fraccion();
    frac1.imprimir(frac1);
    frac2.imprimir(frac2);
    cout<<"Primera Forma"<<endl;
    resultado=resultado.procesar(frac1,frac2);
    resultado.imprimir(resultado);
    cout<<"Segunda Forma"<<endl;
    fraccion.procesar2(frac1,frac2,p_fracion);
    fraccion.imprimir(*p_fracion);
    cout<<"Tercera Forma"<<endl;
    resultado.procesar3(frac1,frac2);
    system("pause");
    return 0;
}
