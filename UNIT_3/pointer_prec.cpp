#include <iostream>
using namespace std;
class demo{
	
	public:
		int x;
		//demo(int x):x(x){}
		void disp(int x)
		{
			cout<<"\nx: "<<x;
		}
};
int main()
{
	int demo::*p = &demo::x;
	void (demo::*ptr)(int)= &demo::disp;
	
	demo d1;
	d1.*p= 10;
	cout<<"x: "<<d1.*p;
	(d1.*ptr)(300);
	return 0;
}