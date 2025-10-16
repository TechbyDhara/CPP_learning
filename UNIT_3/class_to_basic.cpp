#include <iostream>
using namespace std;
class time{
    int min,h;
	public:
		time(int h,int m):h(h),min(m){}
		operator int()
		{
			int dur = h*60+min;
			return dur;
		}	
};
int main()
{
	int dr;
	time t(1,20);
	dr=t;
	cout<<"\nTotal min: "<<dr;
}
