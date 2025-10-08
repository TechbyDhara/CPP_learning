#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file("tfile.txt",ios::in|ios::out);
	cout<<"\nFile full content......!!!!!!!\n\n";
	char c,uc[40];
	int pos=0,nchar=0;
	while(file.get(c))
	{
		cout<<c;
	}
	file.seekg(0,ios::beg);
	cout<<"\n\nEnter position: ";
	cin>>pos;
	cout<<"Enter no of char: ";
	cin>>nchar;
	cout<<"Enter char: ";
	cin>>uc;
	file.seekg(pos,ios::beg);
	//fin.get(c,nchar+1);
	file<<uc;
	cout<<"\n\n file after updating...!!\n\n";
//	char s;
//	file.clear();
//	file.seekg(0,ios::beg);
//	while(file.get(c))
//	{
//		cout<<c;
//	}
}