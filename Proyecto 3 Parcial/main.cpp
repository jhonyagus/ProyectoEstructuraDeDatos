#include<iostream>
#include<stdlib.h>
#include<string>
#include "Palabra.cpp"
#include "OperacionArbol.cpp"
#include "IngresoBloqueTeclas.h"
#include "TraformacionString.h"
#include "Arbol.cpp"
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
void open_file(Arbol *&arbol)
{
    ifstream archivo;
    OperacionArbol opA;
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
            opA.insertar(arbol,p);
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
    if(j>=100 || j<300)
    {
        j=j-100;
    }
    else if(j>=300|| j<650)
    {
        j=j-200;
    }
    else{
        j=j+500;
    }
    return j;
}
void convertirMayusculas(string &palabra)
{
    for(int i=0;i<palabra.length();i++)
    {
        palabra.at(i)=toupper(palabra.at(i));
    }
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
    convertirMayusculas(a);
    convertirMayusculas(b);
    p.setEspanol(a);
    p.setIngles(b);
    p.setClave(clave(b));
    write_file(p);
}
int main()
{
    /*bool flag=true; con esta agregamos mas palabras al diccionario
    while(flag)
    {
        agregar_Diccionario();
    }*/
    Arbol *arbol=NULL;
    OperacionArbol opA;
    open_file(arbol);
    opA.mostrar(arbol,0);
    delete arbol;
    system("pause");
    return 0;
}
