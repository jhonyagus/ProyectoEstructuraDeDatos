#include <iostream>
#include "PersonalLibrary.h"
#include "ingreso.h"
using namespace std;
int main()
{
	AltEnter();
    const char *opciones[]={"1) Jugar","2) Mostrar Imagen","3) Mostrar Ayuda","4) Codificar","5) Decodificar","6)Salir"};
    bool bandera = true;
    string nombre,datos=lectura();
    Ingreso leer;
    do{
        int opcion = menu("Bienvenido",opciones,6);
            switch(opcion){
                case 1:
                	system("cls");
                	nombre = leer.ingresarString("Ingrese nombre del jugador: ");
                    guardarNombre(nombre);
                    system("cls");
                	system("Tetris.exe");
                	system("pause");
                    break;
                case 2:
                    system("cls");
                    system("imagenExtras.exe");
                    system("pause");
                    break;
                case 3:
                    system("AyudaTetris.chm");
                    break;
                case 4:
                    system("cls");
                    codificar(datos,0);
                    archivoC(datos);
                    system("pause");
					break;
                case 5:
                    system("cls");
                    decodificar(datos,0);
                    archivoD(datos);
                    system("pause");
                	break;
                case 6:
                    system("cls");
                    cout<<endl<<"\tGracias por usar nuestro programa !!"<<endl;
                    system("pause");
                    bandera = false;
                    break;
            }
    }while(bandera);
    return 0;
}
