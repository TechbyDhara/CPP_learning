#include <iostream>
using namespace std;
class demo{
	int x,y,a;
	float b;
	public:
		demo(int x,int y,int a,float b):x(x),y(y),a(a),b(b){}
		void disp()
		{
			cout<<"\n A: "<<x<<endl<<" B: "<<y;
			cout<<"\n C: "<<a<<endl<<" D: "<<b;
		}
};
int main()
{
	demo d(4,8,5,7.77);
	d.disp();
}