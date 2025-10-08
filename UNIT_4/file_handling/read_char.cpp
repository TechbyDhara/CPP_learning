#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	char s;
	fin.open("myfile.txt");
	while(fin.get(s))
	{
		cout<<s;
	}
	fin.close();
}