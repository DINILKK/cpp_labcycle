#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class msc 
{
    static int count;
    
    public:
    msc()
    {
        count++;
        
    }
    
    static int getcount()
    {
        return count;
    }
    
};
int msc:: count=0;

int main()
{
    msc s1,s2,s3,s4,s5,s6;
    cout<<msc::getcount();
    
}