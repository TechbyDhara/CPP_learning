#include <iostream>
#include <vector>
#include<algorithm>
#include <typeinfo>
using namespace std;
int main()
{
	vector<double>v1={45.3,343.4,64.4};
	vector<int>v2;
	char xd='a';
	float a=34.34;
	cout<<"\n\nVector 1 (double)\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}	
	
	v1.front();
		cout<<"\n\nVector 1 (double) ---> front()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	v1.back();
	cout<<"\n\nVector 1 (double) ---> back()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	v1.push_back(45.4);
	cout<<"\n\nVector 1 (double) ---> Push_back()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	v1.pop_back();
	cout<<"\n\nVector 1 (double) --->Pop_back()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	v1.insert(v1.begin(),5.5);
	cout<<"\n\nVector 1 (double) ---> insert()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	cout<<"\n\nTotal no. of Values (distance): "<<distance(v1.begin(),v1.end());
	
	cout<<"\n\nIs empty (vector v2): "<<v2.empty();
	
	
	
	auto f = find(v1.begin(),v1.end(),343.4);
	cout<<"\n\nVector position of element: "<<distance(v1.begin(),f);
	

	cout <<"\n\nData type find (TypeId): "<< typeid(a).name() << endl;
	
	v1.erase(v1.end());
	cout<<"\n\nVector 1 (double) ---> erase()\n\n";
	for(double x:v1)
	{
		cout<<"\t"<<x;
	}
	
	
	
	
	
}
