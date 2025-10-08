#include <iostream>
using namespace std;
class demo{
	int a;
	public:
		demo(){}
		demo(int a)
		{
		   this->a=a;	
		}
		demo max(demo &d2)
		{
			if(d2.a>a)
			{
				return d2;
			}
			else
			{
				return *this;
			}
		}
		void disp()
		{
			cout<<"\nA: "<<a;
		}
		
};
int main()
{
	demo d1(32),d2(112),d3;
	d3=d1.max(d2);
	d1.disp();
	d2.disp();
	d3.disp();
}