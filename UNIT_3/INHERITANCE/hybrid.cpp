#include<iostream>
using namespace std;
class A{
	public:
		void disp()
		{
			cout<<"\n This is class A ";
		}
};
class B:virtual public A{
	public:
		void disp1()
		{
			cout<<"\n This is class B ";
		}
};
class C:virtual public A{
	public:
		void disp2()
		{
			cout<<"\n This is class C ";
		}
};
class D:public B,public C{
	public:
		void disp3()
		{
			cout<<"\n This is class D ";
		}
};
int main()
{

	D d1;
	d1.disp();
	d1.disp1();
	d1.disp2();
	d1.disp3();
}