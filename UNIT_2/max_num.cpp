#include <iostream>
using namespace std;
class maxnum{
	int x,y;
	public:
	void getdata(int n,int m)
	{
		x=n;
		y=m;
		cout<<"X: "<<x;
		cout<<"\nY: "<<y;
	}
	void max()
	{
		if(x>y)
		{
			cout<<"x is maximum: "<<x;
		}
		else{
			cout<<"\n Y is maximum: "<<y;
		}
	}
	void add()
	{
		cout<<"\n Addition : "<<x+y;
	 } 
};
int main()
{
	maxnum p1,p2;
	int n,m;
	cout<<"Enter two numbers: ";
	cin>>n>>m;
	p1.getdata(n,m);
	p1.add();
	p1.max();
	return 0;	
}