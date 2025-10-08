#include <iostream>
using namespace std;
class demo{
	 int *p;
	public:
		demo()
		{
		   p=new int;  
		   *p=10;
		}
		void disp()
		{
			cout<<*p<<endl;
		}
};
int main()
{
	demo d;
	d.disp();
}


