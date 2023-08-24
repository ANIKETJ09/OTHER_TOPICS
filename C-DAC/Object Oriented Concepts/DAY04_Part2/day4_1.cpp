#include<iostream>
using namespace std;

class B; //FORWARD DECLARATION

class A
{
    private:
    int num1;
    public:
    A()
    {
        this->num1=10;
    }
    void dispA()
    {
        cout<<"Num1 : "<<num1;
    }
    friend void sum(A aobj,B bobj); //friend function declaration must be done inside class
};

class B
{
    private:
    int num2;
    public:
    B()
    {
        this->num2=20;
    }
    void dispB()
    {
        cout<<" Num2 : "<<num2;
    }
    friend void sum(A aobj,B bobj); //friend function declaration
};

//friend function defining in the global area
void sum(A aobj,B bobj)
{
    int res;
    res=aobj.num1+bobj.num2;
    //inside friend function we can access the private data members of the class
    // directly with the help of object name 
    cout<<" Result : "<<res;
   
}



int main(void)
{
    A aobj;
    B bobj;
    //aobj.num1=30; //not allowed 
    aobj.dispA(); //10 
    bobj.dispB(); // 20 
    sum(aobj,bobj);
    
    
    return 0;
}