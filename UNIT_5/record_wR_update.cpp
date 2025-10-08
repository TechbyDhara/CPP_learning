#include <iostream>
#include <fstream>
using namespace std;
struct stude{
    int rno;
	char nm[20];	
};
int main()
{
	fstream file("file5.txt",ios::in|ios::out|ios::binary|ios::trunc);
	struct stude s;
	for(int i=1;i<=3;i++)
	{
		cout<<"Enter rno and name: ";
		cin>>s.rno>>s.nm;
		file.write((char*)&s,sizeof(s));
	}
	int n;
	cout<<"Enter no of record of update: ";
	cin>>n;
	file.seekg((n-1)*sizeof(s),ios::beg);
	cout<<s.rno<<s.nm;
	file.write((char*)&s,sizeof(s));
	cout<<"\nFile content: "<<endl;
	file.seekg(0,ios::beg);
	
	for(int i=1;i<=3;i++)
	{
		file.read((char*)&s,sizeof(s));
		cout<<"\nRno: "<<s.rno<<"\nName: "<<s.nm;
	}
	file.close();
	
}