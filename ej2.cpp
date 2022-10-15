/*Construya una clase Tiempo que contenga los siguientes atributos enteros: horas, minutos y segundos. Haga 
que la clase contenga 2 constructores, el primero debe tener 3 parametros Tiempo(int, int, int) y el segundo 
solo tendra un campo que seran los segundos y desensamble el numero entero largo en horas, minutos y segundos*/
#include <iostream>

using namespace std;

class Tiempo
{
    private:
        int hour, min, sec;
    public:
        Tiempo(int, int, int); // Constructor 1.
        Tiempo(int); // Constructor 2.
        void mostrar();
};
Tiempo::Tiempo(int _hour, int _min, int _sec)
{
    hour = _hour;
    min = _min;
    sec = _sec;
}
Tiempo::Tiempo(int seconds)
{
    sec = seconds % 60;
    min = seconds/60;
    hour = min/60;
    min = min%60;
}
void Tiempo::mostrar()
{
    cout<<"La hora es: "<<hour<<":"<<min<<":"<<sec<<endl;
}

int main()
{
    Tiempo laHora(1,20,50);
    Tiempo lahora = Tiempo(20000);

    laHora.mostrar();
    lahora.mostrar();

    return 0;
}