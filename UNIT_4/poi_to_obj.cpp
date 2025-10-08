#include <iostream>
using namespace std;
class A{
	public:
		void disp()
		{
			cout<<"class A";
		}
};
class B:public A{
	public:
		void disp()
		{
			cout<<"\nclass B";
		}
};
int main()
{
	A a1;
	B b1,*p;
	p=&a1;
	p=&b1;
	p->disp();
}