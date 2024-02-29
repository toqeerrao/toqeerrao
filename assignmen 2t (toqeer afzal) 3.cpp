#include <iostream>
using namespace std;
class M
{
	protected:
		int a;
		public:
			M(int m)
			{
				a = m;
			}
};
class N : public M
{
	private:
		int b;
		public:
			N(int m,int n) : M(m)
			{
				b = n;
			}
			void print_data()
			{
				cout<<"Data in Data Member of M is = "<<a<<endl;
		        cout<<"Data in Data Member of N is = "<<b<<endl;
			}
};

int main()
{
	N obj(1,2);
	obj.print_data();
	
}
