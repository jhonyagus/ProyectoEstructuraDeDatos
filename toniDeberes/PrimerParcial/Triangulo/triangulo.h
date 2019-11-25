/**
  * @file triangulo.h
  * @version 1.0
  * @date 29/09/2019
  * @author Antoni Toapanta,Luis Carvajal
  * @title Clase triangulo
  * @code
    int main() {
	double lado1,lado2,lado3;
	float angulo1,angulo2,angulo3;
	char l1,l2,l3,a1,a2,a3,opcion;
	int opcionInt;
	Triangulo triangulo;
	Ingreso lee;
	do
    {
        cout<<"Bienvenido"<<endl;
        cout<<"Seleccione Opciones"<<endl;
        cout<<"1-Ingresar 2 Lados y 1 Angulo(Ley de cosenos )"<<endl;
        cout<<"2.-Ingresar 2 angulos 1 Lado(Ley de senos)"<<endl;
        cout<<"0.-Salir"<<endl;
        opcionInt=lee.ingresarInt(&opcion);
    }while(opcionInt>2);
    switch(opcionInt)
    {
        case 1:
                lado1 = lee.ingresarDouble("Ingrese el Lado A",&l1);
                lado2 = lee.ingresarDouble("Ingrese el Lado B",&l2);
                angulo3 = lee.ingresarDouble("Ingrese el Angulo c",&a3);
                triangulo = Triangulo(lado1,lado2,angulo3);
                triangulo.mostrarLados();
                triangulo.leyCoseno2(lado1,lado2,angulo3);
                break;
        case 2:
                angulo2 = lee.ingresarDouble("Ingrese el Angulo b",&a2);
                angulo3 = lee.ingresarDouble("Ingrese el Angulo c",&a3);
                lado2 = lee.ingresarDouble("Ingrese el Lado B",&l2);
                triangulo = Triangulo(angulo2,angulo3,lado2);
                triangulo.mostrarAngulos();
                triangulo.leySeno2(angulo2,angulo3,lado2);
                break;
        case 0:
                cout<<"Sali"<<endl;
            break;
    }
    system("pause");
	return 0;
  * @endcode
  * @brief Uso de ley seno y coseno
  */
#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
/**
 * @brief Clase para la creacion de un triangulo
 */
