#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("myf.txt",ios::in);
//	if(!fin.is_open())
//	{
//		cerr<<"\n File can not be open!!!";
//		return 1;
//	}	
//	else
//	{	
//		cout<<"file successfully open";
//	}
	string s;
		if(!getline(fin,s))
		{
			cerr<<"data not found...!!!";
			return 1;
		}
		else
		{
//		char c;
			while(getline(fin,s))
			{
				cout<<s;
				cout<<"\ndddddddddddd";
			}
		}

return 0;
}