#include <iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		
		demo(int a,int b):a(a),b(b){}
		
		void disp()
		{
			cout<<"\n\nA: "<<a;
			cout<<"\nB: "<<b;
		}
		friend void operator++(demo &d,int);
};
void operator++(demo &d,int){
			d.a=d.a+1;
			d.b=d.b+2;
		}
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
