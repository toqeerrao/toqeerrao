#include <iostream>
using namespace std;
class X
{
	protected:
		int a;
		public:
			void set_data()
			{
				a = 543;
			}
};
class Y
{
	protected:
		int b;
		public:
			void set_data1()
			{
				b = 676;
			}
};

class Z : public X,public Y
{
	int c;
	public:
			void set_data2()
			{
				set_data();
				set_data1();
				c = 946;
			}
	void Print_data()
	{
		cout<<"Data in Data Member of X is = "<<a<<endl;
		cout<<"Data in Data Member of Y is = "<<b<<endl;
		cout<<"Data in Data Member of Z is = "<<c<<endl;
	}
};
int main()
{
	Z obj;
	obj.set_data2();
	obj.Print_data();
	return 0;
}
