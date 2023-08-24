#include<iostream>
using namespace std;


class Demo
{
    int num1;
    int num2;
    public:
    //initialize the object with some user defined default values
    //constructor is member function of the class
    //sepcial member function used for initializing the object
    // constructor is not having any return type

    Demo() // user defined default constructor / parameterless constructor
    {
        cout<<" Inside Parameterless constructor :"<<endl;
        this->num1=5;
        this->num2=5;
    }
    Demo(int num1,int num2) // paramatrized constructor
    {
        cout<<"inside paramatrized constructor "<<endl;
        this->num1=num1;
        this->num2=num2;
    }
    void accept()
    {
        cout<<"Enter Num1 :";
        cin>>this->num1;
        cout<<"Enter Num2 :";
        cin>>this->num2;
    }

    void disp()
    {
        cout<<" Num1 : "<<this->num1<<" Num2 :"<<this->num2<<endl;
    }
};

int main(void)
{
    Demo d1; // d1 is object
    // constructor gets called automatically when we create the object 
    
    d1.disp(); // 5   5 

    cout<<"calling accept() on d1 object "<<endl;
    d1.accept();
    d1.disp();
    Demo d2(50,35); // call to paramatrized constructor 
    d2.disp();

    
    

    return 0;
}


/*
// whenever an object is created by default
// object is initialized with garbage values
// that job is done by Default Constructor
class Demo
{
    int num1;
    int num2;
    public:
    void disp()
    {
        cout<<" Num1 : "<<this->num1<<" Num2 :"<<this->num2<<endl;
    }
};

int main(void)
{
    Demo d1; // d1 is object
    d1.disp();
    //disp() is called upon d1 object
    // current object : d1
    // this will hold d1 object address 

    return 0;
}

*/