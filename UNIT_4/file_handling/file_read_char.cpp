#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	char s[100];
	fin.open("myfile.txt");
	while(fin.getline(s,100))
	{
		cout<<"\n"<<s;
	}
	fin.close();
}