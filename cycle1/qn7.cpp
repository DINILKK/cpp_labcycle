#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class matrix
{
    int row,column;
    int **ptr;
    
    public:
    
    matrix matrix_multi(matrix);
    matrix matrix_transpose();
    matrix matrix_add(matrix);
    void matrix_trace();
    
    void display()
    {
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<column;j++)
            {
                cout<<"matrix ["<<i+1<<"]["<<j+1<<"] :"<<ptr[i][j]<<endl;
            }
        }
    }
    
    matrix()
    {
        
    }
    
    matrix(int a,int b)
    {
        row=a;
        column=b;
        
        ptr=new  int*[row];
        
        for (int i=0;i<row;i++)
        {
            ptr[i]=new int[column];
        }
    }
    
    void input()
    {
        
         int value;
        
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<column;j++)
            {
                cout<<"enter row ["<<i+1<<"] and "<<" column ["<<j+1<<"] elements : ";
                cin>>value;
                ptr[i][j]=value;            
                
            }
        }
    }
    
};

matrix matrix::matrix_add(matrix b)
{
    matrix temp(2,2);
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            temp.ptr[i][j]=b.ptr[i][j]+ptr[i][j];
        }
    }
    cout<<"The resuting matrix after adding teo matrix "<<endl;
    return temp;
}

matrix matrix::matrix_transpose()
{
    matrix temp(column,row);
    for (int i=0;i<column;i++)
    {
        for (int j=0;j<row;j++)
        {
            temp.ptr[i][j]=ptr[j][i];
            
        }
    }
    cout<<"...the transpose of the given maatrix is created ..."<<endl;
    return temp;
}

void matrix::matrix_trace()
{
    int sum=0;
    sum=sum+ptr[0][0]+ptr[1][1];
    cout<<"the sum of the diagonals "<<sum<<endl;
}

matrix matrix::matrix_multi(matrix b)
{
    matrix temp(row,b.column);
    for (int i= 0; i<row;i++) {
        for (int j=0;j<b.column;j++) {
            temp.ptr[i][j] = 0;
  
            for (int k = 0; k < b.row; k++) {
                temp.ptr[i][j] += ptr[i][k] * b.ptr[k][j];
            }
  
            cout<<temp.ptr[i][j];
        }
  
        cout<<endl;;
    }
    return temp;
}


int main()
{
    matrix m2;
    cout<<"number of rows :";
    int rows;
    cin>>rows;
    cout<<"number of columns :";
    int columns;
    cin>>columns;
    cout<<"***creating a "<<rows<<"X"<<columns<<" matrix1***"<<endl;
    matrix m1(rows,columns);
    m1.input();
    
    string user;
    cout<<"do you want to go for matrix operations ? (y/n)";
    cin>>user;
    while (user=="y")
    {
        cout<<"...select a matrix operaion from the following..."<<endl;
        cout<<"enter 1 for addition : "<<endl;
        cout<<"enter 2 for find the trace of a matrix : "<<endl;
        cout<<"enter 3 for transpose of a matrix : "<<endl;
        cout<<"enter 4 for multiplication : "<<endl;
    
        int input;
        cin>>input;
    
        if (input==1)
        {
            matrix m2(3,2);
            
            m2.input();
            cout<<"..adding the two matices.."<<endl;
            matrix m3(3,2);
            m3=m1.matrix_add(m2);
            m3.display();
        }
    
        else if(input==2)
        {
            cout<<"...finding the trace of a matrix..."<<endl;
            if (rows==columns)
            {
                m1.matrix_trace();
            }
            else
            {
                cout<<"error trace only exist for square matrices!";
            }
        }
        else if (input==3)
        {
            cout<<"...finding the transpose of tthe matrix1..."<<endl;
            matrix m4(columns,rows);
            m4=m1.matrix_transpose();
            m4.display();
        }
        else if(input==4)
        {
            cout<<"creating matrix2"<<endl;
            cout<<"number of rows :(make sure its same as the matrix1's column )";
            int r,c;
            cin>>r;
            cout<<"number of columns :";
            cin>>c;
            cout<<endl;
            cout<<"...doing mutlplication of two matrices..."<<endl;
            matrix matrix2(r,c);
            matrix2.input();
            matrix m6(rows,c);
            m6=m1.matrix_multi(matrix2);
            m6.display();
        }
        else
        {
            cout<<"erroe make sure you the correct option!!!";
        }
    
        cout<<"do ypu want to continue ? (y/n)";
        cin>>user;
    }
    
    cout<<"program teriminated";
return 0;
    
   
}