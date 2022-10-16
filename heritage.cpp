// Heritage in POO
#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        void mostrar();
};
// Student heritage all of the class Person.
class Student : public Person
{
    private:
        string codeS;
        int noteE;
    public:
        Student(string, int, string, int);
        void show();
};
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}
// We denote that the Person class already has values for 'Person(_name,_age)'
Student::Student(string _name, int _age, string _codeS, int _noteE) : Person(_name, _age)
{
    codeS = _codeS;
    noteE = _noteE;
}
void Person::mostrar()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
void Student::show()
{
    mostrar(); // Why my class student was heritage of u Daddy the methods.
    cout<<"The student code: "<<codeS<<endl;
    cout<<"Student's final mark: "<<noteE<<endl;
}
int main()
{   
    Person p1("Diego", 22);
    p1.mostrar();
    Student p2("Diego", 21, "2019-119046", 16);
    p2.show();

    return 0;
}