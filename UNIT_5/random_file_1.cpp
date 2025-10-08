#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("myf2.txt",ios::in);
	char ch;
//	if(!fin.is_open())
//	{
//		cerr<<"\nfile can not be opened.!!!!";
//		return 1;
//	}
//	else{
//		cout<<"\nsuccessfully opened------------->";
//	}
	cout<<"\nposition of get : "<<fin.tellg();
	cout<<"\nposition of put: "<<fin.tellp();
	fin.seekg(3);
	cout<<"\nposition of get: "<<fin.tellg();
	fin.get(ch);
	cout<<"\ncurrent char : "<<ch;
}
