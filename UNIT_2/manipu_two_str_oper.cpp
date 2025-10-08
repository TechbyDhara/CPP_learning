#include <iostream>
using namespace std;
class demo{
	int x=54545;
	public:
		void disp()
		{
			cout<<"\nX: "<<x;
		}
		friend void sum(demo &d); 
		
};
void sum(demo &d)
{
	d.x=45;
	d.disp();
}
int main()
{
	demo d;
	d.disp();
	sum(d);
}