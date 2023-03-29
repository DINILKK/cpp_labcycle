#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


class vector
{
    int i,j,k;
    int magnitude;
    
    public:
    
    void setvalue();
    void mag();
    
    //operators
    bool operator == (vector);
    bool operator != (vector);
    bool operator < (vector);
    bool operator > (vector);
    bool operator <= (vector);
    bool operator >= (vector);
    
};

void vector::setvalue()
{
    cout<<"i = ";
    cin>>i;
    
    cout<<"j = ";
    cin>>j;
    
    cout<<"k = ";
    cin>>k;
}

void vector::mag()
{
    magnitude=sqrt((i*i)+(j*j)+(k*k));
    
}

bool vector:: operator ==(vector a)
{
    if (magnitude==a.magnitude)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool vector:: operator != (vector a)
{
    if (magnitude!=a.magnitude)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vector :: operator < (vector a)
{
    if (magnitude<a.magnitude)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool vector :: operator > (vector a)
{
    if (magnitude>a.magnitude)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vector :: operator <= (vector a)
{
    if(magnitude<=a.magnitude)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vector :: operator >= (vector a)
{
    if (magnitude>=a.magnitude)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector v1,v2;
    v1.setvalue();
    v1.mag();
    v2.setvalue();
    v2.mag();
    
    if (v1==v2)
    {
        cout<<"they are the same ";
    }
return 0;
}
