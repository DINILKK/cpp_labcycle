#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class students
{
    string name;
    int roll_no;
    int mark_subject[3];
  
    
    public:
    void input()
    {
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter roll number : ";
        cin>>roll_no;
        
        for (int i=0;i<3;i++)
        {
            cout<<"enter mark of subject"<<i+1<<" out of (100)";
            cin>>mark_subject[i];
        }
    }
    
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"roll no : "<<roll_no<<endl;
        for (int i=0;i<3;i++)
        {
            cout<<"subject "<<i+1<<" :" <<mark_subject[i]<<" ";
            cout<<endl;
        }
        
    }
    
    void calc_grade()
    {
        int total=mark_subject[0]+mark_subject[1]+mark_subject[2];
        if (total>275)
        {
            cout<<"you are awarded A+";
        }
        else if (total<275 and total>250)
        {
            cout<<"you are awarded A";
        }
        else if (total>225 and total<250)
        {
            cout<<"you are awarded B+";
        }
        else if (total>200 and total<225)
        {
            cout<<"you are awarded B ";
        }
        else
        {
            cout<<"F .. work harder !";
        }
    }
    
};

int main()
{
    students s1;
    s1.input();
    s1.display();
    s1.calc_grade();
    
}