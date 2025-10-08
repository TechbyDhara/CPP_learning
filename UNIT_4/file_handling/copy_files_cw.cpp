#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	char s;
	fin.open("myfile.txt");
	fout.open("copymyfile.txt");
	while(fin.get(s))
	{
		cout<<s;
		fout.put(s);
	}
	fin.close();
	fout.close();		
	cout<<"\n\n\nFile successfully written in copy file 'copymyfile'.!!!!!";
	
}