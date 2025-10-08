#include <iostream>
using namespace std;
class complex{
	int a,b;
	public:
		
		complex(){}
		complex(int a,int b):a(a),b(b){}	
		
		void disp()
		{
			cout<<"\nComplex Numbers: "<<a<<"+"<<b<<"i";
		}
	 complex operator +(complex &a2)
	 {
			complex a3;
			a3.a= a+(a2.a);
			a3.b= b+(a2.b);
			return a3;
		}
		complex operator *(complex &a2)
	 {
			complex a3;
			a3.a= a*(a2.a);
			a3.b= b*(a2.b);
			return a3;
		}	
};
		

int main()
{
	complex a1(3,4),a2(4,5),a3;
	a1.disp();
	a2.disp();
	a3=a1+a2;
	cout<<"\n\nAddition two complex No.----------->";
	a3.disp();
	cout<<"\n\nMultiplication two complex No.----------->";
	a3=a1*a2;
	a3.disp();
}