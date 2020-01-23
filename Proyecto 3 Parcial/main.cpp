#include<iostream>
#include<stdlib.h>
#include<string>
#include "Palabra.cpp"
#include "Nodo.cpp"
#include "OperacionLista.cpp"
#include "IngresoBloqueTeclas.h"
#include "TraformacionString.h"
#include<fstream>
using namespace std;
void write_file(Palabra p)
{
    ofstream archivo;
    archivo.open("Dic.txt",ios::out|ios::app);
    if(archivo.fail())
    {
        cout<<"No se pudo Abrir"<<endl;
        exit(1);
    }
    else{
        archivo<<p.getEspanol()<<";"<<p.getIngles()<<";"<<p.getClave()<<endl;
    }

    archivo.close();
}
void open_file(Nodo *&lista)
{
    ifstream archivo;
    OperacionLista op;
    string espanol,ingles,clave;
    archivo.open("Dic.txt",ios::in);

    if (archivo.fail())
    {
        cout<<"No se puedo acceder al archivo"<<endl;
    }
    else
    {
        while(!archivo.eof()){
            Palabra p;
            getline(archivo,espanol,';');
            getline(archivo,ingles,';');
            getline(archivo,clave,'\n');
            p.setEspanol(espanol);
            p.setIngles(ingles);
            p.setClave(stringAint(clave));
            op.addInicial(lista,p);
        }
    }
    archivo.close();
}
int clave(string palabra)
{
    int j=0;
    for(int i=0;i<palabra.length();i++)
    {
        j=palabra.at(i)+j;
    }
    return j;
}
void agregar_Diccionario()
{
    char c;
    string a,b;
    Ingreso ig;
    cout<<"Español"<<endl;
    a=ig.ingresarLetras(&c);
    cout<<"Ingles"<<endl;
    b=ig.ingresarLetras(&c);
    Palabra p;
    p.setEspanol(a);
    p.setIngles(b);
    p.setClave(clave(b));
    write_file(p);
}
int main()
{
    //agregar_Diccionario();
    Nodo *lista=NULL;
    OperacionLista op;
    open_file(lista);
    op.print(lista);
    delete lista;
    system("pause");
    return 0;
}
