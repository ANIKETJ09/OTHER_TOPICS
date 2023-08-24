#include<iostream>
using namespace std;

class Base
{
    public:
    void show()
    {
        cout<<"Inside base class show function "<<endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        Base::show();
        cout<<" Inside Derived class show function "<<endl;
    }
};

int main(void)
{
    Base *ptr; // ptr is object of base class (base class pointer )
    Derived dobj;//dobj is object of derived class
    ptr=&dobj; //pointer is holding address of derived class object
    ptr->show(); // call to overridden function indirectly with the helpof pointer
    return 0;
}

//if we create a pointer of type base class
// if we call overridden function 
// always base class overridden function is called
// early binding 