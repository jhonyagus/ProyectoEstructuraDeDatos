#include<iostream>
#include<stdlib.h>
#include"Nodo.h"
using namespace std;
int main()
{
    Nodo *arbol=NULL;
    int altura;
    arbol->insertar(arbol,5,NULL);
    arbol->insertar(arbol,3,NULL);
    arbol->insertar(arbol,8,NULL);
    arbol->insertar(arbol,1,NULL);
    arbol->insertar(arbol,3,NULL);
    arbol->insertar(arbol,6,NULL);
    arbol->insertar(arbol,9,NULL);
    arbol->insertar(arbol,30,NULL);
    cout<<"El Arbol  es el siguiente"<<endl;cout<<endl;
    arbol->mostrar(arbol,0);
    cout<<endl;cout<<endl;
    cout<<"Inorden: ";arbol->izdRaizDer(arbol,0);
    cout<<endl;cout<<endl;
    cout<<"Preorden: ";arbol->raizIzdDer(arbol,0);
    cout<<endl;cout<<endl;
    cout<<"Postorden: ";arbol->izdDerRaiz(arbol,0);
    cout<<endl;cout<<endl;
    cout<<"El altura del Arbol es: "<<arbol->alturaArbol(arbol,&altura)<<endl;
    cout<<endl;
    cout<<"Altura del nodo: "<<arbol->altura(arbol,30)<<endl;cout<<endl;
    int buscar;
    cout<<"Dato a buscar: "; cin>>buscar;
    if(arbol->busqueda(arbol,buscar)){
        cout<<"Elemento encontrado"<<endl;
    }else{
        cout<<"Elemento NO encontrado"<<endl;
    }
    int eliminar;
    cout<<"Nodo a eliminar: "; cin>>eliminar;
    arbol->eliminar(arbol,eliminar);
    arbol->mostrar(arbol,1);

    system("pause");
    return 0;
}
