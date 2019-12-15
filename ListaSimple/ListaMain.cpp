/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS                   *
*                        ESPE                                     *
*TRABAJO :                                                        *
*          NOMBRE:ANTONI TOAPANTA                                 *
*MATERIA: ESTRUCTURA DE DATOS                                     *
*NRC:2967                                                         *
*Fecha de Creacion:26/11/2019                                     *
******************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Persona.cpp"
#include "Nodo.cpp"
#include "OperacionLista.cpp"
#include "IngresoBloqueTeclas.h"
#include "validarCedula.cpp"
#include "PruebaEmail.h"
#include "NodoString.cpp"
#include "OperacionString.cpp"
using namespace std;
int menu()
{
    bool repite=true;
    int opc;
    char c;
    Ingreso ig;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1.-Agregar Persona"<<endl;
        cout<<"2.-Mostrar Personas"<<endl;
        cout<<"3.-Buscar"<<endl;
        cout<<"4.-Eliminar"<<endl;
        cout<<"5.-Salir"<<endl;
        cout<<"Opcion: ";
        opc=ig.ingresarInt(&c);
        if(opc>=1 && opc<=5)
        {
            repite=false;
        }
        else{
            repite=true;
        }
    }while(repite);
    return opc;
}
int main()
{
    char t;
    int numID=1;
    bool repite=true;
    Nodo *lista = NULL;
    NodoString *listaCorreo=NULL;
    OperacionLista o;
    OperacionString os;
    string email="blanco";
    int i=1;
    Ingreso ig;
    while(repite)
    {
        Persona p;
        PruebaEmail e;
        bool pregunta=true;
        string cedula,nombre,apellido;
        switch(menu())
        {
            case 1:
                system("cls");
                p.setId(numID);
                cout<<"Ingrese Nombres: ";
                nombre=ig.ingresarLetras(&t);
                p.setNombre(nombre);
                cout<<"Ingrese Apellido: ";
                apellido=ig.ingresarLetras(&t);
                p.setApellido(apellido);
                    cout<<"Ingrese Cedula: ";
                    cedula=ig.ingresarNumeros(&t);
                if(e.genEmail(nombre,apellido,cedula,numID)==email)
                {
                    email=e.genEmail(nombre,apellido,cedula,numID);
                    char* num;
                    num=(char*)malloc(1*sizeof(char));
                    sprintf(num,"%d",i);
                    email.append(num);
                    p.setCorreo(email);
                    os.insertarLista(listaCorreo,email);
                    email.erase(email.length()-1);
                    free(num);
                    i++;
                }
                else{
                     email=e.genEmail(nombre,apellido,cedula,numID);
                    p.setCorreo(email);
                    os.insertarLista(listaCorreo,email);
                    i=1;
                }
                p.setCedula(cedula);
                o.addFinal(lista,p);
                p.~Persona();
                numID++;
                break;
            case 2:
                system("cls");
                o.print(lista);
                cout<<"LISTA DE CORREOS"<<endl;
                os.mostrar(listaCorreo);
                system("pause>NULL");
                system("cls");
                break;
            case 3:
                cout<<"Ingrese el Nombre que desea buscar: ";
                o.buscar(lista,ig.ingresarLetras(&t));
                system("pause>NULL");
                system("cls");
                break;
            case 4:
                cout<<"Ingrese el nombre que desea Eliminar: ";
                o.eliminar(lista,ig.ingresarLetras(&t));
                system("pause>NULL");
                system("cls");
            break;
            case 5:
            repite=false;
                break;
        }
    }
    system("pause");
    return 0;
}
