/*Construya una clase llamda Rectangulo que tenga los siguientes atributos: largo y ancho,
y los siguientes metodos: perimetro() y area()*/
#include<iostream>

using namespace std;

class Rectangulo
{
    private: // Atributos de la clase.
        int lonj;
        int width;
    public: // Metodos de la clase.
        //Inicializando Constructor.
        void rectangulo(int, int);
        void perimeter();
        void area(); 
};
// Designando una funcion a nuestro constrcutor, para que nos disponga los atributos de la clase.
void Rectangulo::rectangulo(int _lonj, int _width)
{
    lonj = _lonj;
    width = _width;
}
void Rectangulo::perimeter()
{
    cout<<"El perimetro del Rectangulo es: "<<lonj*2+width*2<<endl;
}
void Rectangulo::area()
{
    cout<<"El area del Rectangulo es: "<<lonj*width<<endl;
}

int main()
{



    return 0;
}