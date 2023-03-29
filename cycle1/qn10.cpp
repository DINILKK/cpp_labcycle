#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class shopping 
{
    
    string name;
    int code,quantity;
    int price;
    
    public:
    void add();
    void display();
    friend void delte(shopping a[]);
    friend void total();
    friend void setvalue(shopping &a);
    int getprice()
    {
        return price;
    }
    int getquantity()
    {
        return quantity;
    }
    int getcode()
    {
        return code;
    }
        
};

int n;

void shopping::add()
{
    cout<<"enter the product's name : ";
        cin>>name;
        cout<<endl;
        
        cout<<"enter code : ";
        cin>>code;
        cout<<endl;
        
        cout<<"enter the quantity : ";
        cin>>quantity;
        cout<<endl;
        
        cout<<"enter the price : ";
        cin>>price;
        cout<<endl;
    
}

void shopping::display()
{
    cout<<" ...product's details ..."<<endl;
    cout<<"product's name : "<<name<<endl;
    cout<<"product's code : "<<code<<endl;
    cout<<"product's price : "<<price<<endl;
    cout<<"quatity : "<<quantity<<endl;
}

int t;

void total(shopping a[])
{
    
    for (int i=0;i<n;i++)
    {
        t=t+a[i].getprice()*a[i].getquantity();
    }
    
    cout<<"the total payable amount is : "<<t;
}

void delte(shopping a[])
{
    cout<<"enter the code of the product you want to remove : ";
    int tempcode;
    cin>>tempcode;
    
    for (int i=0;i<n;i++)
    {
        if (a[i].getcode()==tempcode)
        {
            setvalue(a[i]);
        }
    }
}

void setvalue(shopping &a)
{
    a.name="";
    a.code=0;
    a.quantity=0;
    a.price=0;
}

int main()
{
    cout<<"number of products : ";
    cin>>n;
    shopping customer[n];
    
    for (int i=0;i<n;i++)
    {
        customer[i].add();
    }
    
    cout<<"do you want to remove any products before billing ? y/n";
    string input;
    cin>>input;
    
    if (input=="y")
    {
        delte(customer);
    }
    
    total(customer);
    
return 0;
    
}