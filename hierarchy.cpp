#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        void showP();
};
class Employee : public Person
{
    private:
        string job;
    public:
        Employee(string, int, string);
        void showE();
};
class Student : public Person
{
    private:
        string codeS;
        float noteF;
    public:
        Student(string, int, string, float);
        void showS();
};
class Academic : public Student
{
    private:
        string school;
    public:
        Academic(string, int, string, float, string);
        void showA();
};
//Building and Method of the class Person (Father)
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}
void Person::showP()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
//Building and Method of the class Employee (Son of Person)
Employee::Employee(string _name, int _age, string _job) : Person(_name, _age)
{
    job = _job;
}
void Employee::showE()
{
    showP();
    cout<<"Job: "<<job<<endl;
}
//Building and Method of the class Student (Son of Person)
Student::Student(string _name, int _age, string _codeS, float _noteF) : Person(_name, _age)
{
    codeS = _codeS;
    noteF = _noteF;
}
void Student::showS()
{
    showP();
    cout<<"Code Student: "<<codeS<<endl;
    cout<<"Note Final: "<<noteF<<endl;
}
//Building and Method of the class Academic (Son of Student)
Academic::Academic(string _name, int _age, string _codeS, float _noteF, string _school) : Student(_name, _age, _codeS, _noteF)
{
    school = _school;
}
void Academic::showA()
{
    showS();
    cout<<"School: "<<school<<endl;
}
int main()
{
    Person p1("Diego", 21);
    Employee e1("Diego", 21, "Student");
    Student s1("Diego", 21, "2019-119046", 15.5);
    Academic a1("Diego", 21, "2019-119046", 15.5, "Esis");

    cout<<"\t-Person-"<<endl;
    p1.showP();
    cout<<"\t-Employee-"<<endl;
    e1.showE();
    cout<<"\t-Student-"<<endl;
    s1.showS();
    cout<<"\t-Academic-"<<endl;
    a1.showA();

    return 0;
}