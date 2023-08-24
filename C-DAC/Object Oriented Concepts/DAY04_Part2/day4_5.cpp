#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
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

//a overridden function is called from the derived class
// late binding 