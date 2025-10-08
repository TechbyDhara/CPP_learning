#include <iostream>
using namespace std;
class demo{
	static int count;
	public:
		void getdata()
		{
			count++;
		}
		void setdata()
		{
			cout<<"\nNO of obj: "<<count;
		}
};
int demo::count;
int main()
{
	demo d1,d2,d3;
	d1.getdata();
	d1.setdata();
	d2.getdata();
	d2.setdata();
	d3.getdata();
	d3.setdata();
	
}