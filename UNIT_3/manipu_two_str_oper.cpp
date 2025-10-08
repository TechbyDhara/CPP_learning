#include <iostream>
#include <cstring>
using namespace std;
class demo{
	char *s;
	int len;
	public:
		demo()
		{ 
		   s=NULL;
		   len=0;	
		}
		demo(char *s1)
		{
			len=strlen(s1);
			s=new char[len];
			strcpy(s,s1);
		}
		demo operator +(demo d2)
		{
			demo s3;
			s3.len= strlen(s)+strlen(d2.s);
			s3.s=new char[s3.len];
			strcpy(s3.s,s);
			strcat(s3.s,d2.s);
			return s3;
		}
	    void disp()
	    {
	    	cout<<"\n"<<s;
		}
};
int main()
{
	demo d1("Dhara"),d2("Kateshiya"),d3;
	d3=d1+d2; //d3=d1.+(d2)
	d1.disp();
	d2.disp();
	d3.disp();
}