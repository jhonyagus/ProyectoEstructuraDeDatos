#ifndef MANEJOTABLERO_H_INCLUDED
#define MANEJOTABLERO_H_INCLUDED
void pintar(int **tablero,int x, int y)
{
    Piezas p;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            p.setX(j);
            p.setY(i);
            p.unaPieza(*(*(tablero+i)+j));
        }
    }
}
bool colision(int **tabla,Piezas p)
{
    if(p.getY()<19)
    {
       p.setY(p.getY()+1);
    }
    p.unaPieza(*(*(tabla+p.getY())+p.getX()));
    if(p.getNum()!=0){
        return true;
    }
    else{
        return false;
    }
}
void llenarNuevaTabla(int **tabla,ListaCircularDoble lista)
{
    for(int i=0;i<30;i++)
    {
        *(*(tabla+13)+i)=lista.buscarPosicion(i);
    }
}

#endif // MANEJOTABLERO_H_INCLUDED
