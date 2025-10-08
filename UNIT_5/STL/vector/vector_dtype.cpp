#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<double>v1={45.3,343.4,64.4};
	vector<char> v2={'a','v','e','f'};
	vector<string> v3={"dhara","kateshiya","hello"};
	cout<<"\n\nVector 1 (double)\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}	
	
	cout<<"\n\nVector 2 (char)\n\n";
	for(char x:v2)
	{
		cout<<"\t"<<x;
	}
	cout<<"\n\nVector 3 (string)\n\n";
	for(string x:v3)
	{
		cout<<"\t"<<x;
	}
}
