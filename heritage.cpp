// Heritage in POO
#include <iostream>

using namespace std;

class Person
{
    // 'proteced', mediante esta palabra hacemos que la clase padre pueda ser modificada por las 
    // clases hijas, modificando asi los 'atributos'
    protected:
        string name;
        int age;
    public:
        Person(string, int);
        void mostrar();
};
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}
void Person::mostrar()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
int main()
{   
    Person p1("Diego", 21);

    p1.mostrar();

    return 0;
}