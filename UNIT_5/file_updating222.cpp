#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("tfile.txt",ios::in|ios::out);
	char uc[40];
	int pos,nchar;
	cout<<"\nEnter position: ";
	cin>>pos;
	cout<<"Enter no of char: ";
	cin>>nchar;
	cout<<"Enter char: ";
	cin>>uc;
	fin.seekg(pos,ios::beg);
	fin<<uc;
	fin.seekg(0,ios::beg);
	char sh;
	while(fin.get(sh))
	{
		cout<<sh;
	}
	
}
