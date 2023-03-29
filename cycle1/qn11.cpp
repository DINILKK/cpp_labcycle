#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class first;
class second 
{
    int y;
    
    public:
    void setValue()
    {
        cout<<"enter the y value : ";
        cin>>y;
    }
    
    void display ()
    {
        cout<<"the y bvalue is : "<<y;
    }
    
    friend void swap(first &a,second &b);
};

class first
{
    int x;
    
    public:
    void setValue()
    {
        cout<<"enter value for x : ";
        cin>x;>
    }
    
    void display
    
    friend void swap(first &a,second &b);
};

 swap(first &a,second &b)
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
}

int main()
{
    
}