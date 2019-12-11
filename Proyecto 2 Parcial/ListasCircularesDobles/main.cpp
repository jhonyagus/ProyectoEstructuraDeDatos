#include <iostream>
#include <stdlib.h>
#include "Nodo.cpp"
#include "ListaCircularDoble.cpp"
#include "ingreso.h"
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include "PersonalLibrary.h"
using namespace std;
int aleatorios()
{
    return rand()%10;
}

void margen()
{
	color(121);
    for(int i=2; i < 100; i++)
	{
    	//PARTE SUPERIOR
    	gotoxy (i, 3); printf("%c",178);
    	//PARTE INFERIOR
        gotoxy(i, 40); printf("%c",178);
    }
    for(int j=4; j < 40; j++)
	{
    	//PARTE IZQUIERDA
        gotoxy (2,j);  printf("%c",178);
        //PARTE DERECHA
        gotoxy(100,j);  printf("%c",178);
    }
    //ESQUINAS
    gotoxy  (2,3);	printf("%c",178);
    gotoxy (2,40);	printf("%c",178);
    gotoxy (100,3);	printf("%c",178);
    gotoxy(100,40);	printf("%c",178);
	color(15);
}

int posicionAIndice(int x){
	return (x-8)/6;
}

int main()
{
    bool primera=true;
	char tecla=0;
	int x=32,y=4;
	int col,fil;
	int numero;
	int i=0;
	srand(time(NULL));



    bool bandera = false;
    srand(time(NULL));
    ListaCircularDoble *acceso = new ListaCircularDoble();
    acceso->ingresoFinal(6);
    acceso->ingresoFinal(4);
    acceso->ingresoFinal(9);
    acceso->ingresoFinal(2);


    do
	{
		//system("cls");
		margen();
		if(primera)
		{
			numero=aleatorios();
			primera=false;
			gotoxy(4,45);
		}
		acceso->imprimirDatos();
		gotoxy(x,y);
		numbers(numero,x,y);
		color(15);
		tecla=getch();
		switch(tecla)
		{
			case TECLA_ABAJO:
				y++;
				if(y>=28){
                    cout<<x<<endl;
                    acceso->insertarPosicion(numero, posicionAIndice(x)+1);
                    cout<<posicionAIndice(x)<<endl;
				    do{

                        acceso->borrarIguales(&bandera);
				    }while(bandera);
					y=4;
					primera=true;
				}
				break;
			case TECLA_DERECHA:
				x+=6;
				if(x>=92)
					x=8;
				break;
			case TECLA_IZQUIERDA:
				x-=6;
				if(x<=2)
					x=92;
				break;

		}
		if(acceso->vacia())
            break;
    }while(tecla!=TECLA_ENTER);
	system("cls");
	cout<<"Juego terminado"<<endl;
	if(acceso->vacia()){
        cout<<"FELICIDADES HAS GANADO!!";
	}else{
        cout<<"No has ganado"<<endl<<"Tu lista es: ";
        acceso->imprimirDatos();
	}
    delete acceso;
    return 0;
}
