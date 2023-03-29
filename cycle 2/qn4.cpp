#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class matrices
{
    int rows,columns;
    int **ptr;
    
    public:
    void input();
    matrices()
    {
    
    }
    
    matrices(int,int);
    matrices operator +(matrices);
    matrices operator *(matrices);
    void display();
    
};

matrices ::matrices(int a,int b)
{
    rows=a;
    columns=b;
    ptr=new int *[rows];
    
    for (int i=0;i<rows;i++)
    {
        ptr[i]=new int[columns];
    }
    

}

void matrices::input()

    {
        cout<<"creating a "<<rows<<"X"<<columns<<" matrix !"<<endl;
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<columns;j++)
            {
                cout<<"enter row ["<<i+1<<"] and "<<" column ["<<j+1<<"] elements : ";
                cin>>ptr[i][j];            
                
            }
        }
    }


matrices matrices::operator +(matrices a)

{
    {
        matrices temp(rows,columns);
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<columns;j++)
            {
                temp.ptr[i][j]=ptr[i][j]+a.ptr[i][j];
            }
        }
        cout<<"Adding two matrices ...."<<endl;
        return temp;
        
    }
}

matrices matrices::operator *(matrices b)
{
    matrices temp(rows,b.columns);
    for (int i= 0; i<rows;i++) {
        for (int j=0;j<b.columns;j++) {
            temp.ptr[i][j] = 0;
  
            for (int k=0;k<b.rows;k++) {
                temp.ptr[i][j]+=ptr[i][k]*b.ptr[k][j];
            }
  
            cout<<temp.ptr[i][j];
        }
  
        cout<<endl;
    }
    return temp;
}

void matrices::display()
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<columns;j++)
        {
            cout<<"matrix["<<i+1<<"]["<<j+1<<"] : "<<ptr[i][j]<<endl;
            
        }
    }
}

int main()
{
    cout<<"...matrices operations... "<<endl;
    cout<<"type 1 for matrix addition : and 2 for matrix multiplication"<<endl;
    int input;
    cin>>input;
    if (input==1)
    {
        int a,b;
        cout<<"number of rows : ";
        cin>>a;
        cout<<"number of columns : ";
        cin>>b;
        matrices matrix1(a,b);
        matrix1.input();
        matrices matrix2(a,b);
        matrix2.input();
    
        matrices matrix3;
        matrix3=matrix1+matrix2;
        matrix3.display();
    }
    else if(input==2)
    {
         int c,d;
        cout<<"number of rows : ";
        cin>>c;
        cout<<"number of columns : ";
        cin>>d;
        matrices matrix4(c,d);
        matrix4.input();
        int e;
        cout<<"enter number of columns for the second matrix :"<<endl;
        cin>>e;
        matrices matrix5(d,e);
        matrix5.input();
        
        matrices matrix6(c,e);
        matrix6=matrix4*matrix5;
        matrix6.display();
    }
    else
    {
        cout<<"error...try again";
    }
    
    
    
    
    
    return 0;
}