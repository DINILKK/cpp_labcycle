#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class complex
{
    int real;
    float imaginary;
    
    public:
    complex()
    {
        real=0;
        imaginary=0;
    }
    
    complex(int a)
    {
        real=a;
        imaginary=a;
    }
    complex(int a,float b)
    {
        real=a;
        imaginary=b;
    }
    
    complex addition(complex a,complex b)
    {
        //complex temp;
        real=a.real+b.real;
        imaginary=a.imaginary+b.imaginary;
        //return temp;
    }
    
    void diplay()
    {
        cout<<" real : "<<real<<endl;
        cout<<"imaginary : "<<imaginary<<endl;
    }
    
};


int main()
{
    complex t1(1,2.9);
    complex t2(2,2.0);
    complex t3;
    t3.addition(t1,t2);
    t3.diplay();
    return 0;
}