#include <iostream>
#include <cstring>
using namespace std;
class demo{
	
	public:
		int x;
		void sum(int a,int b)
		{
			cout<<"\nSum is: "<<a+b;
		}
		void disp()
		{
			cout<<"\nA: "<<x;
		}
		
};
int main()
{
	int demo::*p=&demo::x;
	void (demo::*pt)(int,int)= &demo::sum;
	void (demo::*ptr)()= &demo::disp;
	demo d;
	d.*p=34;
	(d.*pt)(34,54);
	(d.*ptr)();
}