class Triangulo{
	private://atributos
		double lado1,lado2,lado3;
		float angulo1,angulo2,angulo3;
	public://metodos
		/**
 		 * @brief Constructor de triangulo
 		 * @param float	
 		 * @param float	
 		 * @param float	
 		 * @param float	
 		 * @param float	
 		 * @param float	
         */
		Triangulo(float,float,float,float,float,float);
		/**
		  * @brief Constructor Vacio
		*/
		Triangulo();
		/**
		  * @brief constructor para tanto para 2 Angulos y un Lado
		  * @param float
		  * @param float
		  * @param double
		*/
		Triangulo(float,float,double);
		/**
		  * @brief construcctor para 2 Lados y 1 Angulo
		  * @param double
		  * @param double
		  * @param float
		*/
		Triangulo(double,double,float);
		void setLado1(float);
		void setLado2(float);
		void setLado3(float);
		void setAngulo1(float);
		void setAngulo2(float);
		void setAngulo3(float);
		float getLado1();
		float getLado2();
		float getLado3();
		float getAngulo1();
		float getAngulo2();
		float getAngulo3();
		/**
		  * @brief leyCoseno Calcula el valor de un lado
		  * @param double
		  * @param double
		  * @param float
		  * @return double
		*/
		double leyCoseno(double,double,float);
		/**
		  * @brief leyCoseno2 Calcula el valor de un lado
		  * @param double
		  * @param double
		  * @param float
		  
		*/
		void leyCoseno2(double,double,float);
		/**
		  * @brief leySeno2 Calcula el valor de un lado
		  * @param float
		  * @param float
		  * @param double
		  
		*/
		void leySeno2(float,float,double);
		/**
		  * @brief leySeno Calcula el valor de un lado
		  * @param float
		  * @param float
		  * @param double
		  * @return double
		*/
		double leySeno(float,float,double);
		/**
		  * @brief mostrar Muestra los angulos y los lados
		  */
		void mostrar();
		/**
		  * @brief mostrarLados Muestra los lados ingresados
		  */
		void mostrarLados();
		/**
		  * @brief mostrarAngulos Muestra los angulos ingresados
		  */
		void mostrarAngulos();
};
	Triangulo::Triangulo(float lado1,float lado2,float lado3,float angulo1,float angulo2,float angulo3){
		this->lado1=lado1;
		this->lado2=lado2;
		this->lado3=lado3;
		this->angulo1=angulo1;
		this->angulo2=angulo2;
		this->angulo3=angulo3;
	}
	Triangulo::Triangulo(){
		this->lado1=0;
		this->lado2=0;
		this->lado3=0;
		this->angulo1=0;
		this->angulo2=0;
		this->angulo3=0;
	}
	Triangulo::Triangulo(float angulo2,float angulo3,double lado2){
		this->lado1=0;
		this->lado2=lado2;
		this->lado3=0;
		this->angulo1=0;
		this->angulo2=angulo2;
		this->angulo3=angulo3;
	}
	Triangulo::Triangulo(double l1,double l2,float a3){
		this->lado1=l1;
		this->lado2=l2;
		this->lado3=0;
		this->angulo1=0;
		this->angulo2=0;
		this->angulo3=a3;
	}
	void Triangulo::setAngulo1(float angulo1){
		angulo1=angulo1;
	}
	void Triangulo::setLado1(float lado1){
		lado1=lado1;
	}
	void Triangulo::setAngulo2(float angulo2){
		angulo2=angulo2;
	}
	void Triangulo::setLado2(float lado2){
		lado2=lado2;
	}
	void Triangulo::setAngulo3(float angulo3){
		angulo3=angulo3;
	}
	void Triangulo::setLado3(float lado3){
		lado3=lado3;
	}
	float Triangulo::getAngulo1(){
		return angulo1;
	}
	float Triangulo::getLado1(){
		return lado1;
	}
	float Triangulo::getAngulo2(){
		return angulo2;
	}
	float Triangulo::getLado2(){
		return lado2;
	}
	float Triangulo::getAngulo3(){
		return angulo3;
	}
	float Triangulo::getLado3(){
		return lado3;
	}
	void Triangulo::mostrar()
	{
	    cout<<"Lado A: "<<lado1<<"   Angulo a: "<<angulo1<<endl;
	    cout<<"Lado B: "<<lado2<<"   Angulo b: "<<angulo2<<endl;
	    cout<<"Lado C: "<<lado3<<"   Angulo c: "<<angulo3<<endl;
	}
	void Triangulo::mostrarLados()
	{
	    cout<<"Lado A: "<<lado1<<endl;
	    cout<<"Lado B: "<<lado2<<endl;
	    cout<<"Angulo c: "<<angulo3<<endl;
	}
    void Triangulo::mostrarAngulos()
	{
	    cout<<"Angulo b: "<<angulo2<<endl;
	    cout<<"Angulo c: "<<angulo3<<endl;
	    cout<<"Lado B: "<<lado2<<endl;
	}
    double Triangulo::leyCoseno(double lado1,double lado2,float angulo3)
    {
        return sqrt(pow(lado1,2)+pow(lado2,2)-2*(lado1*lado2)*cos(angulo3*PI/180));
    }
    void Triangulo::leyCoseno2(double lado1,double lado2,float angulo3)
    {
        double q;
        q=sqrt(pow(lado1,2)+pow(lado2,2)-2*(lado1*lado2)*cos(angulo3*PI/180));
        cout<<"El Lado C es: "<<q<<endl;
    }
    double Triangulo::leySeno(float angulo3,float angulo2,double lado2)
    {
        return (lado2*sin(angulo3*PI/180))/(sin(angulo2*PI/180));
    }
    void Triangulo::leySeno2(float angulo2,float angulo3,double lado2)
    {
        double d;
        d=(lado2*sin(angulo3*PI/180))/(sin(angulo2*PI/180));
        cout<<"El Lado C es :"<<d<<endl;
    }

 
