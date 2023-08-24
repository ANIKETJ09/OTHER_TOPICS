#include<iostream>
using namespace std;

//How to achieve operator overloading
// we have to write operator function

// operator function in global area
// operator function as a member function of class

/*
class Point
{
    int x;
    int y;
    public:
    Point()
    {
        this->x=5;
        this->y=5;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void disp()
    {
        cout<<" X : "<<x<<" Y : "<<y<<endl;
    }
};


int main(void)
{
    int num1=50,num2=20;
    cout<<"Addition : "<<num1+num2<<endl;
    Point p1;
    Point p2;
    Point p3;
    //p3=p1+p2; //error: no match for 'operator+()'
    // Extend the meaning of + operator 
    // Operator Overloading 
    //Requirement : 
    // + operator should add two values and
    // + operator should add two objects
    // + operator can perfrom one or more tasks (multiple forms)
    // POLYMORPHISIM 
    return 0;
}

*/