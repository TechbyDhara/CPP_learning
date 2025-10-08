#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("myf2.txt",ios::in);
	char ch;
	cout<<"\nposition of get : "<<fin.tellg();
	cout<<"\nposition of put: "<<fin.tellp();
	fin.seekg(3);
	fin.get(ch);
	cout<<"\ncurrent char : "<<ch; //f-5
	char s[25];
	fin.getline(s,9);
	cout<<endl<<s;
	fin