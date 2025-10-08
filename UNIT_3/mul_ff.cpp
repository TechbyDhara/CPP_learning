#include <iostream>
using namespace std;
class mul{
	int a,b;
	public:
		
		mul(){}
		mul(int a,int b):a(a),b(b){}	
		
		void disp()
		{
			cout<<"\nA: "<<a<<"\tB: "<<b;
		}
		friend mul operator *(mul &a1,mul &a2);		
};
mul operator *(mul &a1,mul &a2)
		{
			mul a3;
			a3.a= a1.a*(a2.a);
			a3.b= a1.b*(a2.b);
			return a3;
		}

int main()
{
	mul a1(33,4),a2(4,512),a3;
	a1.disp();
	a2.disp();
	a3=a1*a2;
	a3.disp();
}