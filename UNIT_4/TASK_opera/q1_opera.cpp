#include <iostream>
using namespace std;
class Distance
{
	int km,m;
	public:
		Distance (){		}
		Distance(int km,int m):km(km),m(m){}
		Distance operator +(Distance d2)
		{
			Distance d3;
			d3.km=km+d2.km;
			d3.m=m+d2.m;
			if(d3.m>1000)
			{
				d3.km=d3.km+d3.m/1000;
				d3.m=d3.m%1000;
			}
			return d3;
		}
		void disp()
		{
			cout<<"\nDistance : "<<km<<" km : "<<m<<" m";
		}
};
int main()
{
	Distance d1(45,800),d2(4,900),d3;
	d3=d1+d2;
	d1.disp();
	d2.disp();
	d3.disp();
}