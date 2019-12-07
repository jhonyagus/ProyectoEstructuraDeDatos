/***********************************************************************
 * Module:  Piezas.cpp
 * Author:  RODRIGO
 * Modified: viernes, 6 de diciembre de 2019 23:59:08
 * Purpose: Implementation of the class Piezas
 ***********************************************************************/

#include "Piezas.h"
#include "miniwin.h"
using namespace miniwin;
////////////////////////////////////////////////////////////////////////
// Name:       Piezas::getX()
// Purpose:    Implementation of Piezas::getX()
// Return:     int
////////////////////////////////////////////////////////////////////////
void Piezas::pieza(int x, int y, int col)
{
    color(col);
    rectangulo_lleno(1+x*30,1+y*30,x*30+30,y*30+30);
}
int Piezas::getX(void)
{
   return x;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::setX(int newX)
// Purpose:    Implementation of Piezas::setX()
// Parameters:
// - newX
// Return:     void
////////////////////////////////////////////////////////////////////////

void Piezas::setX(int newX)
{
   x = newX;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::getY()
// Purpose:    Implementation of Piezas::getY()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::getY(void)
{
   return y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::setY(int newY)
// Purpose:    Implementation of Piezas::setY()
// Parameters:
// - newY
// Return:     void
////////////////////////////////////////////////////////////////////////

void Piezas::setY(int newY)
{
   y = newY;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo1()
// Purpose:    Implementation of Piezas::cubo1()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo1(void)
{
    pieza(getX(),getY(),BLANCO);
   return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo2()
// Purpose:    Implementation of Piezas::cubo2()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo2(void)
{
    pieza(getX(),getY(),ROJO);
   return 2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo3()
// Purpose:    Implementation of Piezas::cubo3()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo3(void)
{
    pieza(getX(),getY(),AZUL);
   return 3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo4()
// Purpose:    Implementation of Piezas::cubo4()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo4(void)
{
    pieza(getX(),getY(),AMARILLO);
   return 4;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo5()
// Purpose:    Implementation of Piezas::cubo5()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo5(void)
{
    pieza(getX(),getY(),VERDE);
   return 5;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo6()
// Purpose:    Implementation of Piezas::cubo6()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo6(void)
{
    pieza(getX(),getY(),MAGENTA);
   return 6;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo7()
// Purpose:    Implementation of Piezas::cubo7()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo7(void)
{
    pieza(getX(),getY(),NEWCOLOR);
   return 7;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo8()
// Purpose:    Implementation of Piezas::cubo8()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Piezas::cubo8(void)
{
    pieza(getX(),getY(),VERDECLARO);
   return 8;
}

////////////////////////////////////////////////////////////////////////
// Name:       Piezas::cubo9()
// Purpose:    Implementation of Piezas::cubo9()
// Return:     int
///////////////////s/////////////////////////////////////////////////////

int Piezas::cubo9(void)
{
    pieza(getX(),getY(),CELESTE);
   return 9;
}
int Piezas::vacio(void)
{
    pieza(getX(),getY(),NEGRO);
    return 0;
}

int Piezas::unaPieza(int pieza)
{
    switch(pieza)
    {
        case 1:
            return cubo1();
            break;
        case 2:
            return cubo2();
            break;
        case 3:
            return cubo3();
            break;
        case 4:
            return cubo4();
            break;
        case 5:
            return cubo5();
            break;
        case 6:
            return cubo6();
            break;
        case 7:
            return cubo7();
            break;
        case 8:
            return cubo8();
            break;
        case 9:
            return cubo9();
            break;
        case 0:
            return vacio();
            break;
    }
}
