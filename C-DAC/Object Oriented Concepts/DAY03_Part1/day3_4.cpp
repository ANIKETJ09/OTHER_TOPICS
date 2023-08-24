#include<iostream>
using namespace std;

class Test
{
    private:
    int num1;
    int num2;
    public:
    //void set(int n1,int n2)
   // {
     //   cout<<"Inside Set Function :"<<this<<endl;
       // num1=n1; 
        //num2=n2;
    //}
    void set(int num1,int num2)
    {
        this->num1=num1; // store num1 value passed by user inside current object num1

        this->num2=num2;
        //sotre num2 value passed by user , inside current object num2 value
    }


    void disp()
    {
        
        cout<<"Num1 : "<<this->num1<<" Num2 :"<<this->num2<<endl;
    }
};

int main(void)
{
    Test t1;
    Test t2;
    t1.set(50,30);
    t2.set(60,40);
    t1.disp();
    t2.disp();
    return 0;
}


