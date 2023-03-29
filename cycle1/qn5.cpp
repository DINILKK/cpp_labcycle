#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class matrix
{
    int **ptr;
    int rows,cols;
    
    public:
    matrix(int a,int b)
    {
        rows=a;
        cols=b;
        ptr=new int*[rows];
         for (int i=0;i<rows;i++)
         {
             ptr[i]=new int[cols];
         }
    }
    
    void input()
    {
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                cout<<"enter row "<<i+1<<" and "<<j+1<<" column elements : ";
                cin>>ptr[i][j];            }
        }
        
        
    }
    
    void display()
    {
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                cout<<ptr[i][j]<<endl;
            }
        }
    }
};

int main()
{
    matrix m1(3,3);
    m1.input();
    m1.display();
    return 0;
    
}
    
