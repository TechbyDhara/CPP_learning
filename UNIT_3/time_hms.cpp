#include<iostream>
using namespace std;
class time1{
	int h,m,s;
	public:
		time1(){}
		time1(int h,int m,int s):h(h),m(m),s(s){}
		time1 operator +(time1 &t2){
			time1 t3;
			t3.h=h+t2.h;
			t3.m=m+t2.m;
			t3.s=s+t2.s;
			
			if(t3.s>=60)
			{
				t3.m+=t3.s/60;
				t3.s%=60;
			}
			if(t3.m>=60)
			{
				t3.h+=t3.m/60;
				t3.m=t3.m%60;
			}
			return t3;
		}
		void disp()
		{
			cout<<"\n\nhour: "<<h;
			cout<<"\nMin: "<<m;
			cout<<"\nSec: "<<s;
		}
};
int main()
{
	time1 t1(2,12,30),t2(1,540,43),t3;
	t3=t1+t2;
	t1.disp();
	t2.disp();
	t3.disp();
	return 0;
	
}