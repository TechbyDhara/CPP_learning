#include <iostream>
#include <cstring>
using namespace std;
class demo{
	char  *s;
	int len;
	public:
		demo()
		{ 
		   s=NULL;
		   len=0;	
		}
		demo(char str[])
		{
			len=strlen(str);
			s = new char(len);
			strcpy(s,str);
		}
		void disp()
		{
			cout<<"\nString: "<<s;
		}
		demo operator +(demo s2)
		{
			   demo s3;
			   s3.len=strlen(s)+strlen(s2.s);
			   s3= new char(s3.len);
			   strcpy(s3.s,s);
			   strcat(s3.s,s2.s);
			   return s3;
		}
		
};
int main()
{
	demo d3,d1("Dhara "),d2("katesiya");
	d3=d1+d2;
	
	d3.disp();
	
}