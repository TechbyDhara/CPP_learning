#include <iostream>
using namespace std;
class A{
	public:
		void disp()00
		
		
		
		{
			cout<<"\n Class A........";
		}
};
class B:public A{
	public:
		void disp()
		{
			cout<<"\n Class B........";
		}
};
class C:public A{
	public:
		void disp()
		{
			cout<<"\n Class C........";
		}
};
int main()
{
	A a,*ptr;
	B b;
	C c;
	ptr=&a;
	ptr=&b;
	ptr=&c;
	a.disp();
	b.disp();
	c.disp();
}




















