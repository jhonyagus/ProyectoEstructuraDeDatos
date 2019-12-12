#include <iostream>
#include "PersonalLibrary.h"
#include "ingreso.h"

using namespace std;

int main()
{
	AltEnter();
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
                    break;
                case 2:
                    system("logo.bmp");
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
                    cout<<endl<<"\tGracias por usar nuestro programa !!"<<endl;
                    system("pause");
                    bandera = false;
                    break;
            }
    }while(bandera);
    return 0;
}
