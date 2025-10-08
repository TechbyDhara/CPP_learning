#include<iostream>
using namespace std;
class A{
	public:
		void disp()
		{
			cout<<"\n This is class A ";
		}
};
class B:public A{
	public:
		void disp1()
		{
			cout<<"\n This is class B ";
		}
};
class C:public A{
	public:
		void disp2()
		{
			cout<<"\n This is class C ";
		}
};
int main()
{
	B b1;
	C c1;
	b1.disp();
	b1.disp1();
	c1.disp();
	c1.disp2();
}