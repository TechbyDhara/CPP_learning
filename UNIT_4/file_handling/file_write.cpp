#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("myfile.txt");
	fout<<"Hello...this is first programm..!!!!";
	fout<<"\n myfile.txt";
	cout<<"File successfully written.!!!!!";
	fout.close();
}