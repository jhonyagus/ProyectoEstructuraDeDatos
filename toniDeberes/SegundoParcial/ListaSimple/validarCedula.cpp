#include <iostream>
#include<conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
int arreglo[10];
int digito;
int sumaDigitos=0;
int numeroRestar=0;
int elementoFinal=0;
using namespace std;
bool validar(string cedula)
{
    bool verdadero=false;
    char *numero;
    numero=(char*)cedula.c_str();
    for(int i=0;i<cedula.length();i++)
    {
        arreglo[i]=*(numero+i)-48;
    }


for(int i=0;i<9;i++){
if(i==0){
arreglo[i]=arreglo[i]*2;
if(arreglo[i]>=10){
arreglo[i]=arreglo[i]-9;
}
}
if( (i%2==0) && (i != 0) ){
arreglo[i]=arreglo[i]*2;
if(arreglo[i]>=10){
arreglo[i]=arreglo[i]-9;
}
}
if( (i%2 != 0) && (i!=0) ){
arreglo[i]=arreglo[i]*1;
if(arreglo[i]>=10){
arreglo[i]=arreglo[i]-9;
}
}

}
for(int i=0;i<9;i++){
sumaDigitos=sumaDigitos+arreglo[i];
}
if(sumaDigitos >=20 && sumaDigitos<=29){
numeroRestar=30-sumaDigitos;
}
if(sumaDigitos >=10 && sumaDigitos<=19){
numeroRestar=20-sumaDigitos;
}
if(sumaDigitos >=30 && sumaDigitos<=39){
numeroRestar=40-sumaDigitos;
}
elementoFinal=arreglo[9];
if(numeroRestar == elementoFinal){
cout<<"Tu cedula es correcta\n";
return verdadero=true;
}
if(numeroRestar != elementoFinal){
cout<<"Tu cedula es incorrecta\n";
return verdadero=false;
}
}
