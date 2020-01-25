#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include<iostream>
using namespace std;
class Nodo{
    private:
        int dato;
        Nodo *der;
        Nodo *izq;
        Nodo *padre;
    public:
        Nodo *crearNodo(int n, Nodo *padre){
            Nodo *nuevo_nodo=new Nodo();
            nuevo_nodo->dato=n;
            nuevo_nodo->der=NULL;
            nuevo_nodo->izq=NULL;
            nuevo_nodo->padre = padre;
            return nuevo_nodo;
        }

        void destruirNodo(Nodo *nodo){
            nodo->izq = NULL;
            nodo->der = NULL;
            delete nodo;
        }


        void remplazar(Nodo *arbol , Nodo *nuevoNodo){
            if(arbol->padre){
                if(arbol->dato == arbol->padre->izq->dato){
                    arbol->padre->izq = nuevoNodo;
                }else{
                    if(arbol->dato == arbol->padre->der->dato){
                        arbol->padre->der = nuevoNodo;
                    }
                }
            }
            if(nuevoNodo){
                nuevoNodo->padre = arbol->padre;
            }
        }

         Nodo *minimo(Nodo *arbol){
            if(arbol == NULL){
                return NULL;
            }
            if(arbol->der){
                return minimo(arbol->der);
            }else{
                return arbol;
            }
        }

         void eliminarNodo(Nodo *nodoEliminar){
            if(nodoEliminar->izq  && nodoEliminar->der){
                Nodo *menor = minimo(nodoEliminar->izq);
                nodoEliminar->dato = menor->dato;
                eliminarNodo(menor);
            }
            else if(nodoEliminar->izq){
                    remplazar(nodoEliminar,nodoEliminar->izq);
                    destruirNodo(nodoEliminar);
            }
            else if(nodoEliminar->der){
                    remplazar(nodoEliminar,nodoEliminar->der);
                    destruirNodo(nodoEliminar);
            }
            else{
                remplazar(nodoEliminar,NULL);
                destruirNodo(nodoEliminar);
            }
        }

        void eliminar(Nodo *arbol , int n){
            if(arbol == NULL){
                cout<<"Nada que eliminar";
            }else{
                if(n<arbol->dato){
                    eliminar(arbol->izq,n);
                }else{
                    if(n>arbol->dato){
                        eliminar(arbol->der,n);
                    }else{
                        eliminarNodo(arbol);
                    }
                }
            }
        }

        void space(int tam)
        {
            for(int i=0;i<tam;i++){
                    cout<<"  ";
                }
        }

        void insertar(Nodo *&arbol,int n, Nodo *padre){
            if(arbol==NULL){
                Nodo *nuevo_nodo=crearNodo(n, padre);
                arbol=nuevo_nodo;
            }
            else{
                int valorR = arbol->dato;
                if(n<valorR){
                    insertar(arbol->izq,n,arbol);
                }
                else{
                    insertar(arbol->der,n,arbol);
                }
            }
        }

        void mostrar(Nodo *arbol,int cont){
            if(arbol==NULL){
                return;
            }
            else{
                mostrar(arbol->der,cont+1);
                space(cont);
                cout<<arbol->dato<<endl;
                mostrar(arbol->izq,cont+1);
            }
        }

        void izdRaizDer(Nodo *arbol,int cont){
            if(arbol==NULL){
                return;
            }
            else{
                izdRaizDer(arbol->izq,cont+1);
                cout<<arbol->dato<<", ";
                izdRaizDer(arbol->der,cont+1);
            }
        }

    void raizIzdDer(Nodo *arbol,int cont){
            if(arbol==NULL){
                return;
            }
            else{
                cout<<arbol->dato<<", ";
                raizIzdDer(arbol->izq,cont+1);
                raizIzdDer(arbol->der,cont+1);
            }
        }

    void izdDerRaiz(Nodo *arbol,int cont){
            if(arbol==NULL){
                return;
            }
            else{
                izdDerRaiz(arbol->izq,cont+1);
                izdDerRaiz(arbol->der,cont+1);
                cout<<arbol->dato<<", ";
            }
        }

        int vacio(Nodo* r)
        {
           return r == NULL;
        }

    int altura(Nodo* arbol, int dato)
        {
           int altura = 1;
           Nodo* actual = arbol;

           while(!vacio(actual)) {
              if(dato == actual->dato) return altura;
              else {
                 altura++;
                 if(dato < actual->dato) actual = actual->izq;
                 else if(dato > actual->dato) actual = actual->der;
              }
           }
           return -1;
        }

        int esHoja(Nodo* r)
        {
           return !r->der && !r->izq;
        }

        void auxAltura(Nodo* nodo, int a, int *altura)
        {

           if(nodo->izq) auxAltura(nodo->izq, a+1, altura);
           if(nodo->der) auxAltura(nodo->der, a+1, altura);
           if(esHoja(nodo) && a > *altura) *altura = a;
        }

        int alturaArbol(Nodo* arbol, int *altura)
        {
           *altura = 1;

           auxAltura(arbol, 1, altura);
           return *altura;
        }

        bool busqueda(Nodo *arbol, int n){
            if(arbol == NULL){
                return false;
            }else{
                if(arbol->dato == n){
                    return true;
                }else{
                    if( n < arbol->dato){
                        return busqueda(arbol->izq,n);
                    }else{
                        return busqueda(arbol->der,n);
                    }
                }
            }
        }


};
#endif // NODO_H_INCLUDED
