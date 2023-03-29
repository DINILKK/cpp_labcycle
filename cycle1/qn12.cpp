#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class complex
{
  int real;
  float imaginary;
  
  public:
  void display()
  {
      cout<<real<<endl;
      cout<<imaginary<<endl;
  }
  complex()
  {
      
  }
  
  complex(int a,float b)
  {
      real=a;
      imaginary=b;
  }
  
  friend complex sum(complex a,complex b,complex c );
};

complex sum(complex a,complex b,complex c)
{
    a.real=b.real+c.real;
    a.imaginary=b.imaginary+c.imaginary;
    return a;
    
    
}


int main()
{
    complex t1(1,2.9);
    complex t2(2,2.0);
    complex t3;
    complex t4=sum(t3,t1,t2);
    t4.display();
    return 0;
}