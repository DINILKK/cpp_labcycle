

#include<iostream>
using namespace std;

class vectors
{
    private:
            int i,j,k;
            int static count;
    public:
            friend istream& operator >>(istream &v,vectors &a);
            friend ostream& operator <<(ostream &o,vectors &a);
            friend vectors operator *(const vectors &a,const vectors &b);
};

int vectors::count=1;

istream& operator >>(istream &v,vectors &a)
{
    cout<<"vector "<<vectors::count<<endl;
    cout<<"i component = ";
    v>>a.i;
    cout<<"j component = ";
    v>>a.j;
    cout<<"k component = ";
    v>>a.k;
    vectors::count++;
    return v;
}

ostream& operator <<(ostream &o,vectors &a)
{
    if(a.j<0 && a.k<0)
    {
        o<<a.i<<"i"<<a.j<<"j"<<a.k<<"k \n";
    }
    else if(a.j <0 && a.k>0)
    {
        o<<a.i<<"i"<<a.j<<"j+"<<a.k<<"k \n";
    }
    else if(a.k<0 && a.j>0){
        o<<a.i<<"i+"<<a.j<<"j"<<a.k<<"k \n";
    }
    else
    {
        o<<a.i<<"i + "<<a.j<<"j + "<<a.k<<"k \n";
    }
    return o;
}

vectors operator *(const vectors &a,const vectors &b)
{
    vectors temp;
    temp.i = a.i*b.i;
    temp.j = a.j*b.j;
    temp.k = a.k*b.k;
    return temp;
}

int main()
{
    vectors v1,v2,v3;
    cin>>v1;
    cin>>v2;
    cout<<"Given vectors are"<<endl;
    cout<<v1;
    cout<<v2;
    cout<<"Product of the vectors :"<<endl;
    c=v1*v2;
    cout<<v3;
    return 0;
}










