#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "Nodo.h"
#include "OperacionLista.cpp"
#include <fstream>
using namespace std;

bool primo(int n)
{
    int acum=0;;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            acum++;
        }
    }
    if(acum<=2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    ofstream archivo;
    archivo.open("NPrimos.txt",fstream::out);
    Nodo *lista=NULL;
    int numeros=1;
    OperacionLista o;
    char c;
    for(int i=0;i<numeros;i++)
    {
        numeros++;
        if(c=getch()=='q')
        {
            break;
        }
        else{
            cout<<"El numero a comprobar es "<<i<<endl;
            if(primo(i))
            {
                o.insertarLista(lista,i);
                cout<<"Numero Primo"<<endl;
                archivo<<i<<endl;;
            }
            else{
                cout<<"Numero no es primo"<<endl;
            }
        }
    }
    archivo.close();
    system("cls");
    o.mostrar(lista);
    system("pause");
    return 0;
}
