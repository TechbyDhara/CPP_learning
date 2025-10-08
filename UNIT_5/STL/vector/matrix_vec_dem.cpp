#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>>matrix={
		{1,2,3},
		{3,4,5},
		{5,6,7}	
	};
	
	cout<<"\n\nDiplay 2D vector: \n\n";
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout<<" "<<matrix[i][j];
		}
		cout<<"\n";
	}
}