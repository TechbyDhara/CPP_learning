#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>>a={
		{1,2,3},
		{3,4,5},
		{5,6,7}	
	};
	vector<vector<int>>b={
		{1,2,3},
		{3,4,5},
		{5,6,7}	
	};
	vector<vector<int>>c(3,vector<int>(3,0));
	
	cout<<"\n\nDiplay 2D vector matrix A: \n\n";
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\nDiplay 2D vector matrix B: \n\n";
	for(int i=0;i<b.size();i++)
	{
		for(int j=0;j<b[i].size();j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\nAddition of Two matrix(3x3): \n\n";
	for(int i=0;i<c.size();i++)
	{
		for(int j=0;j<c[i].size();j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<" "<<c[i][j];
		}
		cout<<"\n";
	}
}