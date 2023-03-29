#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class alpha
{
    protected:
    int x;
    public:
    alpha(int a)
    {
        x=a;
    }
};
class beta
{
    protected:
    int y;
    public:
    beta(int a)
    {
        y=a;
    }
};

class gamma: public alpha, public beta
{
    protected:
    int z;
    public:
    gamma(int a,int b,int c):alpha(a),beta(b)
    {
        z=c;
    }
    void display()
    {
        cout<<"the value of alpha : "<<x<<endl;
        cout<<"the value of beta : "<<y<<endl;
        cout<<"the value of gamma : "<<z<<endl;
    }
};

int main()
{
    int a,b,c;
    cout<<"enter the value of alpha : "<<endl;
    cin>>a;
    cout<<"enter the value of beta : "<<endl;
    cin>>b;
    cout<<"enter the value of the gamma : "<<endl;
    cin>>c;
    gamma g1(a,b,c);
    g1.display();
    
}


