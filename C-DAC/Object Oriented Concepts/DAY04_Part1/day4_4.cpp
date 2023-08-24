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
    void disp()
    {
        cout<<"X : "<<x<<" Y : "<<y<<endl;
    }
};

// p3=p1+p2; 

Point operator+(Point &pt1,Point &pt2)
{
    Point pt3;
    pt3.x=pt1.x+pt2.x;
    pt3.y=pt1.y+pt2.y;
    return pt3;
}







int main(void)
{
    Point p1; // 5    5 
    Point p2(50,25); //  50     25 
    Point p3;
    p3=p1+p2;
    p1.disp();
    p2.disp();
    p3.disp();
    return 0;
}


