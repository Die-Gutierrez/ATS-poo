#include <iostream>

using namespace std;

class Rectangulo
{
        int ancho, largo;
    public:
        void set_value(int , int);
        int area(){ return ancho*largo;}
};
void Rectangulo::set_value(int a, int b)
{
    ancho = a;
    largo = b;
}
int main()
{
    Rectangulo rea1;
    // Aqui el objeto ya tiene dentro de sus miembros de dato los valores (4, 5).
    rea1.set_value(4,5);
    cout<<"area : "<<rea1.area()<<endl;

    return 0;
}