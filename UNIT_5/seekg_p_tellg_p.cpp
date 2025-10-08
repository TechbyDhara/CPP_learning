#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream fin("myff.txt",ios::in|ios::out);
	char s[30];
	int pos,nchar;
	cout<<"\nEnter position: ";
	cin>>pos;
	cout<<"Enter no of char: ";
	cin>>nchar;
	fin.seekg(pos,ios::beg);
	fin.get(s,nchar+1);
	cout<<s<<endl;
	//fin.clear();
	fin.seekg(0,ios::beg);
	char sh[40];
	while(fin.getline(sh,30))
	{
		cout<<sh<<endl;
	}
	
}