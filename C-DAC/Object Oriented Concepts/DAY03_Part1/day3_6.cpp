#include<iostream>
using namespace std;

class Demo
{
    int num1;
    int num2;
    public:

    Demo() // user defined default constructor / parameterless constructor
    {
        cout<<" Inside Parameterless constructor :"<<this<<endl;
        this->num1=0;
        this->num2=0;
    }
    Demo(int num1,int num2) // paramatrized constructor
    {
        cout<<"inside paramatrized constructor "<<this<<endl;
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

    //deallocate the memory of the object
    // Destructor 
    // special member function of class
    ~Demo()
    {
        cout<<"inside desctrutor "<<this<<endl;
    }

};

int main(void)
{
    Demo d1; 
    d1.disp();
    Demo d2(35,20);
    d2.disp();

    return 0;
}


// by default destrcutor calling sequence is completely opposite to constructr calling sequence

