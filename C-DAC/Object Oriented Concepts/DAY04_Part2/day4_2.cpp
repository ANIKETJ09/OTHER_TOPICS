#include<iostream>
using namespace std;
#include<string>

class Person
{
    string name;
    int id;
    public:
    Person()
    {
        cout<<"Inside Person Parameterless Constructor"<<this<<endl;
        this->name="Akshita";
        this->id=1;
    }
    void print_person()
    {
        cout<<" Name : "<<this->name<<" ID : "<<this->id<<endl;
    }
    ~Person()
    {
        cout<<"Person class Desctructor "<<endl;
    }
};

//class derivedclassname : Mode Baseclassname 
//{ }
class Employee:public Person
{
    int age;
    int sal;
    public:
    Employee()
    {
        cout<<"Inside Employee Parameterless Constructor"<<this<<endl;
        this->age=33;
        this->sal=50000;
    }
    void print_emp()
    {
        print_person(); //calling the function of super class directly 
        cout<<" Age : "<<this->age<<" Sal : "<<this->sal<<endl;
    }
    ~Employee()
    {
        cout<<"Employee class Desctuctor"<<endl;
    }
};


int main(void)
{
    Employee eobj;
    eobj.print_emp();
    return 0;
}


// 1. parameterless constructor of super class is called automatically 
//by paramerless constructor of sub class
//2 . if we wish to call any other member function eg.print_emp() of base class
//we can call them directly inside derived class function without object name
//3. destructor calling sequence is opposite to constructor calling
//4. first destructor of derived class is called and then desctructor of base class 

