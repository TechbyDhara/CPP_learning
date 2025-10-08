#include <iostream>
using namespace std;
int main()
{
	  int row,col;
	  cout<<"Enter no of rows: ";
	  cin>>row;
	  cout<<"Enter no of cols: ";
	  cin>>col;
      int a[row][col],i,j;
      for(i=0;i<row;i++)
      {
      	cout<<"Enter "<<i+1<<" row:  ";
      	for(j=0;j<col;j++)
        {
        	cin>>a[i][j];
        }
	  }
	  cout<<"\n\n<-----Inputed values---->\n";
	  for(i=0;i<row;i++)
      {
      	cout<<"\n";
      	for(j=0;j<col;j++)
        {
        	cout<<"\t"<<a[i][j];
        }
	  }
}