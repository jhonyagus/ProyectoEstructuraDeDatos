#include "miniwin.h"
#include <iostream>
#include<stdlib.h>
#include "Piezas.h"
#include <windows.h>
#include "ManejoMemoria.h"
#include<time.h>
using namespace miniwin;
using namespace std;
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

bool tablero_colision(int **T, Piezas& P) {
      if (P.getX() < 0 || P.getX() >= 20) {
         return true;
      }
      if (P.getY()< 0 || P.getY() >= 13) {
         return true;
      }
      // Mirar otras piezas
      if (*(*(T+P.getX())+P.getY()) != 0) {
         return true;
      }
   return false;
}

int main() {
    /*char soundfile[]="sonido.wav";
    cout<<PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC )<<endl;*/
    srand(time(NULL));
    int numPieza;
    char c;
    int tic=0;
    Piezas p;
   vredimensiona(390, 600);
   int **tablero;
   tablero=reservar(20,13);
   encerar(tablero,20,13);
   //Empezara de aqui mi funcion
   while(c!='q')
   {
    numPieza=1+rand()%(10-1);
   int x=6,y=0;
   p.setX(x);
   p.setY(y);
   int t=tecla();
   agregarPosicion(tablero,x,y,p.unaPieza(numPieza));
   mostrar(tablero,20,13);
   cout<<endl;
   refresca();
   while(y!=19){
        Piezas copia = p;
        if(t == NINGUNA && tic>20)
        {
            tic=0;
            t=ABAJO;
        }
        if(t==DERECHA)
        {
            if(x<=11)
            {

                    agregarPosicion(tablero,x,y,0);
                x++;
                p.setX(x);


            }
        }
        else if(t==IZQUIERDA)
        {
            if(x>0)
            {

                agregarPosicion(tablero,x,y,0);
                x--;
                p.setX(x);
            }
        }
        else if(t==ABAJO)
        {
            agregarPosicion(tablero,x,y,0);
            y++;
            p.setY(y);
            //agregarPosicion(tablero,x,y,p.unaPieza(numPieza));
            //mostrar(tablero,20,13);
            //cout<<endl;

        }

        if(*(*(tablero+p.getX())+p.getY()) != 0 ){
            p = copia;
            if(t == ABAJO){
                agregarPosicion(tablero,x,y,p.unaPieza(numPieza));
                 mostrar(tablero,20,13);
                cout<<endl;
            }
        }

        if(t!=NINGUNA)
        {
            borra();
            //p.setX(x);
            //p.setY(y);
            pintar(tablero,20,13);
            p.unaPieza(numPieza);
            refresca();
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
