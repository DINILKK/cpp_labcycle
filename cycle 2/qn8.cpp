#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class shape
{
    public:
    virtual void getdata(){}
    virtual void area(){}
};
const float pi=3.14;

class Circle:public shape
{
    int radius;
    
    public:
    void getdata()
    {
        cout<<"radius of a circle : ";
        cin>>radius;
    }
    
    void area()
    {
        
        cout<<"the area of the circle is "<<pi*(radius*radius)<<endl;
        
    }
};

class Square :public shape
{
    int side;
    public:
    void getdata()
    {
        cout<<"enter a side of a square : ";
        cin>>side;
    }
    void area()
    {
        cout<<"area of the square is "<<side*side<<endl;
    }
};

class Rectangle :public shape
{
    int len,bre;
    public:
    void getdata()
    {
        cout<<"length of a rectangle : ";
        cin>>len;
        cout<<"breadth of a rectangle : ";
        cin>>bre;
    }
    void area()
    {
        cout<<"the area of the rectangle is "<<len*bre;
    }
};

class Ellipse:public shape
{
    int majorlen,minorlen;
    public:
    void getdata()
    {
        cout<<"entr the length of semi major : ";
        cin>>majorlen;
        cout<<"enter the lenfth of semi minor : ";
        cin>>minorlen;
    }
    
    void area()
    {
        float pi=3.14;
        cout<<"the aea of the ellipse is "<<pi*majorlen*minorlen;
    }
};

int main()
{
    shape *circle=new Circle();
    shape *square=new Square();
    shape *rectangle=new Rectangle();
    shape *ellipse=new Ellipse();
    
    circle->getdata();
    circle->area();
    
    rectangle->getdata();
    rectangle->area();
    
    
    return 0;
}