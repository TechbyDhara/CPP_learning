#include <iostream>
using namespace std;
int main()
{
	int f=0;
	cout<<"Enter number: ";
	
	for(int j=2;j<100;j++)
	{
		for(int i=2;i<j;i++)
		{
			if(j%i==0)
			{
			    f=1;
			    break;
			    goto lab;
			}			
		}
		lab: 
		   if(f==1)
			{
			  cout<<j<<", ";  
	     	}
   }
	return 0;
}