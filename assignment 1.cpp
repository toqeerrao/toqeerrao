#include<iostream>
using namespace std;
class Shape
{
    public:
    int width;
    int height;  
};

class Rectangle:public Shape
{
    public:
    int getArea()
     {
        return(width*height);
     }
};

int main(void)
{
    int a;
	int b;
	
	cout<<"Enter 1st Num = "<<endl;
	cin>>a;
	cout<<"Enter 2nd Num = "<<endl;
	cin>>b;
    Rectangle Rect;

    Rect.width = a;
    Rect.height = b;

    cout<<"Total Area = "<<Rect.getArea()<<endl;

    return 0;
}