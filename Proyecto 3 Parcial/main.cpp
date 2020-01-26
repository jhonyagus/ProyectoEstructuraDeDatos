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
        archivo<<p.getEspanol()<<";"<<p.getIngles()<<";"<<p.getClave()<<";"<<p.getClaveE()<<endl;
    }

    archivo.close();
}
void open_file(Arbol *&arbol)
{
    ifstream archivo;
    OperacionArbol opA;
    string espanol,ingles,clave,claveE;
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
            getline(archivo,clave,';');
            getline(archivo,claveE,'\n');
            p.setEspanol(espanol);
            p.setIngles(ingles);
            p.setClave(stringAint(clave));
            p.setClaveE(stringAint(claveE));
            opA.insertar(arbol,p);
        }
    }
    archivo.close();
}
void open_file_espanol(Arbol *&arbol)
{
    ifstream archivo;
    OperacionArbol opA;
    string espanol,ingles,clave,claveE;
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
            getline(archivo,clave,';');
            getline(archivo,claveE,'\n');
            p.setEspanol(espanol);
            p.setIngles(ingles);
            p.setClave(stringAint(clave));
            p.setClaveE(stringAint(claveE));
            opA.insertarE(arbol,p);
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
    p.setClaveE(clave(a));
    write_file(p);
}
int main()
{
    /*bool flag=true; //con esta agregamos mas palabras al diccionario
    while(flag)
    {
        agregar_Diccionario();
    }*/
    Arbol *arbol=NULL;
    Arbol *arbolE=NULL;
    int opc;
    Palabra palabra;
    char c,d;
    string plbra,result;
    Ingreso leer;
    OperacionArbol opA;
    open_file(arbol);
    open_file_espanol(arbolE);
    opA.mostrar(arbol,0);
    cout<<endl;
    cout<<endl;
    opA.mostrar(arbolE,0);
    cout<<endl;
    do{
        open_file(arbol);
        cout<<"1. Traducir Ingles-Espaniol"<<endl;
        cout<<"2.Traducir Español-Ingles"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese opcion: ";
        opc = leer.ingresarInt(&c);

        switch(opc){
            case 1:
                cout<<"Ingrese una palabra en ingles para traducir: ";
                plbra = leer.ingresarLetras(&d);
                convertirMayusculas(plbra);
                palabra.setClave(clave(plbra));
                opA.busqueda(arbol, palabra.getClave(),plbra,result);
                cout<<result<<endl;
                break;
            case 2:
                cout<<"Ingrese una palabra en Español para traducir: ";
                plbra = leer.ingresarLetras(&d);
                convertirMayusculas(plbra);
                palabra.setClaveE(clave(plbra));
                opA.busquedaEspanol(arbolE, palabra.getClaveE(),plbra,result);
                cout<<result<<endl;
        }

    }while(opc!=3);
    delete arbol,arbolE;
    system("pause");
    return 0;
}
