#include<iostream>
using namespace std;

class Test
{
    int n1;
    int n2;
    public:
    Test():n1(10),n2(20){} //constructor member intializer list 

    //Test()
    //{
      //  this->n1=10;
        //this->n2=20;
   // }
    void disp()
    {
        cout<<" N1 : "<<this->n1<<" N2 : "<<this->n2<<endl;
    }
    ~Test()
    {
    }
};

int main(void)
{
    Test tobj;
    tobj.disp();
    return 0;
}
