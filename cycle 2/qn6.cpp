#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;


class student
{
    protected:
    int roll;
    
    public:
    void addroll()
    {
        cout<<"enter the roll number of the student : ";
        cin>>roll;
    }
    
};

class test : virtual public student
{
    protected:
    int sub[3];
    public:
    void addvalue()
    {
        for (int i=0;i<3;i++)
        {
            cout<<"enter the marks to sub"<<i+1<<"  (out of hundred) : ";
            cin>>sub[i];
            cout<<endl;
            
        }
        
    }
    
};

class sports :virtual public student
{
    protected:
    int sportscore;
    
    public:
    void addscore()
    {
        cout<<"enter your sports score (out of 50) : ";
        cin>>sportscore;
    }
    
};


class result :public test,public sports
{
    public:
    void finalscore()
    {
        int finalresult=sub[0]+sub[1]+sub[2]+sportscore;
        if (finalresult>250)
        {
            cout<<"well done your final score is "<<finalresult;
        }
        else
        {
            cout<<"failed.....try harder";
        }
        
        
    }
    
};

int main()
{
    result dinil;
    dinil.addroll();
    dinil.addscore();
    dinil.addvalue();
    dinil.finalscore();
    
}