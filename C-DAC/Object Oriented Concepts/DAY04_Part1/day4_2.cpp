#include<iostream>
using namespace std;

int main(void)
{
    int n1,n2;
    int res;
    cout<<"Enter First Number :";
    cin>>n1;
    cout<<"Enter Second Number :";
    cin>>n2;
    try
    {
        if(n2==0)
            //throw 1; // throw is a keyword which throws an object
            //throw 1.4f;
            throw 5.2;
        else
        {
            res=n1/n2;
            cout<<"Result : "<<res;
        }

    }//end of try block
    catch(int a)
    {
        cout<<"you have enetred second number as zero division is not possible ";
    }
    catch(float f)
    {
        cout<<"inside float block.. second number cant be zero";
    }
    catch(...) 
    {
        cout<<"Inside generic catch block";
    }

    return 0;
}

//if we are adding generic catch block in a program
//it is compulsory to write generic catch block after all other catch blocks

// we can have multiple try catch blocks in single program
// every try block must have atleast one catch block




