#include <iostream>
using namespace std;
class x{
	
	public:
		int a;
		void disp(int b)
		{
			cout<<"\n B : "<<b<<endl;
		}
};
int main()
{
	int x::*p = &x::a; 
	void (x::*mfp)(int) = &x::disp;
	
	x e;
	e.*p=100;
	cout<<"\n A: "<<e.*p;
	(e.*mfp)(2000);
}


