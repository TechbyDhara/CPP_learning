#include<iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("myf.txt",ios::in);
	if(!fin.is_open())
	{
		cerr<<"\n File can not be open!!!\n\n";
		return 1;
	}	
	else
	{	
		cout<<"\n\nfile successfully open\n";
	}
	char s;
		if(!fin.get(s))
		{
			cerr<<"\ndata not found...!!!\n";
			return 1;
		}
		else
		{
         	string s;
			while(getline(fin,s))
			{
				cout<<s<<"\n";
			}
		}

return 0;
}