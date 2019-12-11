/***********************************************************************
 * Module:  Nodo.h
 * Author:  User
 * Modified: miércoles, 13 de noviembre de 2019 19:39:18
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h


class Nodo
{
public:
    int getDatos(void);
    void setDatos(int newDatos);
    Nodo *getSiguiente(void);
    void setSiguiente(Nodo* newSiguiente);
    Nodo *getAnterior(void);
    void setAnterior(Nodo* newAnterior);
    Nodo();
protected:
private:
    int datos;
    Nodo *siguiente;
    Nodo *anterior;
};

#endif
