#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class stringoperations
{
    string name;
    
    public:
    
    stringoperations()
    {
    }
    
    
    stringoperations (string a)
    {
        name=a;
    }
    
    void compare (stringoperations a);
    void concatenate(stringoperations);
    void stringlength();
    void display();
};

void stringoperations::compare(stringoperations a)
{
    if (name==a.name)
    {
        cout<<"both strings are the same!";
    }
    else
    {
        cout<<"both are not the same!";
    }
}

void stringoperations::concatenate(stringoperations a)
{
    string temp;
    temp=name+a.name;
    cout<<"the concenated string is "<<temp<<endl;
}

void stringoperations::stringlength()
{
   int len;
   len=name.length();
   cout<<"the length of the string is "<<len<<endl;
    
}

void stringoperations::display()
{
    cout<<"the string is "<<name;
    cout<<endl;
}

int main()
{   cout<<"enter your first string : ";
    string sample1;
    cin>>sample1;
    stringoperations str1(sample1);
    str1.display();
    str1.stringlength();
    
    cout<<"do ypu want to concatenate fistt string with another string ? (y/n)"<<endl;
    string input1;
    cin>>input1;
    if (input1=="y")
    {
        cout<<"enter a string : ";
        string sample2;
        cin>>sample2;
        cout<<endl;
        stringoperations str2(sample2);
        str1.concatenate(str2);
    }
    else
    {
    }
    cout<<"do ypu want to compare the first string with another string ? (y/n)";
    string input2;
    cin>>input2;
    if (input2=="y")
    {
        cout<<"enter the string you want to compare :";
        string sample3;
        cin>>sample3;
        stringoperations str3(sample3);
        
        cout<<"comparing both strings....";
        str1.compare(str3);
        
    }
    return 0;
    
}
