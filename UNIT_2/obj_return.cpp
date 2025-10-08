#include <iostream>
using namespace std;

class demo{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter 2 numbers: ";
			cin>>x>>y;
		}
		demo add(demo d2)
		{
			demo temp;
			temp.x=x+d2.x;
			temp.y=y+d2.y;
			return temp;			
		}
		void display()
		{
			cout<<"ADD: "<<x<<" "<<y;
		}
};
int main()
{
	demo d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3=d2.add(d1);
	d3.display();
	return 0;
}