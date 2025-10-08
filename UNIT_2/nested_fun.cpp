#include <iostream>
using namespace std;
class arith{
	    int a,b; 
		void add()
		{
			cout<<"\n Addition: "<<a+b;
		}
		void sub()
		{
			add();
			cout<<"\n Subtraction: "<<a-b;
		}
		void mul()
		{
			sub();
			cout<<"\n Multiplication: "<<a*b;
		}
		void div()
		{
			mul();
			cout<<"\n Division: "<<a/b;
		}
		public:
		void getdata()
		{
			cout<<"Enter number No1: ";
			cin>>a;
			cout<<"Enter number No2: ";
			cin>>b;
		}
		void display()
		{
			div();
		}
};
int main()
{
	arith a;
	a.getdata();
	a.display();
}