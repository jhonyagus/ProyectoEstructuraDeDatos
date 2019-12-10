#include "miniwin.h"
#include <iostream>
#include<stdlib.h>
#include "Piezas.h"
#include <windows.h>
#include "ManejoMemoria.h"
#include<time.h>
using namespace miniwin;
void pintar(int **tablero,int x, int y)
{
    Piezas p;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            p.setX(j);
            p.setY(i);
            p.unaPieza(*(*(tablero+i)+j));
        }
    }
}
bool colision(int **tabla,Piezas p)
{
    if(p.getY()<19)
    {
       p.setY(p.getY()+1);
    }
    p.unaPieza(*(*(tabla+p.getY())+p.getX()));
    cout<<p.getNum()<<endl;
    if(p.getNum()!=0){
        return true;
    }
    else{
        cout<<"Entre"<<endl;
        return false;
    }
}
using namespace std;
int main() {
    srand(time(NULL));
    int numPieza;
    char c;
    int tic=0;
    bool bandera=true;
    Piezas p;
   vredimensiona(390, 600);
   int **tablero;
   tablero=reservar(20,13);
   encerar(tablero,20,13);
   //Empezara de aqui mi funcion
   while(c!='q')//Por el momento se repite n veces no hay salida toca buscar
   {
    numPieza=1+rand()%(10-1);//Saca un numero aleatorio que da el numero de mi pieza a ingresar
   int x=6,y=0;
   p.setX(x);//cambia la posicion de mi pieza
   p.setY(y);
   int t=tecla();
   agregarPosicion(tablero,x,y,p.unaPieza(numPieza));//coloca la pieza en la parte de arriba con cordenadas x y
   mostrar(tablero,20,13);
   cout<<endl;
   refresca();
   bandera=true;
   while(y!=19 && bandera==true){//sale de mi bucle cuado bandera=pieza toca la otra pieza y y sea ==19= tamaño del tablero
        if(tic>5)//funcion para que se baje solo las piesas
        {
            tic=0;
            t=ABAJO;
        }
        if(t==DERECHA)//se mueve hacia la derecha
        {
            if(x<=11)//no puede pasar el borde de la patalla
            {
                agregarPosicion(tablero,x,y,0);
                x++;
            }
        }
        else if(t==IZQUIERDA)//izquierda
        {
            if(x>0)// no pude pasar fuera de la pantalla
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
            mostrar(tablero,20,13);
            cout<<endl;
        }
        if(t!=NINGUNA)//si no resive ninguna tecla
        {
            borra();//borra la anterior para dar una simulacion de movimiento
            cout<<x<<","<<y<<endl;
            p.setX(x);//cambio la posiciones
            p.setY(y);
            if(colision(tablero,p))//comprueba si existe una pieza abajo de ella
            {
                cout<<"ENTRE"<<endl;
                pintar(tablero,20,13);
                p.unaPieza(numPieza);
                refresca();
                bandera=false;
            }else{
                pintar(tablero,20,13);
                p.unaPieza(numPieza);
                refresca();
            }
        }
        espera(30);
        tic++;
        t=tecla();
   }
   }
   //terminara aqui
   liberarMemoria(tablero,13);
    refresca();
    vcierra();
    system("pause");
   return 0;
}
