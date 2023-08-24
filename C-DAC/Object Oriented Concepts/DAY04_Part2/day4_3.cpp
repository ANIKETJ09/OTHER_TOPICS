#include<iostream>
using namespace std;

// FUNCTION OVERRIDING : run time polymorphisim 
//same function name with same arguments but in different scope
// function signature / prototype is exactly same in different scope

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

// show() is overridden function
// if we wish to call overrridden function of base class inside derived class
// then we use baseclassname::function name 

int main(void)
{
    Derived dobj;
    dobj.show();
    return 0;

}