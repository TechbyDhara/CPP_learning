#include <iostream>
using namespace std;
class demo{
	char *p;
	public:
		demo()
		{
		   p=new char[6];  
		   p="hello";
		}
		void disp()
		{
			cout<<p<<endl;
		}
};
int main()
{
	demo d;
	d.disp();
}


