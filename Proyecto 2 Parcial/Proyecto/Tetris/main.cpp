/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO EN GRUPO:                                                *
*          NOMBRES:ANTONI TOAPANTA
*                   JONNY NARANJO                                  *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:09/12/2019                                     *
******************************************************************/
#include "miniwin.h"
#include <iostream>
#include<stdlib.h>
#include "Piezas.h"
#include <windows.h>
#include "ManejoMemoria.h"
#include<time.h>
#include "ListaCircularDoble.h"
#include "ManejoTablero.h"
using namespace miniwin;
using namespace std;
int main() {
    srand(time(NULL));
    int numPieza;
    ListaCircularDoble lista;
    char c;
    int t;
    int tic=0;
    bool bandera=true;
    Piezas p;
   vredimensiona(900, 700);
   int **tablero;
   tablero=reservar(15,30);
   encerar(tablero,15,30);
    //Inicio de mi lista
   *(*(tablero+13)+1)=3;
    lista.ingresoFinal(3);
   *(*(tablero+13)+2)=2;
    lista.ingresoFinal(2);
    *(*(tablero+13)+3)=1;
    lista.ingresoFinal(1);
    //Fin de mi lista
   //Empezara de aqui mi funcion
   while(t!=ESCAPE)//Por el momento se repite n veces no hay salida toca buscar
   {
   numPieza=1+rand()%(10-1);//Saca un numero aleatorio que da el numero de mi pieza a ingresar
   int x=10,y=0;
   bool bandera=false ;
   p.setX(x);//cambia la posicion de mi pieza
   p.setY(y);
   t=tecla();
   agregarPosicion(tablero,x,y,p.unaPieza(numPieza));//coloca la pieza en la parte de arriba con cordenadas x y
   //mostrar(tablero,20,30);
   cout<<endl;
   refresca();
   bandera=true;
   while(y!=13 && bandera==true){//sale de mi bucle cuado bandera=pieza toca la otra pieza y y sea ==19= tamaño del tablero
        if(tic>5)//funcion para que se baje solo las piesas
        {
            tic=0;
            t=ABAJO;
        }
        if(t==DERECHA)//se mueve hacia la derecha
        {
            if(x<=16)//no puede pasar el borde de la patalla
            {
                agregarPosicion(tablero,x,y,0);
                x++;
            }
        }
        else if(t==IZQUIERDA)//izquierda
        {
            if(x>1)// no pude pasar fuera de la pantalla
            {
                agregarPosicion(tablero,x,y,0);
                x--;
            }
        }
        else if(t==ABAJO)// se mueva para abajo
        {
            agregarPosicion(tablero,x,y,0);
            y++;
            agregarPosicion(tablero,x,y,p.unaPieza(numPieza));
            lista.imprimirDatos();
            //mostrar(tablero,14,30);
            cout<<endl;
        }
        if(t!=NINGUNA)//si no resive ninguna tecla
        {
            borra();//borra la anterior para dar una simulacion de movimiento
            p.setX(x);//cambio la posiciones
            p.setY(y);
            if(colision(tablero,p))//comprueba si existe una pieza abajo de ella
            {
                pintar(tablero,14,30);
                p.unaPieza(numPieza);
                refresca();
                bandera=false;
            }else{
                pintar(tablero,14,30);
                p.unaPieza(numPieza);
                lista.imprimirDatos();
                cout<<endl;
                refresca();
            }
        }
        espera(60);
        tic++;
        t=tecla();
   }
       lista.insertarPosicion(numPieza,x);
       do
       {
           lista.borrarIguales(&bandera);
       }while(bandera);
       encerar(tablero,15,30);
       llenarNuevaTabla(tablero,lista);
       system("cls");
       lista.imprimirDatos();
   }
   //terminara aqui
   liberarMemoria(tablero,30);
    refresca();
    vcierra();
    system("pause");
   return 0;
}
