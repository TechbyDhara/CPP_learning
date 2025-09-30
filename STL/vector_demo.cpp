#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<double>v1={45.3,343.4,64.4};
	vector<int>v2;
    vector<int>v3(5,7);
	char xd='a';
	float a=34.34;
	cout<<"\n\nVector 1 (double)\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}	
    cout<<"\n\nVector 2(int)\n\n";
	for(double x:v2)
	{
		cout<<"\t"<<x;
	}	
    cout<<"\n\nVector 3 (int)\n\n";
	for(double x:v3)
	{
		cout<<"\t"<<x;
	}	
}