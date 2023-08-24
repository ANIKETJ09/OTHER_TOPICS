#include<iostream>
using namespace std;

template<class T> // T : type parameter

void swap_num(T &o1,T &o2)
{
    T temp=o1;
    o1=o2;
    o2=temp;
}

int main(void)
{
    int n1=5,n2=4;
    float f1=5.5,f2=6.7;
    cout<<"Before swapping : N1 : "<<n1<<" N2 : "<<n2<<endl;
    swap_num<int>(n1,n2); // function template
    cout<<"After swapping : N1 : "<<n1<<" N2 : "<<n2<<endl;
    cout<<"Before swapping : f1 : "<<f1<<" f2 : "<<f2<<endl;
    swap_num<float>(f1,f2); // fucntion template
    cout<<"After swapping : f1 : "<<f1<<"f2 : "<<f2<<endl;
    return 0;
}
