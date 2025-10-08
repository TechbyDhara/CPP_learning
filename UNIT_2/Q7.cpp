#include <iostream>
using namespace std;
class B;
class C;
class A{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		friend void add(A &a,B &b,C &c);
};
class B{
	int c,d;
	public:
		void setdata(int a,int b)
		{
			c=a;
	    	d=b;
		}
		friend void add(A &a,B &b,C &c);
};
class C{
	int e,f;
	public:
		void setdata(int a,int b)
		{
			e=a;
			f=b;
		}
		friend void add(A &a,B &b,C &c);
};
void add(A &a,B &b,C &c)
{
	cout<<"\nSum of First Numbers: "<<a.a+b.c+c.e;
	cout<<"\nSum of Second Numbers: "<<a.b+b.d+c.f;
}
int main()
{
	A a;
	B b;
	C c;
	int n1,n2,n3,n4,n5,n6;
	cout<<"Enter two number (A): ";
	cin>>n1>>n2;
	cout<<"Enter two number (B):";
	cin>>n3>>n4;
	cout<<"Enter two number (C):";
	cin>>n5>>n6;
	a.setdata(n1,n2);
	b.setdata(n3,n4);
	c.setdata(n5,n6);
	add(a,b,c);
     return 0;
}