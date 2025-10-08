#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string s;
	fin.open("myfile.txt");
	fout.open("copymyfile.txt");
	while(getline(fin,s))
	{
		cout<<"\n"<<s;
		fout<<s;
	}
	fin.close();
	fout.close();		
	cout<<"\n\n\nFile successfully written in copy file 'copymyfile'.!!!!!";
	
}