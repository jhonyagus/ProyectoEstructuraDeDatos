#include <iostream>
#include<stdlib.h>
using namespace std;

const int N = 6;
int filas = 3, columnas =5;
int tablero[3][5];
int piezas[2][N];
bool utilizadas[N];
int Nlibres, Nsoluciones;

int** reservarMemoria(){
int ** m , j;
    m =(int **)malloc(filas*sizeof(int *));
    for(j=0;j<columnas;j++)
        *(m+j)=(int *)malloc(columnas*sizeof(int));
    return m;
}
/*
void inicializar(int** m){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            *(*(m+i)+j) = 0;
        }
    }
}
*/

void inicializar(){
    Nlibres = filas*columnas;
    Nsoluciones = 0;
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            tablero[i][j] = 0;
        }
    }
}


bool posicionBuena(int pieza, int fila, int columna){
    int i,j;
    if(fila+piezas[i][pieza]>filas || (columna+piezas[2][pieza]>columnas)){
        return false;
    }else{
        for(i = fila; i<=fila+piezas[1][pieza]; i++){
            for(j= columna; j<=columna+piezas[2][pieza];j++){
                if(tablero[i][j] =! 0){
                    return false;
                }
            }
        }
    }
    return true;
}

void insertarFicha(int pieza,int fila,int columna){
    int i, j;
    for(i=fila; i<=fila+piezas[1][pieza];i++){
        for(j=columna; j<=columna+piezas[2][pieza];j++){
            tablero[i][j] = pieza;
        }
    }

    Nlibres = Nlibres - piezas[1][pieza]*piezas[2][pieza];
    utilizadas[pieza] = true;
}


void quitarFicha(int pieza, int fila, int columna){
    int i, j;
    for(i = fila; i<= fila+piezas[1][pieza];i++){
        for(j= columna; j<= columna+piezas[2][pieza];j++){
            tablero[i][j] = 0;
        }
    }
    Nlibres = Nlibres + piezas[1][pieza]*piezas[2][pieza];
    utilizadas[pieza] = false;
}

void rotarFicha(int pieza){
    int temp;
    temp = piezas[1][1];
    piezas[1][1] = piezas[2][1];
    piezas[2][1] = temp;
}

bool colocarPiezasConGiro(int inicio){
    int i, j, k;
    if(Nlibres = 0){
        return true;
    }
    for(i = 0; i<filas; i++){
        for(j= 0; j<columnas; j++){
            if(tablero[i][j] = 0){
                for(k = inicio; k<= N; k++){
                    if(utilizadas[k] = false){
                        if(posicionBuena(k,i,j)){
                            insertarFicha(k,i,j);
                            if(colocarPiezasConGiro(k+1)){
                                cout<<tablero;
                            }
                            quitarFicha(k,i,j);
                        }
                             rotarFicha(k);
                             if(posicionBuena(k,i,j)){
                                insertarFicha(k,i,j);
                                if(colocarPiezasConGiro(k+1)){
                                    cout<<tablero;
                                }
                                quitarFicha(k,i,j);
                             }
                             rotarFicha(k);
                    }
                }
            }
        }
    }
}

void inicializarPiezas(){
    for(int i = 0; i<N; i++){
        utilizadas[i]=false;
    }
    piezas[1][1]=1;
    piezas[1][2]=1;
    piezas[1][3]=2;
    piezas[1][4]=2;
    piezas[1][5]=1;
    piezas[1][6]=3;
    piezas[2][1]=1;
    piezas[2][2]=2;
    piezas[2][3]=1;
    piezas[2][4]=2;
    piezas[2][5]=3;
    piezas[2][6]=1;
}

int main(){

inicializar();
inicializarPiezas();
cout<<colocarPiezasConGiro(1);
for(int i =0 ; i<filas; i++){
    for(int j= 0; j<columnas; j++){
        cout<<tablero[i][j]<<"\t";
    }
    cout<<endl;
}



return 0;
}
