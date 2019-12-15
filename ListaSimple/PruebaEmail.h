/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 2967                                                       *
******************************************************************/
#include <string>
#include <stdio.h>
#include <cstdlib>
#include "GenerarEmail.h"
#include "TraformacionString.h"
#include <sstream>
#include<string.h>
using namespace std;

class PruebaEmail : public GenerarEmail
{
public:
   string genEmail(string nombre, string apellido,string cedula,int id);
   string cortar(string dato);
   PruebaEmail();
};
string PruebaEmail::cortar(string dato)
{
    string aux;
    char *c;
    c=trasformarStringChar(dato);
    strlwr(c);
    aux=arreglosAstring(c,4);
    delete c;
    return aux;
}
string PruebaEmail::genEmail(string nombre, string apellido,string cedula,int id)
{
    string parteCedula=cortar(cedula);
    string parteNombre=cortar(nombre);
    string parteApellido=cortar(apellido);
    stringstream ss;
    ss<<id;
    string correo=parteCedula+parteNombre+parteApellido+ss.str();
    return correo;
}
PruebaEmail::PruebaEmail()
{

}
