#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	string s;
	fin.open("myfile.txt");
	while(getline(fin,s))
	{
		cout<<"\n"<<s;
	}
	fin.close();
}