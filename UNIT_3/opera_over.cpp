#include <iostream>
using namespace std;
class demo
{
	public:
		int a,b;
		demo(int a,int b):a(a),b(b){}
		void operator++(int){
			a=a+1;
			b=b+2;
		}
		void disp()
		{
			cout<<"\n\nA: "<<a;
			cout<<"\nB: "<<b;
		}
};
int main()
{
	int x,y;
	cout<<"Enter two values: ";
	cin>>x>>y;
	demo d(x,y);
	d.disp();
	d++;
	d.disp();
	return 0;
}
