#include <iostream>
using namespace std;
class sub{
	int a,b;
	public:
		
		sub(){}
		sub(int a,int b):a(a),b(b){}	
		
		void disp()
		{
			cout<<"\nA: "<<a<<"\tB: "<<b;
		}
		friend sub operator -(sub &a1,sub &a2);		
};
sub operator -(sub &a1,sub &a2)
		{
			sub a3;
			a3.a= a1.a-(a2.a);
			a3.b= a1.b-(a2.b);
			return a3;
		}

int main()
{
	sub a1(33,4),a2(4,512),a3;
	a1.disp();
	a2.disp();
	a3=a1-a2;
	a3.disp();
}