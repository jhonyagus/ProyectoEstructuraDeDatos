#include <iostream>
#include "PersonalLibrary.h"
#include "ingreso.h"
#include <pthread.h>
using namespace std;

void* moverMarquesina(void *marq){

	int a, b, c, n=0,letra=39,pos=1,cont=39,aux,cont1=39,auxg;
	char t[50] ="Gracias por usar nuestro programa",auxt[39]=" ";

	do{
		for (a=0;a<42;a++){
			aux=pos;
			for(b=39;b>cont;b--){
				gotoxy(pos,1);
				cout<<t[b];
				pos--;
			}
			aux++;
			pos=aux;
			cont--;
			Sleep (75);
			if(a==40){
				break;
			}
		}
		for(a=3;a<70;a++){
			gotoxy(a-1,1);
			cout<<" ";
			gotoxy(a,1);
			cout<<t;
			Sleep (75);
		}

		pos=70;
		auxg=69;
		for (a=0;a<41;a++){
			gotoxy(auxg,1);
			cout<<" ";
			aux=pos;
			for(b=0;b<=cont1;b++){
				gotoxy(pos,1);
				cout<<t[b];
				pos++;
			}
			cont1--;
			aux++;
			pos=aux;
			auxg++;
			Sleep (75);
		}
		cont1=39;
		letra=39;
		pos=1;
		cont=39;
		c=0;
	}while (c=1);

}


int main()
{
	AltEnter();
	pthread_t thread1;
    pthread_t thread2;
    const char *opciones[]={"1) Jugar","2) Mostrar Imagen","3) Mostrar Ayuda","4) Codificar","5) Decodificar","6)Salir"};
    bool bandera = true;
    string nombre;
    Ingreso leer;
    do{
        int opcion = menu("Bienvenido",opciones,6);
            switch(opcion){
                case 1:
                	system("cls");
                	nombre = leer.ingresarString("Ingrese nombre del jugador: ");
                    guardarNombre(nombre);
                	system("Tetris.exe");
                	system("pause");
                    break;
                case 2:
                    ShellExecute(NULL, TEXT("open"), TEXT("imagenExtras.exe"), NULL, NULL, SW_SHOWNORMAL);
                    break;
                case 3:
                    system("AyudaTetris.chm");
                    break;
                case 4:
					break;
                case 5:
                	break;
                case 6:
                    system("cls");
                    pthread_create(&thread1,NULL,moverMarquesina,NULL);
                    system("pause");
                    bandera = false;
                    break;
            }
    }while(bandera);
    return 0;
}
