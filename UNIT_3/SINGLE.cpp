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
int main()
{
	B b1;
	b1.disp();
	b1.disp1();
}