#include<iostream>
using namespace std;
int main()
{
	double num1,num2, num3;
	
	cout<<"Enter three numbers to find Avg"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	
	double Sum =num1 + num2 + num3;
	
	double res = Sum /3;
	cout<<"Result is ="<<res<<endl;
	 return 0;
}