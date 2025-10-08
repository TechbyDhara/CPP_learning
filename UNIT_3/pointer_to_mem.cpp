#include <iostream>
using namespace std;
class demo{
	 public:
	 	int x;
	 	void disp(int x)
	 	{
	 		cout<<"\nx : "<<x;
		 }
  	
};
int main()
{
	int demo::*p= &demo::x;
	void (demo::*ptr)(int)=&demo::disp;
	demo d;
	d.*p= 100;
	cout<<"\nXX: "<<d.*p;
	(d.*ptr)(300);
	return 0;
}