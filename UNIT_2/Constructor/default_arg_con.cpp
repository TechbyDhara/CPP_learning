#include <iostream>
using namespace std;
class demo{
	int a,b;
	public:
	demo(int x=0,int y=0)
	{
		a=x;
		b=y;
		cout<<"\n\nA: "<<a;
		cout<<"\nB: "<<b;
	}
};
int main()
{
	demo p1,p2(5),p3(12,34);
	return 0;
	
	
}