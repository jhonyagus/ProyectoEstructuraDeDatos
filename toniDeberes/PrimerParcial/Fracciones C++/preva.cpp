#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
void entrada(char *p)
{
    char letra;
    int i=0;
    p[0]='\0';
    do
    {
         letra=getch();
        if(i> 0 && letra == 8)
        {
            cout<<"\b \b";
            p[--i]='\0';
        }
        else{

            cout<<"*";
            p[i++]=letra;
        }
    }while(letra!=13 || p[0]=='\0');
    p[i]='\0';
    cout<<endl;
    system("cls");

}
int main()
{
    char palabra;
    entrada(&palabra);
    cout<<&palabra<<endl;

    system("pause");
    return 0;
}
