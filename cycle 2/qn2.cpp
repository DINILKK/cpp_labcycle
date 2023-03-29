#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class complex
{
    int real,imaginary;
    
    public:
    friend complex operator + (complex,complex);
    friend complex operator * (complex,complex);
    
    void setvalue();
    void display();
    
};

void complex:: setvalue()
{
    cout<<"enter value for real : ";
    cin>>real;
    
    cout<<"enter value fr imaginary : ";
    cin>>imaginary;
    
}

void complex::display()
{
    cout<<"real : "<<real<<endl;
    cout<<"imaginary :"<<imaginary<<endl;
}


complex operator + (complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
    return temp;
}

complex operator * (complex a,complex b)
{
    complex temp;
    temp.real=a.real*b.real;
    temp.imaginary=a.imaginary*b.imaginary;
    return temp;
}

int main()
{
    complex c1,c2,c3,c4;
    c1.setvalue();
    
    c2.setvalue();
    
    c3=c1+c2;
    c3.display();
    
    c4=c3*c2;
    c4.display();
    
    
    
return 0;
    
}