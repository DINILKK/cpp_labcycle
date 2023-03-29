#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class base1
{
    protected:
    int adm_no;
    public:
    void input()
    {
        cout<<"enter the admission number : ";
        cin>>adm_no;
    }
    
};

class base2
{
    protected:
    string name;
    public:
    void input()
    {
        cout<<"enter the name : ";
        cin>>name;
    }
};

class acadamics:public base1,public base2
{
    protected:
    int sub[3];
    public:
    void input()
    {
    for (int i=0;i<3;i++)
    {
        cout<<"enter marks  subject"<<i+1<<" : "<<endl;
        cin>>sub[i];
    }
    }
};

class sports:public acadamics
{
    protected:
    int sportscore;
    public:
    void input()
    {
        cout<<"enter the score of sports : ";
        cin>>sportscore;
    }
};

class result:public sports
{
    protected:
    int overall;
    public:
    void total()
    {
        overall=sportscore+sub[0]+sub[1]+sub[2];
    }
    void display()
    {
        int total=sub[0]+sub[1]+sub[2];
        cout<<"Admission number : "<<adm_no<<endl;
        cout<<"Nmae : "<<name<<endl;
        cout<<"academics score : "<<total<<endl;
        cout<<"Sportscore : "<<sportscore<<endl;
        cout<<"OVERALL TOTAL : "<<overall<<endl;
    }
};

int main()
{
    result student1;
    student1.base1::input();
    student1.base2::input();
    student1.acadamics::input();
    student1.sports::input();
    student1.total();
    student1.display();
    return 0;
}





