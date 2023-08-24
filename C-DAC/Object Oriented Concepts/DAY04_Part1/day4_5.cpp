#include<iostream>
using namespace std;

class Point
{
    public:
    int x;
    int y;
    Point()
    {
        this->x=5;
        this->y=5;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    //p3 = p1+p2
    //p3= p1.operator+(p2)
    // p1 is current object , this keyword will hold p1 object address
    // as a argument p2
    // Point &temp=p2
    
    Point operator+(Point &temp)
    {
        Point pobj;
        pobj.x=this->x + temp.x;
        pobj.y=this->y+temp.y;
        return pobj;
    }
    void disp()
    {
        cout<<"X : "<<x<<" Y : "<<y<<endl;
    }
};

//p3=p1+p2;
//p3= p1.operator+(p2) 





int main(void)
{
    Point p1;
    Point p2;
    Point p3;
    p3=p1+p2;
    p1.disp();
    p2.disp();
     p3.disp();
    return 0;
}