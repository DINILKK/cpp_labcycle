#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class bank
{
    string cust_name;
    int acc_no;
    string acc_type;
    int balance;
    
    public:
    void newaccount()
    {
        cout<<"enter your name : ";
        cin>>cust_name;
        cout<<"enter your account type : ";
        cin>>acc_type;
        cout<<"amount you want to deposit : ";
        cin>>balance;
        int acc=0;
        for (int i=0;i<5;i++)
        {
            acc=acc+int(cust_name[i]);
            
        }
        acc_no=acc;
        cout<<"account number created ! ";
    }
    
    void withdraw()
    {	int temp;
	cout<<"enter the amount of money you want to withdraw : ";
	cin>>temp;

        if (balance-temp<500)
        {
            cout<<"error... you have to keep rs 500 as a minimum balance ! ";
        }
        else
        {
            cout<<"transaction successful !"<<endl;
            balance=balance-temp;
        }
    }
    
    void deposit(int a)
    {
        cout<<"successfully deposited ";
        balance=balance+a;
    }
    
    void balanceEnquiry()
    {
        cout<<balance;
    }
    
    void accountStatement()
    {
        cout<<"name : "<<cust_name<<endl;
        cout<<"account number : "<<acc_no<<endl;
        cout<<"account type : "<<acc_type<<endl;
        cout<<"balance : "<<balance<<endl;
        
    }
    
};


int main()
{
    bank c1;
    c1.newaccount();
    cout<<"do you want to withdraw money (y/n): ";
    string input;
    cin>>input;
    if (input=="y")
    {
        c1.withdraw();
    }
    else{
        cout<<"thanks for chooosing our bank...";
    }
    return 0;
}