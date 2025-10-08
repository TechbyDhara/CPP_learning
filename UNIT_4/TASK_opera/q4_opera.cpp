#include <iostream>
#include <cstring>
using namespace std;
class string{
	char *s;
	int len=0;
	public:
		string(char nm[])
		{
			len=strlen(nm);
			s=new char(len);
			strcpy(s,nm);
		}
		void disp()
		{
			cout<<"\n"<<s;
		}
		string operator +(string d2)
		{
			string s3;
			s3.len=strlen(s)+strlen(d2.s);
			s3=new char(s3.len);
			strcpy(s3.s,s);
			strcat(s3.s,s2.s);
			return s3;
		}
		
};
int main()
{
	string s1("dhara"),s2("kateshiya"),s3;
	s3=s1+s2;
	s1.disp();
	s2.disp();
	s3.disp();
}