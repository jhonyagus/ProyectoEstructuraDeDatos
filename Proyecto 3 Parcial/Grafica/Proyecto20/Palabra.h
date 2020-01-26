/***********************************************************************
 * Module:  Palabra.h
 * Author:  RODRIGO
 * Modified: martes, 21 de enero de 2020 00:11:09
 * Purpose: Declaration of the class Palabra
 ***********************************************************************/
#pragma once
#if !defined(__Class_Diagram_1_Palabra_h)
#define __Class_Diagram_1_Palabra_h
#include<string>
using namespace std;
class Palabra
{
public:
   string getEspanol(void);
   void setEspanol(string newEspanol);
   string getIngles(void);
   void setIngles(string newIngles);
   int getClave(void);
   void setClave(int newClave);
   int getClaveE(void);
   void setClaveE(int newClave);
   Palabra();
   ~Palabra();

protected:
private:
   string espanol;
   string ingles;
   int clave;
   int claveE;
};

#endif
