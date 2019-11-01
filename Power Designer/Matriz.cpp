/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  User
 * Modified: viernes, 1 de noviembre de 2019 9:23:03
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getmatriz()
// Purpose:    Implementation of Matriz::getmatriz()
// Return:     int**
////////////////////////////////////////////////////////////////////////

int** Matriz::getmatriz(void)
{
   return matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setmatriz(int** newMatriz)
// Purpose:    Implementation of Matriz::setmatriz()
// Parameters:
// - newMatriz
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setmatriz(int** newMatriz)
{
   matriz = newMatriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getfilas()
// Purpose:    Implementation of Matriz::getfilas()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getfilas(void)
{
   return filas;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setfilas(int newFilas)
// Purpose:    Implementation of Matriz::setfilas()
// Parameters:
// - newFilas
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setfilas(int newFilas)
{
   filas = newFilas;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getcolumnas()
// Purpose:    Implementation of Matriz::getcolumnas()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getcolumnas(void)
{
   return columnas;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setcolumnas(int newColumnas)
// Purpose:    Implementation of Matriz::setcolumnas()
// Parameters:
// - newColumnas
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setcolumnas(int newColumnas)
{
   columnas = newColumnas;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz()
// Purpose:    Implementation of Matriz::Matriz()
// Return:     
////////////////////////////////////////////////////////////////////////

Matriz::Matriz()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::reservarMemoria()
// Purpose:    Implementation of Matriz::reservarMemoria()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::reservarMemoria(void)
{
   // TODO : implement
}