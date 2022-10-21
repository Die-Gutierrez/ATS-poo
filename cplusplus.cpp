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
    Rectangulo rea1, rea2;
    // Aqui el objeto ya tiene dentro de sus miembros de dato los valores (4, 5).
    rea1.set_value(4,5);
    rea2.set_value(10,6);
    cout<<"area de rea1 : "<<rea1.area()<<endl;
    cout<<"area de rea2 : "<<rea2.area()<<endl;

    return 0;
}