#include <iostream>
using namespace std;
class time{
    int min,h;
	public:
		time()
		{ min=h=0;
		}
		time(int dur)
		{
			h=dur/60;
			min=dur%60;
		}	
		void disp()
		{
			cout<<"\n Time= "<<h<<":"<<min;
		}
};
int main()
{
	int dr;
	cout<<"Enter duration: ";
	cin>>dr;
	time t;
	t=dr;
     t.disp();
}
