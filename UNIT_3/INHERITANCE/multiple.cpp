#include<iostream>
using namespace std;
class A{
	public:
		void disp()
		{
			cout<<"\n This is class A ";
		}
};
class B{
	public:
		void disp1()
		{
			cout<<"\n This is class B ";
		}
};
class C:public A,public B{
	public:
		void disp2()
		{
			cout<<"\n This is class C ";
		}
};
int main()
{

	C c1;
	c1.disp();
	c1.disp1();
	c1.disp2();
}