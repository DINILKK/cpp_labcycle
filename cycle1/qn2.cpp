#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

void area(int l, int b)
{
    int area;
    area = l*b;
    cout << "The area of the Rectangle is " << area;
}

void area(int side)
{
    int area;
    area = side*side;
    cout << "The area of the Square is " << area;
}

void area(float r)
{
    float area;
    area = 3.14*r*r;
    cout << "The area of the Circle is " << area;
}

void area(float height, float b1, float b2)
{
    float area;
    area = 0.5*(height*(b1+b2));
    cout << "The area of the Trapezium is " << area;
}

void area(int s1,int s2,int s3)
{
    float area;
    float s = (s1+s2+s3)/2;
    area = std::sqrt(s*(s-s1)*(s-s2)*(s - s3));
    cout << "The area of the Triangle is " << area;

}

int main()
{
    int input;
    cout<<"select the shape which ypu want to find the area "<<endl;
    cout<<"enter 1 for rectangle "<<endl;
    cout<<"enter 2 for circle"<<endl;
    cout<<"enter 3 for trapezium "<<endl;
    cout<<"enter 4 for triangle "<<endl;
    cout<<"enter 5 for square"<<endl;
    cin>>input;
    switch (input)
    {
    case 1:
        int length, breadth;
        cout << "Enter the Length & Breadth of Rectangle "<<endl;
        cin >> length >> breadth;
        area(length, breadth);
        break;
    case 2:
        float r;
        cout << "Enter the Radius of the Circle "<<endl;
        cin >> r;
        area(r);
        break;
    case 3:
        float height, base1, base2;
        cout << "Enter the Height and Bases of Trapezium "<<endl;
        cin >> height >> base1 >> base2;
        area(height, base1, base2);
        break;
    case 4:
        int s1,s2,s3;
        cout << "Enter the Sides of Triangle\n";
        cin>>s1>>s2>>s3;
        area(s1,s2,s3);
        break;
    case 5:
        int side;
        cout << "Enter the Side of the Square\n";
        cin >> side;
        area(side);
        break;
    }
    return 0;
}


    
    
    
    