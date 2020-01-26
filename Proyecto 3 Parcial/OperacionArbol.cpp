/***********************************************************************
 * Module:  OperacionArbol.cpp
 * Author:  RODRIGO
 * Modified: sábado, 25 de enero de 2020 13:49:51
 * Purpose: Implementation of the class OperacionArbol
 ***********************************************************************/

#include "OperacionArbol.h"
#include <iostream>
#include "Palabra.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       OperacionArbol::insertar(Arbol&* arbol, Palabra palabra)
// Purpose:    Implementation of OperacionArbol::insertar()
// Parameters:
// - arbol
// - palabra
// Return:     void
////////////////////////////////////////////////////////////////////////
Arbol *crearNodo(Palabra newpalabra){
    Arbol *nuevo_nodo=new Arbol();
            nuevo_nodo->setPalabra(newpalabra);
            nuevo_nodo->setDer(NULL);
            nuevo_nodo->setIzq(NULL);
            return nuevo_nodo;
}
void OperacionArbol::insertar(Arbol *&arbol, Palabra palabra)
{
   if(arbol==NULL){
                Arbol *nuevo_nodo=crearNodo(palabra);
                arbol=nuevo_nodo;
            }
            else{
                int valorR = arbol->getPalabra().getClave();
                if(palabra.getClave()<valorR){
                    insertar(arbol->izq,palabra);
                }
                else{
                    insertar(arbol->der,palabra);
                }
            }
}
void OperacionArbol::insertarE(Arbol *&arbol, Palabra palabra)
{
   if(arbol==NULL){
                Arbol *nuevo_nodo=crearNodo(palabra);
                arbol=nuevo_nodo;
            }
            else{
                int valorR = arbol->getPalabra().getClaveE();
                if(palabra.getClaveE()<valorR){
                    insertar(arbol->izq,palabra);
                }
                else{
                    insertar(arbol->der,palabra);
                }
            }
}

////////////////////////////////////////////////////////////////////////
// Name:       OperacionArbol::mostrar()
// Purpose:    Implementation of OperacionArbol::mostrar()
// Return:     void
///////////////////////////////////////////creo que e/////////////////////////////
void space(int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<"    ";
    }
}
void OperacionArbol::mostrar(Arbol *arbol,int cont)
{
    if(arbol==NULL)
    {
        return;
    }
    else
    {
        mostrar(arbol->getDer(),cont+1);
        space(cont);
        cout<<arbol->getPalabra().getEspanol()<<" "<<arbol->getPalabra().getIngles()<<endl;
        //cout<<arbol->getPalabra().getClave()<<endl;
        mostrar(arbol->getIzq(),cont+1);
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       OperacionArbol::eliminar()
// Purpose:    Implementation of OperacionArbol::eliminar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void OperacionArbol::eliminar(Arbol *&arbol,Palabra palabra)
{
   // TODO : implement
}

void OperacionArbol::busqueda(Arbol *arbol, int n, string plbra,string &result)
{
    if(arbol == NULL)
    {
       cout<< " No registrado en el diccionario "<<endl;
    }
    else
    {
        if(arbol->getPalabra().getClave() == n)
        {
            cout<<plbra<<" - "<<arbol->getPalabra().getEspanol()<<endl;
            result=arbol->getPalabra().getEspanol();
            return;
        }
        else
        {
            if( n < arbol->getPalabra().getClave())
            {
                busqueda(arbol->getIzq(),n,plbra,result);
            }
            else
            {
                busqueda(arbol->getDer(),n,plbra,result);
            }
        }
    }
}
void OperacionArbol::busquedaEspanol(Arbol *arbol, int n, string plbra,string &result)
{
    if(arbol == NULL)
    {
       cout<< " No registrado en el diccionario "<<endl;
    }
    else

         //cout<<arbol->getPalabra().getClaveE()<<" "<<n<<endl;
        if(arbol->getPalabra().getClaveE() == n)
        {
            cout<<plbra<<" - "<<arbol->getPalabra().getIngles()<<endl;
            result=arbol->getPalabra().getIngles();
            return;
        }
        else
        {
            if( n < arbol->getPalabra().getClaveE())
            {
                busquedaEspanol(arbol->izq,n,plbra,result);
            }
            else
            {
                busquedaEspanol(arbol->der,n,plbra,result);
            }
        }
    }

void OperacionArbol::inorden(Arbol *arbol) {
	if (arbol == NULL) {
		return;
	}
	else {
		inorden(arbol->getIzq());
		cout << arbol->getPalabra().getClave() << " ";
		inorden(arbol->getDer());
	}
}
