#include <iostream>
using namespace std;
class frnd{
	int x,y;
	public:
		void setdata(int a,int b)
		{
			x=a;
			y=b;
		}
		friend void avg(frnd &f);
};
void avg(frnd &f)
{
	cout<<"\nX: "<<f.x<<"\nY: "<<f.y;
	cout<<"\nAvg: "<<(f.x+f.y)/2.0;
}
int main()
{
	frnd f;
	int n1,n2;
	cout<<"Enter two number: ";
	cin>>n1>>n2;
	f.setdata(n1,n2);
	avg(f);
}