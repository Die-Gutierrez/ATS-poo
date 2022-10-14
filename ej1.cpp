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
        // El constructor si o si debe tener el MISMO NOMBRE que la clase.
        Rectangulo(int, int);
        void perimeter();
        void area(); 
};
// Designando una funcion a nuestro constrcutor, para que nos disponga los atributos de la clase.
Rectangulo::Rectangulo(int _lonj, int _width)
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
    Rectangulo p1(6,2); // 'p1', vendria a ser el objeto creado.
    // De esta manera invocamos a los metodos de la clase en base a 1 objeto.
    p1.perimeter();
    p1.area();


    return 0;
}