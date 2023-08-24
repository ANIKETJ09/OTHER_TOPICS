#include<iostream>
using namespace std;

class Test
{
    int num1;
    int num2;
    public:
    void accept();
    void disp();
};
// If we wish to define member functions outside the class scope
// We use scope resolution operator

//returntype Classname :: functionname()
//{
     //function body
//}
void Test::accept()
{
    cout<<"Enter Num1 :";
    cin>>num1;
    cout<<"Enter Num2 :";
    cin>>num2;
}

void Test::disp()
{
    cout<<" Num1 : "<<num1<<" Num2 : "<<num2;
}
int main(void)
{
    Test t1;
    t1.accept();
    t1.disp();
    return 0;
}



