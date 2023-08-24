#include<iostream>
using namespace std;

// CLASS DATA MEMBERS ARE BY DEFAULT PRIVATE
//STRUCTURE DATA MEMBERS ARE BY DEFAULT PUBLIC

// Private Data members can not be accessed outside the class
// Private data members can be accessed only through member functions of the class

class Employee
{
    private: // DATA HIDING (Security)
    int id;
    int salary;
    public:
    void accept()
    {
        cout<<"Enter ID :";
        cin>>id;
        cout<<"Enter Salary :";
        cin>>salary;
    }
    void disp()
    {
        cout<<"ID : "<<id<<" Salary :"<<salary<<endl;
    }
};



int main(void)
{
    Employee e1;
    Employee e2,e3;

    e1.accept(); //accept() is called upon e1 object
    e2.accept(); 
    e3.accept();
    e1.disp();  //disp() is called upon e1 object 
    e2.disp();
    e3.disp();
    //e3.salary=e1.salary; // error: 'int Employee::salary' is private within this context
   // cout<<"\n Store E1 salary into E2 salary \n ";
    //e3.disp();

    return 0;
}