// Sobrecarga de Operadores
#include <iostream>

using namespace std;

class Fecha // Clase
{
    private: // Atributos
        int day, mounth, year;
    public: // Metodos
        Fecha(int, int, int); // Constructor 1
        Fecha(long);// Constructor 2.
        void mostrarFecha();
};

Fecha::Fecha(int _day, int _mounth, int _year)
{
    day = _day;
    mounth = _mounth;
    year = _year;
}
Fecha::Fecha(long x)
{
    year = int(x/10000);
    mounth = int((x-year*10000)/100);
    day = int((x-year*10000-mounth*100));
}
void Fecha::mostrarFecha()
{
    cout<<"La fecha es: "<<day<<"/"<<mounth<<"/"<<year<<endl;
} 

int main()
{
    Fecha p1 = Fecha(14,10,2022);
    Fecha tomorrow(20221014);

    p1.mostrarFecha();
    tomorrow.mostrarFecha();


    return 0;
}