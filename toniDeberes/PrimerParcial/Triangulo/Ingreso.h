/**
  * @file Ingreso.h
  * @version 1.0
  * @date 29/09/2019
  * @author Antoni Toapanta,Luis Carvajal
  * @title Clase Ingreso
  * @code
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
  * @endcode
  * @brief Ingreso de datos 
  */
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

using namespace std;
/**
 * @brief Clase para el ingreo de datos
 */
class Ingreso {
public:
	/**
	  * @brief ingresarDouble Obtiene un double
	  * @return double
	  */
	double ingresarDouble(char*,char*);
	/**
	  * @brief ingresarInt Obtiene un int
	  * @return int
	  */
	int ingresarInt(char*);
};
/**
 * @brief Ingreso de dato double
 * @param char *p
 * @param char *msg
 * @return double
 */
double Ingreso::ingresarDouble(char *msg,char*p) {
    char tecla;
    int i=0,cont=0;
    p[0]='\0';
    cout<<msg<<endl;
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            cont--;
            p[--i]='\0';
        }
        else{
            if((tecla>=48 && tecla<=57)||(tecla==46 && cont<=0) )
            {
                cout<<tecla;
                p[i++]=tecla;
                if(tecla==46)
                {
                    cont++;
                }
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");
    return atof(p) ;
}
/**
 * @brief Ingreso de dato entero
 * @param char *p
 * @return int
 */
int Ingreso::ingresarInt(char *p)
{
    char tecla;
    int i=0;
    p[0]='\0';
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            p[--i]='\0';
        }
        else{
            if((tecla>=48 && tecla<=57))
            {
                cout<<tecla;
                p[i++]=tecla;
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");
    return atoi(p) ;
}

