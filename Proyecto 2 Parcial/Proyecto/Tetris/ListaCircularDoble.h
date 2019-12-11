/***********************************************************************
 * Module:  ListaSimple.h
 * Author:  naula
 * Modified: miércoles, 13 de noviembre de 2019 10:47:31
 * Purpose: Declaration of the class ListaSimple
 ***********************************************************************/

#if !defined(__Class_Diagram_1_ListaSimple_h)
#define __Class_Diagram_1_ListaSimple_h

#include <iostream>
#include "Nodo.h"

using namespace std;

class ListaCircularDoble
{
public:
    bool vacia();
    int cantidad();
    void borrarIguales(bool *bandera);
    void borrarPosicion(int posicion);
    void insertarPosicion(int obj, int pos);
    int buscarPosicion(int posicion);
   void ingresoInicio(int obj);
   void ingresoFinal(int obj);
   void imprimirDatos();
   int tamLista();
   ListaCircularDoble();
   void destruir();
   void setPrimero(Nodo *newPrimero);
   Nodo* getPrimero();
protected:
private:
    Nodo *primero;
};

#endif
