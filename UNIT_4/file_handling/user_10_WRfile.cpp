#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	char s[10][25];
	fout.open("studentfile.txt");
	int i=0;
	cout<<"\nEnter 10 students name: ";
	while(i<10)
	{
		cout<<"student "<<i+1<<":= ";
	    cin>>s[i];
	    fout<<s[i]<<"\n";
		i++;		
	}
	cout<<"\nFile successfully written.!!!!!";
	fout.close();
	
	
    ifstream fin("studentfile.txt");
	char sh;
	while(fin.get(sh))
	{
		cout<<sh;
	}
	fin.close();
	
}