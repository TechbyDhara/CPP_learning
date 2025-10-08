#include <iostream>
using namespace std;
class sub{
	public:
		int a,b;
		sub(){}
		sub(int a,int b):a(a),b(b){}	
		sub operator -(sub &a2)
		{
			sub a3;
			a3.a= a-a2.a;
			a3.b= b-a2.b;
			return a3;
		}
		void disp()
		{
			cout<<"\nA: "<<a<<"\tB: "<<b;
		}		
};
int main()
{
	sub a1(3,4),a2(4,5),a3;
	a1.disp();
	a2.disp();
	a3=a1-a2;
	a3.disp();
}