#include <iostream>
#include <cstring>
using namespace std;
class demo{
	int len=0;
	char *name;
	public:
		demo(){}
		demo(char nm[])
		{
			len=strlen(nm);
			name=new char(len);
			strcpy(name,nm);
		}
		demo operator +(demo d2)
		{
			len= strlen(name)+strlen(d2.name);
			demo d3= new char(len);
			strcpy(d3.name,name);
			strcat(d3.name,d2.name);
			return d3;
		}
		void disp()
		{
			cout<<"\nString: "<<name;
		}
};
int main()
{
	demo d1(" good"),d2(" morning"),d3;
	d3=d1+d2;
	d1.disp();
	d2.disp();
	d3.disp();	
}