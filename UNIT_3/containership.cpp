#include <iostream>
using namespace std;
class A{
	public:
		void disp_a()
		{
			cout<<"\nFirst containership programmmm";
		  cout<<"\nThis is Class A";
		}
};
class B{
	public:
		void disp_b(){
		  cout<<"\nThis is Class B";
		}
};
class C{
	A a;
	B b;
	public:
		void disp(){
			a.disp_a();
			b.disp_b();
		  //cout<<"\nThis is Class C";
		}
};
int main()
{
	C c;
	c.disp();
}