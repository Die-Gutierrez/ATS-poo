// Polymorphism
#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        virtual void show();
};
class Student : public Person // Heritage
{
    private:
        string code;
    public:
        Student(string, int, string);
        void show();
};
class Teacher : public Person
{
    private: 
        string matter;
    public:
        Teacher(string, int , string);
        void show();
};
// Building Person(class Father)
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}
void Person::show()
{
    cout<<"\t-Person-"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
// Building Student (class son of Person)
Student::Student(string _name, int _age, string _code) : Person(_name, _age)
{
    code = _code;
}
void Student::show()
{
    cout<<"\t-Student-"<<endl;
    // Specify Class Father.
    Person::show();
    cout<<"Code: "<<code<<endl;
}
// Building Teacher (class son of Person)
Teacher::Teacher(string _name, int _age, string _matter) : Person(_name, _age)
{
    matter = _matter;
}
void Teacher::show()
{
    cout<<"\t-Teacher-"<<endl;
    Person::show();
    cout<<"Matter: "<<matter<<endl;
}
int main()
{
    Person *vector[3];
    
    vector[0] = new Student("Diego", 21, "2019-113433");
    vector[1] = new Student("Alonso", 15, "5453434");
    vector[2] = new Teacher("Petter Castle", 60, "Terrorism");

    vector[0]->show();
    vector[1]->show();
    vector[2]->show();

    return 0;
}