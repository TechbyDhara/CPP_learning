#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	fstream fin("myfile.txt",ios::in);
	if(!fin.is_open())
	{
		cerr<<"\nFile can not be open";
		return 1;
	}
	else{
		cout<<"\n\nFile successfully opened..!!!\n";
	}
	string s;
	bool hdata=false;
	while(getline(fin,s))
	{	
		hdata=true;
		cout<<s<<endl;
	}
	if(hdata=false)
	{
		cerr<<"\nFile have no data found...!!!!!";
		return 1;
	}
	return 0;
}