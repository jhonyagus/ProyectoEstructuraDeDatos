#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED
class Fraccion
{
    private:
        float numerador;
        float denominador;
    public:
        Fraccion(float, float);
        Fraccion();
        void setNumerador(float);
        void setDenominador(float);
        float getNumerador();
        float getDenominador();
        Fraccion procesar (Fraccion, Fraccion);
        void procesar2(Fraccion,Fraccion,Fraccion*);
        void procesar3(Fraccion,Fraccion);
        void imprimir(Fraccion);
};
Fraccion::Fraccion(float num, float den)
{
    this->numerador=num;
    this->denominador=den;
}
Fraccion::Fraccion()
{
    this->numerador=0;
    this->denominador=0;
}
void Fraccion::setNumerador(float c)
{
    numerador=c;
}
void Fraccion::setDenominador(float c)
{
    denominador=c;
}
float Fraccion::getNumerador()
{
    return numerador;
}
float Fraccion::getDenominador()
{
    return denominador;
}
Fraccion Fraccion::procesar(Fraccion frac1, Fraccion frac2)
{
    float a,b,c,d;
    float num,den;
    Fraccion fraccion1 = Fraccion();
    a=frac1.getNumerador();
    b=frac1.getDenominador();
    c=frac2.getNumerador();
    d=frac2.getDenominador();
    den=b*d;
    num=d*a + c*b;
    fraccion1.setDenominador(den);
    fraccion1.setNumerador(num);
    return fraccion1;
}
void Fraccion::procesar2(Fraccion frac1, Fraccion frac2, Fraccion *frac)
{
    float a,b,c,d;
    float num,den;
    Fraccion fraccion1 = Fraccion();
    a=frac1.getNumerador();
    b=frac1.getDenominador();
    c=frac2.getNumerador();
    d=frac2.getDenominador();
    den=b*d;
    num=d*a + c*b;
    fraccion1.setDenominador(den);
    fraccion1.setNumerador(num);
    *frac=fraccion1;
}
void Fraccion::procesar3(Fraccion frac1, Fraccion frac2)
{
    float a,b,c,d;
    float num,den;
    Fraccion fraccion1 = Fraccion();
    a=frac1.getNumerador();
    b=frac1.getDenominador();
    c=frac2.getNumerador();
    d=frac2.getDenominador();
    den=b*d;
    num=d*a + c*b;
    fraccion1.setDenominador(den);
    fraccion1.setNumerador(num);
    imprimir(fraccion1);
}
void Fraccion::imprimir(Fraccion resultado)
{
    cout<<resultado.getNumerador()<<"/"<<resultado.getDenominador()<<endl;
}
#endif // FRACCION_H_INCLUDED
