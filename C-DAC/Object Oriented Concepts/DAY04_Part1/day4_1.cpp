#include<iostream>
using namespace std;

//1. Request for allocating dynamic memory
// 2. utilize that memory
// 3 . release the memory

int main(void)
{
    int n,i;
    cout<<"Enter Number of elements you wish insert in an array ";
    cin>>n;
    //1. Request for allocating dynamic memory
    int *ptr= new int[n];

    // 2. utilize that memory
    cout<<"\n Enter Array Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    cout<<"\n You have enetered following elements :";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<ptr[i];
    }
   
    // 3 . release the memory
    delete[] ptr;
    ptr=NULL;
    
    return 0;
}