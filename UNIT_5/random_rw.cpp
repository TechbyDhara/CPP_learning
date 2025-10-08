#include <iostream>
#include <fstream>
using namespace std;
struct stud{
   int rolno;
   char nm[25];	
};
int main()
{
	fstream file("datarw.txt",ios::in|ios::out|ios::binary|ios::trunc);
	struct stud s;
	for(int i=1;i<=3;i++)
	{
		cout<<"\nEnter Roll no: ";
		cin>>s.rolno;
		cout<<"\nEnter Name: ";
		cin>>s.nm;
		file.write((char*)&s,sizeof(s));
	}
	cout<<"\nfile content------------>";
	file.seekg(0,ios::beg);
	for(int i=1;i<=3;i++)
	{
		
		file.read((char*)&s,sizeof(s));
		cout<<"\nrolno: "<<s.rolno<<"Name: "<<s.nm;
	}
	file.close();
    
}