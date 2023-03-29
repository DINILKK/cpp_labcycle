#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class TIME
{
    int hours,minutes,seconds;
    
    public:
    void input()
    {
        cout<<"enter hours : ";
        cin>>hours;
        cout<<"enter ,minutes : ";
        cin>>minutes;
        cout<<"enter seconds : ";
        cin>>seconds;
        
    }
    
    TIME add(TIME a,TIME b)
    {
        TIME temp;
        hours=a.hours+b.hours;
        minutes=a.minutes+b.minutes;
        seconds=a.seconds+b.seconds;
        return temp;
        
    }
    
    void display()
    {
        cout<<"hours : "<<hours<<endl;
        cout<<"minutes : "<<minutes<<endl;
        cout<<"seconds : "<<seconds<<endl;
    }
};


int main()
{
    TIME t1,t2,t3;
    t1.input();
    t2.input();
    t3.add(t1,t2);
    t1.display();
    t2.display();
    t3.display();
    
    return 0;
}