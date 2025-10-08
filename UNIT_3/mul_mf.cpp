#include <iostream>
using namespace std;
class mul{
	public:
		int a,b;
		mul(){}
		mul(int a,int b):a(a),b(b){}	
		mul operator *(mul &a2)
		{
			mul a3;
			a3.a= a*a2.a;
			a3.b= b*a2.b;
			return a3;
		}
		void disp()
		{
			cout<<"\nA: "<<a<<"\tB: "<<b;
		}		
};
int main()
{
	mul a1(3,4),a2(4,5),a3;
	a1.disp();
	a2.disp();
	a3=a1*a2;
	a3.disp();
}