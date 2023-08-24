#include<iostream>
using namespace std;

class Test
{
    private:
    int num1;
    int num2;
    public:
    void set(int n1,int n2)
    {
        cout<<"Inside Set Function :"<<this<<endl;
        num1=n1;
        num2=n2;
    }
    void disp()
    {
        cout<<"inside disp function :"<<this<<endl;
        cout<<"Num1 : "<<num1<<" Num2 :"<<num2<<endl;
    }
};
int main(void)
{
    Test t1;
    cout<<"Address of T1 object : "<<&t1<<endl; // print address of t1 object
    t1.set(40,30); // set() is called upon t1 object
    // current object is t1 object
    // internally compiler stores current object address into a keyword called as "this"
    //"this" is a keyword/pointer which holds current object address
    t1.disp(); //disp() is called upon t1 object
    //current object t1
    //this : t1 object address

    Test t2;
    cout<<"T2 Object Address "<<&t2<<endl;
    t2.set(60,70);
    t2.disp();

    return 0;
}




