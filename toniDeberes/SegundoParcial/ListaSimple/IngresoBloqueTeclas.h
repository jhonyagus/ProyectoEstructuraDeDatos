/***********************************************************************
 * Module:  Alumno.cpp
 * Author:  G403
 * Modified: martes, 29 de octubre de 2019 11:05:02
 *By: Antoni Toapanta
 ***********************************************************************/
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string>

using namespace std;

class Ingreso {
public:
	double ingresarDouble(char*,char*);
	int ingresarInt(char*);
	char ingresCaracter(char*);
	string ingresarLetras(char*);
	string ingresarNumeros(char*);
};
double Ingreso::ingresarDouble(char *msg,char*p) {
    char tecla;
    int i=0,cont=0;
    p[0]='\0';
    cout<<msg<<endl;
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            cont--;
            p[--i]='\0';
        }
        else{
            if((tecla>=48 && tecla<=57)||(tecla==46 && cont<=0) )
            {
                cout<<tecla;
                p[i++]=tecla;
                if(tecla==46)
                {
                    cont++;
                }
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");
    return atof(p) ;
}
int Ingreso::ingresarInt(char *p)
{
    char tecla;
    int i=0;
    p[0]='\0';
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            p[--i]='\0';
        }
        else{
            if((tecla>=48 && tecla<=57))
            {
                cout<<tecla;
                p[i++]=tecla;
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");
    return atoi(p);
}
string Ingreso::ingresarLetras(char *p)
{
    string s;
    char tecla;
    int cont=0;
    int i=0;
    p[0]='\0';
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            cont--;
            p[--i]='\0';
        }
        else{
            if((tecla>=97 && tecla<=122)|| (tecla>=65 && tecla<=90)|| (tecla==32 && cont<=0))
            {
                cout<<tecla;
                p[i++]=tecla;
                if(tecla==32)
                {
                    cont++;
                }
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    s=string(p);
    system("cls");
    return s.c_str();
}
string Ingreso::ingresarNumeros(char *p)
{
    string s;
    char tecla;
    int i=0;
    p[0]='\0';
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            p[--i]='\0';
        }
        else{
            if((tecla>=48 && tecla<=57))
            {
                cout<<tecla;
                p[i++]=tecla;
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    s=string(p);
    system("cls");
    return s.c_str();
}
char Ingreso::ingresCaracter(char *p)
{
    char tecla;
    char c;
    int i=0;
    p[0]='\0';
    do
    {
        tecla=getch();
        if(i> 0 && tecla == 8)
        {
            cout<<"\b \b";
            p[--i]='\0';
        }
        else{
            if((tecla==104 || tecla==109 || tecla==72 || tecla==77 || tecla==83 || tecla==67 || tecla==68))
            {
                cout<<tecla;
                p[i++]=tecla;
            }
        }
    }while(tecla!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");
    c=*(p+0);
    return c;
}
